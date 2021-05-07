function [t,y] = odeStrLine(tspan,y0,npts,dir,waveType,rayGd)
 % just evolve the ray trajectory in a straight line segment at the
 % appropriate speed with npts and in the direction given by dir (= +1
 %    or -1) which accommodates the case when the ray is integrated
 %    backwards in time.
 %
 %    y0 is a column vector: [z r kz kr]'
 
    global cnst
    
    
    t = linspace(0,tspan(2)-tspan(1),npts)'; % time increment in ps
    ttmp = [t t];
    
    k0 = y0(3:4)';                 % turn into a row vector
    kdir = k0/sqrt(dot(k0,k0)); 
    x0 =y0(1:2)';                  % position row vector

    
    switch waveType
      case 'EM'
        speed = cnst.cumps;  % vacuum speed of light in um/ps
      case 'EPW'
        % interpOnTraj wants y0 to be a row vector
        %
        localTe = interpOnTraj('valsTe',y0',rayGd);   % eV
        speed = (cnst.vTe1eV)*sqrt(localTe);          % estimate using local Te      
      otherwise
        error('bad wave type in odeStrLine')
    end    
    
    deltaX = dir*speed*kdir;        % [vz vr]
    % x = x0 + t*v
    x = repmat(x0,npts,1) + ttmp.*repmat(deltaX,npts,1);   % speed
                                                           % needs
                                                           % to be
                                                           % in
                                                           % um/ps
    k = repmat(k0,npts,1);
    y = [x k];
 end