function bundleOut_internal = propAlg(rayBundle,rayGd,tStep,margin,npts,cnst)
    % Integrate all the rays in the bundle one at a time 
     rayBundle_nrays = rayBundle.nrays;
     rayBundle_halt = rayBundle.halt;
     rayBundle_trajs = rayBundle.trajs;
     rayBundle_type = rayBundle.type;
     %rayBundle_rayICs = rayBundle.rayICs;
     rayBundle_frequency = rayBundle.frequency;
     rayBundle_nc = rayBundle.nc;
     %rayBundle_direction = rayBundle.direction;
     
     c=cnst.c;
     clum  = (c)*(1.e-6);  % speed of light in microns/ps
     ln10  = cnst.ln10;
     twopi = cnst.twopi;
     wpe = cnst.wpe;
     vTe1eV = cnst.vTe1eV;
     cnstVar = [c,clum,ln10,twopi,wpe,vTe1eV];
    parfor rayIdx = 1:rayBundle_nrays
       % check to see if we need to move this ray
     if rayBundle_halt(rayIdx)
         continue  % skip to next ray (iteration of loop)
     end
     

     lastInfo = rayBundle_trajs{rayIdx}(end,:); % use the last time info
     x0 = lastInfo(2:3);   % position row vector
     k0 = lastInfo(4:5);   % wave vector row vector
     tPrev = lastInfo(1);
     %end

     % TO DO: deal with the case where rayBundle.frequency is a row vector
     %
     omega_ps = 1.e-12*rayBundle_frequency(rayIdx);
     dirn = sign(omega_ps);             % see w hich direction we're going
     tStop = tPrev+tStep;
     tSpan = [tPrev, tStop];     
     ray0 = [x0, k0]';                  % initial condition (column vector)
                                        % in phase space for ode integrator


     if tStop > tPrev
         switch rayBundle_type
           case 'EM'
             [tr,yr] = ode45(@(t,y) odeEmRayFun(t,y,omega_ps, ...
                                                rayGd,margin,cnstVar),tSpan,ray0);
           otherwise %assuming EPW is the only other possibility
             [tr,yr] = ode45(@(t,y) odeLwRayFun(t,y,omega_ps, ...
                                                rayGd,margin,cnstVar),tSpan,ray0);           
         end
         
         newTraj = [tr,yr];   % because otherwise ode45 will return
                              % a struct         
         % need to check and set halt flags if we are too close to
         % theboundary at the last time
         %
         withinMargin = inDomain(yr(end,1:2),rayGd,margin);
         if any(~withinMargin)
             rayBundle_halt(rayIdx) = 1;   % set halt flag for
                                           % out-of-margin
         end
         % attach solution to rayBundle structure
         %  have two cases here... 
         %if trajIsNew
         %    rayBundle.trajs{rayIdx} = newTraj;
         %else
             % append to existing
         oldTraj = rayBundle_trajs{rayIdx}(1:end-1,:); % drop IC
         newPath = [oldTraj; newTraj];
         rayBundle_trajs{rayIdx} = newPath(:,1:5);
             %             rayBundle.trajs{rayIdx} = newTraj;   % debug
         %end
       end  % the if tSpan.
          
 end   % for loop over rays
 rayBundle.halt = rayBundle_halt;
 rayBundle.trajs = rayBundle_trajs;
 
 bundleOut_internal = rayBundle; 
 
end 