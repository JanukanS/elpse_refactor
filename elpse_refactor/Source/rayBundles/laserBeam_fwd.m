function launchList = laserBeam(frequency,nrays,focalPt,angle,spotType,spotDiameter)
    launchList.type = 'laserBeam';
    launchList.mode = 'forward'; 
    launchList.frequency = frequency;
    launchList.nrays = nrays;
    launchList.focalPt;
    launchList.spot.type = spotType;
    launchList.spot.diameter = spotDiameter;

end