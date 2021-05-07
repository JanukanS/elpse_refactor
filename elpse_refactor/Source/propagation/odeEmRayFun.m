
 function dydt = odeEmRayFun(t,y,omega_ps,rayGd,margin,cVar)
 % RHS for our ray ode for electromagnetic waves
 %
 %     t        - time in ps
 %     y        - phase space point [z r kz kr] ('?)
 %     omega_ps - EM wave frequency in 1/ps
 %     rayGd    - grid struct 
 %  output dydt is a column vector:
 %  dydt = [dz/dt,dr/dt,dk_z/dt,dk_r/dt]'
 %

 %
 % Added a check to ensure that the position y(1:2) where
 % the RHS is to be evaluated is inside the domain where
 % the grid data is defined. Attempting to evaluate outside
 % of the domain will give "triangulation" errors, i.e.,
 % the pointLocation() function will give an error.
 %
 % If the point is outside the domain the function will
 % return zero for dydt in the second and third positions
 %
 % The same needs to be done for odeLwRayFun but I haven't
 % implemented it yet.
 %
 % (JFM 21 July, 2020)
     
    c = cVar(1);%.c;
    clum  = cVar(2);
    ln10  = cVar(3);
    twopi = cVar(4);
    % need these
    lambdaum = twopi*clum/abs(omega_ps); % vac wavelength microns
    kVac = abs(omega_ps)/clum;           % vacuum wavenumber 1/um
    nc = 1.1e21/lambdaum^2;              % crit density in 1/cm^3

    x = y(1:2);       % current position at phase space point y
    kVec = y(3:4);    % current ray wavevector at phase space point y

    goodPt = inDomain(x',rayGd,margin);       
    %goodPt = 1;
    
    if goodPt
        % interpolation for current position
        %[ti,bc] = pointLocation(rayGd.DT,x');  % Delauney triangles    
        [weights,inds] = rectLocate(x,rayGd.zVal,rayGd.rVal);
        %triValNe = rayGd.valsNe(rayGd.DT(ti,:));
        %logNe = dot(bc',triValNe')';     % log10 of electron density
                                         %    disp(logNe)  % debugging
        logNe = triInterp(weights,inds,rayGd.gridNe);
        netonc = 10^(logNe)/nc;
        
        %triValDLogNedz = rayGd.valsDLogNedz(rayGd.DT(ti,:));
        %dLogNedz = dot(bc',triValDLogNedz')';   % at phase space point
        dLogNedz = triInterp(weights,inds,rayGd.gridDLogNedz);                                     

        %triValDLogNedr = rayGd.valsDLogNedr(rayGd.DT(ti,:));
        %dLogNedr = dot(bc',triValDLogNedr')';   % at phase space point
        dLogNedr = triInterp(weights,inds,rayGd.gridDLogNedr);  
        
        dzdt = sign(omega_ps)*clum*kVec(1)/kVac;
        drdt = sign(omega_ps)*clum*kVec(2)/kVac;    
        dkzdt = -0.5*ln10*omega_ps*netonc*dLogNedz;
        dkrdt = -0.5*ln10*omega_ps*netonc*dLogNedr;
        
        dydt = [dzdt,drdt,dkzdt,dkrdt]'; % column vector 
    else
        % move ray in a straight line
        dzdt = sign(omega_ps)*clum*kVec(1)/kVac;
        drdt = sign(omega_ps)*clum*kVec(2)/kVac;    
        dkzdt = 0.0;
        dkrdt = 0.0;
        
        dydt = [dzdt,drdt,dkzdt,dkrdt]'; % column vector         
    end    
    
end

 