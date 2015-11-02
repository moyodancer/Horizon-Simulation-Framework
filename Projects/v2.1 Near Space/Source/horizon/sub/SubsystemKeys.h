// Access Subsystem Keys
#define SUBNAME_ACCESS "AccessToTarget"

// Adcs Subsystem Keys
#define SUBNAME_ADCS "Adcs"
#define STATEVARNAME_POINTVEC "ECI_Pointing_Vector(XYZ)"

#define POINTVEC_KEY StateVarKey<Matrix> (STATEVARNAME_POINTVEC)

// Comm Subsystem Keys
#define SUBNAME_COMM "Comm"
#define STATEVARNAME_DATARATE "DataRate(MB/s)"

#define DATARATE_KEY StateVarKey<double> (STATEVARNAME_DATARATE)

// EOSensor Subsystem Keys
#define SUBNAME_EOSENSOR "EOSensor"
#define STATEVARNAME_PIXELS "numPixels"
#define STATEVARNAME_INCIDENCE "IncidenceAngle"
#define STATEVARNAME_EOON "EOSensorOn"

#define PIXELS_KEY StateVarKey<double> (STATEVARNAME_PIXELS)
#define INCIDENCE_KEY StateVarKey<double> (STATEVARNAME_INCIDENCE)
#define EOON_KEY StateVarKey<bool> (STATEVARNAME_EOON)

// Power Subsystem Keys
#define SUBNAME_POWER "Power"
#define STATEVARNAME_DOD "DepthofDischarge"
#define STATEVARNAME_POWIN "SolarPanelPowerIn"

#define DOD_KEY StateVarKey<double>(STATEVARNAME_DOD)
#define POWIN_KEY StateVarKey<double>(STATEVARNAME_POWIN)

// Ssdr Subsystem Keys
#define SUBNAME_SSDR "SSDR"
#define STATEVARNAME_DATABUFFERRATIO "DataBufferFillRatio"

#define DATABUFFERRATIO_KEY StateVarKey<double> (STATEVARNAME_DATABUFFERRATIO)

// BalloonDynamics Subsystem Keys
#define SUBNAME_BALLOON "Balloon"
#define STATEVARNAME_BALLPOS "balloonPosition"
#define STATEVARNAME_BALLVEL "balloonVelocity"
#define STATEVARNAME_BALLGEOM "balloonGeom"

#define BALLPOS_KEY StateVarKey<Matrix> (STATEVARNAME_BALLPOS)
#define BALLVEL_KEY StateVarKey<Matrix> (STATEVARNAME_BALLVEL)
#define BALLGEOM_KEY StateVarKey<Matrix> (STATEVARNAME_BALLGEOM)

// ssDynamics Subsystem Keys
#define SUBNAME_SS "StratoSail"
#define STATEVARNAME_SSPOS "StratoSailPosition"
#define STATEVARNAME_SSVEL "StratoSailVelocity"
#define STATEVARNAME_SSGEOM "StraoSailGeom"

#define SSPOS_KEY StateVarKey<Matrix> (STATEVARNAME_SSPOS)
#define SSVEL_KEY StateVarKey<Matrix> (STATEVARNAME_SSVEL)
#define SSGEOM_KEY StateVarKey<Matrix> (STATEVARNAME_SSGEOM)

// blimpDynamics Subsystem Keys
#define SUBNAME_BLIMP "Blimp"
#define STATEVARNAME_BLIMPPOS "BlimpPosition"
#define STATEVARNAME_BLIMPVEL "BlimpVelocity"
#define STATEVARNAME_BLIMPTHRUST "BlimpThrust"
#define STATEVARNAME_AIRVOL "AirVol"

#define BLIMPPOS_KEY StateVarKey<Matrix> (STATEVARNAME_BLIMPPOS)
#define BLIMPVEL_KEY StateVarKey<Matrix> (STATEVARNAME_BLIMPVEL)
#define BLIMPTHRUST_KEY StateVarKey<double> (STATEVARNAME_BLIMPTHRUST)
#define BLIMPAIRVOL_KEY StateVarKey<double> (STATEVARNAME_AIRVOL)
