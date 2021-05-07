function inRange = inDomain(x,rayGd,margin)
 % INDOMAIN - given a column vector of positions x, return a list
 % of logicals showing if they are in the domain (given by rayGd)
 % or not
 %   
     
    %if ~exist('margin','var')
    %    margin = [0 0 0 0];    % margin in zmin zmaz rmin rmax (um)
    %end
    
    rayZ = x(:,1);
    rayR = x(:,2);
    
    zmin = rayGd.domain(1) + margin(1);
    zmax = rayGd.domain(2) - margin(2);
    rmin = rayGd.domain(3) + margin(3);
    rmax = rayGd.domain(4) - margin(4);
    
    % could write as zmin = (rayGd.domain+margin)(1)
    
    inRrange = (rayR < rmax) & (rayR > rmin);
    inZrange = (rayZ < zmax) & (rayZ > zmin);
    inRange = inRrange & inZrange;
 end