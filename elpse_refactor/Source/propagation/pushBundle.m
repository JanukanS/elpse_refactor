
function bundleOut = pushBundle(rayBundle,rayGd,tStep,margin,npts)
% 
% First cut at developing a ray integrator for EM and other waves:
% (JFM May 28, 2020)
%
% Perhaps trajIsNew should be replaced with pushFromBoundary? This
%  might help with the problems associated with integrating 
%  trajectories that could potentially leave the domain, and
%  where we currently have problems with "margin" (JFM 21 July, 2020).
%
 
 global cnst
 
 if ~exist('cnst','var')
     cnst = initCnst;              % will put more things in initCnst...
 end

 if ~exist('margin','var')
     margin = [150 150 150 150];   % margin around domain in microns
 end

 if ~exist('npts','var')
     npts = 2000;                  % points to use in str line check
 end
 for rayIdx = 1:rayBundle.nrays
     if rayBundle.halt(rayIdx)
         continue  % skip to next ray (iteration of loop)
     end
     trajIsNew = isempty(rayBundle.trajs{rayIdx}); 
     if trajIsNew    % need IC's for trajectory
         if rayBundle.type == 'EM'
             x0 = rayBundle.rayICs(:,rayIdx)';  % position x0 is row vector here
             % modify arguments to "toDispSurface()" to only what is
             % needed
             %
             k0 = toDispSurface(x0,rayBundle,rayIdx,rayGd);         
             tPrev = 0;                         % start from t=0
             rayInit = [tPrev,x0,k0];
             rayBundle.trajs{rayIdx} = rayInit;
         else
             error('Currently new trajectories are for EM waves only')
         end     
     end
 end
 if rayBundle.type ~= "EM" && rayBundle.type ~= "EPW"
     exit("Wave type not supported")
 elseif rayBundle.type == "EPW"
     rayBundle.nc = zeros([1,length(rayBundle.frequency)]);
 end
 
 %only include required portions of rayGd
 rgd_req.zVal = rayGd.zVal;
 rgd_req.rVal = rayGd.rVal;
 rgd_req.gridNe = rayGd.gridNe;
 rgd_req.gridDLogNedz = rayGd.gridDLogNedz;
 rgd_req.gridDLogNedr = rayGd.gridDLogNedr;
 rgd_req.gridTe = rayGd.gridTe;
 rgd_req.gridDLnTedr = rayGd.gridDLnTedr;
 rgd_req.gridDLnTedz = rayGd.gridDLnTedz;
 rgd_req.domain = rayGd.domain;

 %only include required portion of bundle
 rb_req.frequency = rayBundle.frequency;
 rb_req.nc = rayBundle.nc;
 rb_req.type = rayBundle.type;
 rb_req.mode = rayBundle.mode;
 rb_req.nrays = rayBundle.nrays;
 %rb_req.direction = rayBundle.direction;
 rb_req.trajs = rayBundle.trajs;
 rb_req.halt = logical(rayBundle.halt);
 %disp(length(fieldnames(rb_req)))
 rb_out = propAlg(rb_req,rgd_req,tStep,margin,npts,cnst);
 bundleOut = rayBundle;
 bundleOut.halt = rb_out.halt;
 bundleOut.trajs = rb_out.trajs;
end


 
 
 


 