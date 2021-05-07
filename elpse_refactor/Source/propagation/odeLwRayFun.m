function dydt = odeLwRayFun(t,y,omega_ps,rayGd,margin,cVar)
 % RHS for our ray ode for Langmuir waves
 %  output dydt is a column vector:
 %  dydt = [dz/dt,dr/dt,dk_z/dt,dk_r/dt]'
     
 % NOTE: here omega_ps is a scalar (since we deal with a single ray)
 
    

    c = cVar(1);%.c;
    clum  = cVar(2);
    ln10  = cVar(3);
    twopi = cVar(4);
    wpeFac = cVar(5);
    vTe1eV = cVar(6);
    
    omega = omega_ps;   % wave frequency in rads/ps

    x = y(1:2);     % current position at phase space point y
    kVec = y(3:4);  % current ray wavevector at phase space point y
    k2 = dot(kVec,kVec);

    goodPt = inDomain(x',rayGd,margin);       
    %goodPt = 1;    
    
    if goodPt
        % interpolation for current position
        [weights,inds] = rectLocate(x,rayGd.zVal,rayGd.rVal); %locations of rectangle nodes and weights  
        
        % density
        %triValNe = rayGd.valsNe(rayGd.DT(ti,:));
        %logNe = dot(bc',triValNe')';           % log10 of electron density
        logNe = triInterp(weights,inds,rayGd.gridNe);
                                             
        wpe = (wpeFac)*sqrt(10^logNe)*1.e-12; % electron plasma
                                                % frequency (rad/ps)
                                                %    disp(wpe)

        %triValDLogNedz = rayGd.valsDLogNedz(rayGd.DT(ti,:));
        %dLogNedz = dot(bc',triValDLogNedz')';   % at phase space point
                                                %    disp(dLogNedz)
        dLogNedz = triInterp(weights,inds,rayGd.gridDLogNedz); 
        %triValDLogNedr = rayGd.valsDLogNedr(rayGd.DT(ti,:));
        %dLogNedr = dot(bc',triValDLogNedr')';   % at phase space point
        dLogNedr = triInterp(weights,inds,rayGd.gridDLogNedr); 
        
        % derivatives of electron temperature
        %triValTe = rayGd.valsTe(rayGd.DT(ti,:));
        %Te = dot(bc',triValTe')';        % electron temperature in eV
        Te = triInterp(weights,inds,rayGd.gridTe);
        vTe2 =(vTe1eV*sqrt(Te))^2;  % square of electron thermal velocity (um/ps)^2
        
        %triValDLnTedz = rayGd.valsDLnTedz(rayGd.DT(ti,:));
        %dLnTedz = dot(bc',triValDLnTedz')';   % at phase space point
                                              %    disp(dLnTedz)
        dLnTedz = triInterp(weights,inds,rayGd.gridDLnTedr);
        %triValDLnTedr = rayGd.valsDLnTedr(rayGd.DT(ti,:));
        %dLnTedr = dot(bc',triValDLnTedr')';   % at phase space point
        dLnTedr = triInterp(weights,inds,rayGd.gridDLnTedz);
        
        dzdt = (3.0*vTe2/omega)*kVec(1);
        drdt = (3.0*vTe2/omega)*kVec(2);
        
        dkzdt = -wpe^2/(2.0*omega)*ln10*dLogNedz - (3/2)*(k2*vTe2/ ...
                                                          omega)*dLnTedz;
        
        dkrdt = -wpe^2/(2.0*omega)*ln10*dLogNedr - (3/2)*(k2*vTe2/ ...
                                                          omega)*dLnTedr;
        
        dydt = [dzdt,drdt,dkzdt,dkrdt]'; % column vector 
    else
        Te = 2000.0;                     % dummy electron temperature in eV
        vTe2 =(vTe1eV*sqrt(Te))^2;  % square of elec therm vel (um/ps)

        dzdt = (3.0*vTe2/omega)*kVec(1);
        drdt = (3.0*vTe2/omega)*kVec(2);
        
        dkzdt = 0.0;
        dkrdt = 0.0;
        
        dydt = [dzdt,drdt,dkzdt,dkrdt]'; % column vector         
    end
    
 end

