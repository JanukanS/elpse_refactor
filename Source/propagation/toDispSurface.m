 function k0 = toDispSurface(x0,rayBundle,rayIdx,rayGd)
 % TODISPSURFACE - to do later
 %   
 % TO DO: need this function to work on EPW also
     
     global cnst
     
     % get magnitude of local wavevector
     omega = rayBundle.frequency(rayIdx);       % 1/s
     % TO DO: need to deal with the case that rayBundle.frequency
     % is a row vector
     %
     omega_ps = 1.e-12*omega;           % 1/ps
     % we assume light - need to fix to be more general
     %    we can use rayBundle.type for this...
     kVac = 1.e-6*abs(omega)/cnst.c;    % 1/um

     localNe = 10.^interpOnTraj('valsNe',[x0 x0],rayGd);
     nc = rayBundle.nc(rayIdx);         % 1/cm3
     k0Mag = kVac*sqrt(1-localNe/nc);   % local wavenumber in
                                        % 1/um
     kdir = rayBundle.direction;        % initial direction
                                        % (unit row vector)
     k0 = k0Mag*kdir;                   % initial k (row) vector
                                        % (1/um)
 end 