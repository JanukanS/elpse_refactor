function launchList = laserBeam_fwd(frequency,nrays,focalPt,angle,spotType,spotDiameter,translate)
%LASERBEAM_FWD Defines the launchList struct for a forward laser beam.
%
%launchList = LASERBEAM_FWD(frequency,nrays,focalPt,angle,spotType,spotDiameter,translate)
%
    arguments
        frequency (1,1) {mustBeNumeric} %defined in {Hz}
        nrays (1,1) {mustBeNumeric} %defined in {um}
        focalPt (1,2) {mustBeNumeric} %defined as [z,r] in {um}
        angle (1,1) {mustBeNumeric} %defined in {degrees} measured from target norm
        spotType {mustBeText} %defined as:"SG8" NEED CLARIFICATION
        spotDiameter (1,1) {mustBeNumeric} %measured in {um}
        translate (1,1) {mustBeNumeric} %measured in {um}
    end
    
    launchList.type = 'laserBeam';
    launchList.mode = 'forward'; 
    launchList.frequency = frequency;
    launchList.nrays = nrays;
    launchList.focalPt = focalPt;
    %launchList.angle = angle;
    launchList.spot.type = spotType;
    launchList.spot.diameter = spotDiameter;
    launchList.centroid = [cosd(angle),sind(angle)];
    launchList.translate = translate;
end