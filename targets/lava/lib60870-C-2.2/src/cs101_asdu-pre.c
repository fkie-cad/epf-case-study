#ifdef LAVA_LOGGING
#define LAVALOG(bugid, x, trigger)  ({(trigger && fprintf(stderr, "\nLAVALOG: %d: %s:%d\n", bugid, __FILE__, __LINE__)), (x);})
#endif
#ifdef FULL_LAVA_LOGGING
#define LAVALOG(bugid, x, trigger)  ({(trigger && fprintf(stderr, "\nLAVALOG: %d: %s:%d\n", bugid, __FILE__, __LINE__), (!trigger && fprintf(stderr, "\nLAVALOG_MISS: %d: %s:%d\n", bugid, __FILE__, __LINE__))) && fflush(0), (x);})
#endif
#ifndef LAVALOG
#define LAVALOG(y,x,z)  (x)
#endif
#ifdef DUA_LOGGING
#define DFLOG(idx, val)  ({fprintf(stderr, "\nDFLOG:%d=%d: %s:%d\n", idx, val, __FILE__, __LINE__) && fflush(0), data_flow[idx]=val;})
#else
#define DFLOG(idx, val) {data_flow[idx]=val;}
#endif







typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__
typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
typedef int intptr_t;


typedef unsigned int uintptr_t;
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;


typedef struct {
    int major;
    int minor;
    int patch;
} Lib60870VersionInfo;




typedef enum {
    IEC60870_LINK_LAYER_BALANCED = 0,
    IEC60870_LINK_LAYER_UNBALANCED = 1
} IEC60870_LinkLayerMode;


typedef enum {

    LL_STATE_IDLE,


    LL_STATE_ERROR,


    LL_STATE_BUSY,


    LL_STATE_AVAILABLE
} LinkLayerState;
typedef void (*IEC60870_LinkLayerStateChangedHandler) (int *data_flow, void* parameter, int address, LinkLayerState newState);
typedef void (*IEC60870_RawMessageHandler) (int *data_flow, void* parameter, uint8_t* msg, int msgSize, 
                                                                                       _Bool 
                                                                                            sent);




typedef struct sCS101_AppLayerParameters* CS101_AppLayerParameters;

struct sCS101_AppLayerParameters {
    int sizeOfTypeId;
    int sizeOfVSQ;
    int sizeOfCOT;
    int originatorAddress;
    int sizeOfCA;
    int sizeOfIOA;
    int maxSizeOfASDU;
};




typedef struct sCS101_ASDU* CS101_ASDU;

typedef struct {
    CS101_AppLayerParameters parameters;
    uint8_t* asdu;
    int asduHeaderLength;
    uint8_t* payload;
    int payloadSize;
    uint8_t encodedData[256];
} sCS101_StaticASDU;

typedef sCS101_StaticASDU* CS101_StaticASDU;

typedef struct sCP16Time2a* CP16Time2a;

struct sCP16Time2a {
    uint8_t encodedValue[2];
};

typedef struct sCP24Time2a* CP24Time2a;

struct sCP24Time2a {
    uint8_t encodedValue[3];
};

typedef struct sCP32Time2a* CP32Time2a;




struct sCP32Time2a {
    uint8_t encodedValue[4];
};




typedef struct sCP56Time2a* CP56Time2a;

struct sCP56Time2a {
    uint8_t encodedValue[7];
};




typedef struct sBinaryCounterReading* BinaryCounterReading;

struct sBinaryCounterReading {
    uint8_t encodedValue[5];
};




typedef struct sCS104_APCIParameters* CS104_APCIParameters;

struct sCS104_APCIParameters {
    int k;
    int w;
    int t0;
    int t1;
    int t2;
    int t3;
};

typedef enum {
    M_SP_NA_1 = 1,
    M_SP_TA_1 = 2,
    M_DP_NA_1 = 3,
    M_DP_TA_1 = 4,
    M_ST_NA_1 = 5,
    M_ST_TA_1 = 6,
    M_BO_NA_1 = 7,
    M_BO_TA_1 = 8,
    M_ME_NA_1 = 9,
    M_ME_TA_1 = 10,
    M_ME_NB_1 = 11,
    M_ME_TB_1 = 12,
    M_ME_NC_1 = 13,
    M_ME_TC_1 = 14,
    M_IT_NA_1 = 15,
    M_IT_TA_1 = 16,
    M_EP_TA_1 = 17,
    M_EP_TB_1 = 18,
    M_EP_TC_1 = 19,
    M_PS_NA_1 = 20,
    M_ME_ND_1 = 21,
    M_SP_TB_1 = 30,
    M_DP_TB_1 = 31,
    M_ST_TB_1 = 32,
    M_BO_TB_1 = 33,
    M_ME_TD_1 = 34,
    M_ME_TE_1 = 35,
    M_ME_TF_1 = 36,
    M_IT_TB_1 = 37,
    M_EP_TD_1 = 38,
    M_EP_TE_1 = 39,
    M_EP_TF_1 = 40,
    C_SC_NA_1 = 45,
    C_DC_NA_1 = 46,
    C_RC_NA_1 = 47,
    C_SE_NA_1 = 48,
    C_SE_NB_1 = 49,
    C_SE_NC_1 = 50,
    C_BO_NA_1 = 51,
    C_SC_TA_1 = 58,
    C_DC_TA_1 = 59,
    C_RC_TA_1 = 60,
    C_SE_TA_1 = 61,
    C_SE_TB_1 = 62,
    C_SE_TC_1 = 63,
    C_BO_TA_1 = 64,
    M_EI_NA_1 = 70,
    C_IC_NA_1 = 100,
    C_CI_NA_1 = 101,
    C_RD_NA_1 = 102,
    C_CS_NA_1 = 103,
    C_TS_NA_1 = 104,
    C_RP_NA_1 = 105,
    C_CD_NA_1 = 106,
    C_TS_TA_1 = 107,
    P_ME_NA_1 = 110,
    P_ME_NB_1 = 111,
    P_ME_NC_1 = 112,
    P_AC_NA_1 = 113,
    F_FR_NA_1 = 120,
    F_SR_NA_1 = 121,
    F_SC_NA_1 = 122,
    F_LS_NA_1 = 123,
    F_AF_NA_1 = 124,
    F_SG_NA_1 = 125,
    F_DR_TA_1 = 126,
    F_SC_NB_1 = 127
} IEC60870_5_TypeID;

typedef IEC60870_5_TypeID TypeID;

const char*
TypeID_toString(int *data_flow, TypeID self);

typedef uint8_t QualityDescriptor;




typedef uint8_t QualityDescriptorP;
typedef uint8_t StartEvent;
typedef uint8_t OutputCircuitInfo;
typedef uint8_t QualifierOfParameterMV;
typedef uint8_t CauseOfInitialization;
typedef uint8_t QualifierOfCommand;
typedef uint8_t SelectAndCallQualifier;
typedef uint8_t QualifierOfInterrogation;
typedef uint8_t QualifierOfCIC;
typedef uint8_t QualifierOfRPC;
typedef uint8_t QualifierOfParameterActivation;







typedef uint8_t SetpointCommandQualifier;

typedef enum {
    IEC60870_DOUBLE_POINT_INTERMEDIATE = 0,
    IEC60870_DOUBLE_POINT_OFF = 1,
    IEC60870_DOUBLE_POINT_ON = 2,
    IEC60870_DOUBLE_POINT_INDETERMINATE = 3
} DoublePointValue;

typedef enum {
    IEC60870_EVENTSTATE_INDETERMINATE_0 = 0,
    IEC60870_EVENTSTATE_OFF = 1,
    IEC60870_EVENTSTATE_ON = 2,
    IEC60870_EVENTSTATE_INDETERMINATE_3 = 3
} EventState;




typedef enum {
    IEC60870_STEP_INVALID_0 = 0,
    IEC60870_STEP_LOWER = 1,
    IEC60870_STEP_HIGHER = 2,
    IEC60870_STEP_INVALID_3 = 3
} StepCommandValue;

typedef uint8_t tSingleEvent;

typedef tSingleEvent* SingleEvent;

void
SingleEvent_setEventState(int *data_flow, SingleEvent self, EventState eventState);

EventState
SingleEvent_getEventState(int *data_flow, SingleEvent self);

void
SingleEvent_setQDP(int *data_flow, SingleEvent self, QualityDescriptorP qdp);

QualityDescriptorP
SingleEvent_getQDP(int *data_flow, SingleEvent self);


typedef struct sStatusAndStatusChangeDetection tStatusAndStatusChangeDetection;

typedef tStatusAndStatusChangeDetection* StatusAndStatusChangeDetection;

struct sStatusAndStatusChangeDetection {
    uint8_t encodedValue[4];
};

uint16_t
StatusAndStatusChangeDetection_getSTn(int *data_flow, StatusAndStatusChangeDetection self);

uint16_t
StatusAndStatusChangeDetection_getCDn(int *data_flow, StatusAndStatusChangeDetection self);

void
StatusAndStatusChangeDetection_setSTn(int *data_flow, StatusAndStatusChangeDetection self, uint16_t value);


_Bool

StatusAndStatusChangeDetection_getST(int *data_flow, StatusAndStatusChangeDetection self, int index);


_Bool

StatusAndStatusChangeDetection_getCD(int *data_flow, StatusAndStatusChangeDetection self, int index);






typedef struct sInformationObject* InformationObject;






int
InformationObject_getMaxSizeInMemory(int *data_flowvoid);

int
InformationObject_getObjectAddress(int *data_flow, InformationObject self);

TypeID
InformationObject_getType(int *data_flow, InformationObject self);
void
InformationObject_destroy(int *data_flow, InformationObject self);





typedef struct sSinglePointInformation* SinglePointInformation;

SinglePointInformation
SinglePointInformation_create(int *data_flow, SinglePointInformation self, int ioa, 
                                                                   _Bool 
                                                                        value,
        QualityDescriptor quality);


_Bool

SinglePointInformation_getValue(int *data_flow, SinglePointInformation self);

QualityDescriptor
SinglePointInformation_getQuality(int *data_flow, SinglePointInformation self);

void
SinglePointInformation_destroy(int *data_flow, SinglePointInformation self);





typedef struct sSinglePointWithCP24Time2a* SinglePointWithCP24Time2a;

SinglePointWithCP24Time2a
SinglePointWithCP24Time2a_create(int *data_flow, SinglePointWithCP24Time2a self, int ioa, 
                                                                         _Bool 
                                                                              value,
        QualityDescriptor quality, CP24Time2a timestamp);

void
SinglePointWithCP24Time2a_destroy(int *data_flow, SinglePointWithCP24Time2a self);

CP24Time2a
SinglePointWithCP24Time2a_getTimestamp(int *data_flow, SinglePointWithCP24Time2a self);





typedef struct sSinglePointWithCP56Time2a* SinglePointWithCP56Time2a;

SinglePointWithCP56Time2a
SinglePointWithCP56Time2a_create(int *data_flow, SinglePointWithCP56Time2a self, int ioa, 
                                                                         _Bool 
                                                                              value,
        QualityDescriptor quality, CP56Time2a timestamp);

void
SinglePointWithCP56Time2a_destroy(int *data_flow, SinglePointWithCP56Time2a self);

CP56Time2a
SinglePointWithCP56Time2a_getTimestamp(int *data_flow, SinglePointWithCP56Time2a self);






typedef struct sDoublePointInformation* DoublePointInformation;

void
DoublePointInformation_destroy(int *data_flow, DoublePointInformation self);

DoublePointInformation
DoublePointInformation_create(int *data_flow, DoublePointInformation self, int ioa, DoublePointValue value,
        QualityDescriptor quality);

DoublePointValue
DoublePointInformation_getValue(int *data_flow, DoublePointInformation self);

QualityDescriptor
DoublePointInformation_getQuality(int *data_flow, DoublePointInformation self);





typedef struct sDoublePointWithCP24Time2a* DoublePointWithCP24Time2a;

void
DoublePointWithCP24Time2a_destroy(int *data_flow, DoublePointWithCP24Time2a self);

DoublePointWithCP24Time2a
DoublePointWithCP24Time2a_create(int *data_flow, DoublePointWithCP24Time2a self, int ioa, DoublePointValue value,
        QualityDescriptor quality, CP24Time2a timestamp);

CP24Time2a
DoublePointWithCP24Time2a_getTimestamp(int *data_flow, DoublePointWithCP24Time2a self);





typedef struct sDoublePointWithCP56Time2a* DoublePointWithCP56Time2a;

DoublePointWithCP56Time2a
DoublePointWithCP56Time2a_create(int *data_flow, DoublePointWithCP56Time2a self, int ioa, DoublePointValue value,
        QualityDescriptor quality, CP56Time2a timestamp);

void
DoublePointWithCP56Time2a_destroy(int *data_flow, DoublePointWithCP56Time2a self);

CP56Time2a
DoublePointWithCP56Time2a_getTimestamp(int *data_flow, DoublePointWithCP56Time2a self);





typedef struct sStepPositionInformation* StepPositionInformation;
StepPositionInformation
StepPositionInformation_create(int *data_flow, StepPositionInformation self, int ioa, int value, 
                                                                                _Bool 
                                                                                     isTransient,
        QualityDescriptor quality);

void
StepPositionInformation_destroy(int *data_flow, StepPositionInformation self);

int
StepPositionInformation_getObjectAddress(int *data_flow, StepPositionInformation self);




int
StepPositionInformation_getValue(int *data_flow, StepPositionInformation self);


_Bool

StepPositionInformation_isTransient(int *data_flow, StepPositionInformation self);

QualityDescriptor
StepPositionInformation_getQuality(int *data_flow, StepPositionInformation self);





typedef struct sStepPositionWithCP24Time2a* StepPositionWithCP24Time2a;

void
StepPositionWithCP24Time2a_destroy(int *data_flow, StepPositionWithCP24Time2a self);

StepPositionWithCP24Time2a
StepPositionWithCP24Time2a_create(int *data_flow, StepPositionWithCP24Time2a self, int ioa, int value, 
                                                                                      _Bool 
                                                                                           isTransient,
        QualityDescriptor quality, CP24Time2a timestamp);

CP24Time2a
StepPositionWithCP24Time2a_getTimestamp(int *data_flow, StepPositionWithCP24Time2a self);






typedef struct sStepPositionWithCP56Time2a* StepPositionWithCP56Time2a;

void
StepPositionWithCP56Time2a_destroy(int *data_flow, StepPositionWithCP56Time2a self);

StepPositionWithCP56Time2a
StepPositionWithCP56Time2a_create(int *data_flow, StepPositionWithCP56Time2a self, int ioa, int value, 
                                                                                      _Bool 
                                                                                           isTransient,
        QualityDescriptor quality, CP56Time2a timestamp);

CP56Time2a
StepPositionWithCP56Time2a_getTimestamp(int *data_flow, StepPositionWithCP56Time2a self);





typedef struct sBitString32* BitString32;

void
BitString32_destroy(int *data_flow, BitString32 self);

BitString32
BitString32_create(int *data_flow, BitString32 self, int ioa, uint32_t value);

uint32_t
BitString32_getValue(int *data_flow, BitString32 self);

QualityDescriptor
BitString32_getQuality(int *data_flow, BitString32 self);





typedef struct sBitstring32WithCP24Time2a* Bitstring32WithCP24Time2a;

void
Bitstring32WithCP24Time2a_destroy(int *data_flow, Bitstring32WithCP24Time2a self);

Bitstring32WithCP24Time2a
Bitstring32WithCP24Time2a_create(int *data_flow, Bitstring32WithCP24Time2a self, int ioa, uint32_t value, CP24Time2a timestamp);

CP24Time2a
Bitstring32WithCP24Time2a_getTimestamp(int *data_flow, Bitstring32WithCP24Time2a self);





typedef struct sBitstring32WithCP56Time2a* Bitstring32WithCP56Time2a;

void
Bitstring32WithCP56Time2a_destroy(int *data_flow, Bitstring32WithCP56Time2a self);

Bitstring32WithCP56Time2a
Bitstring32WithCP56Time2a_create(int *data_flow, Bitstring32WithCP56Time2a self, int ioa, uint32_t value, CP56Time2a timestamp);

CP56Time2a
Bitstring32WithCP56Time2a_getTimestamp(int *data_flow, Bitstring32WithCP56Time2a self);





typedef struct sMeasuredValueNormalizedWithoutQuality* MeasuredValueNormalizedWithoutQuality;

void
MeasuredValueNormalizedWithoutQuality_destroy(int *data_flow, MeasuredValueNormalizedWithoutQuality self);

MeasuredValueNormalizedWithoutQuality
MeasuredValueNormalizedWithoutQuality_create(int *data_flow, MeasuredValueNormalizedWithoutQuality self, int ioa, float value);

float
MeasuredValueNormalizedWithoutQuality_getValue(int *data_flow, MeasuredValueNormalizedWithoutQuality self);

void
MeasuredValueNormalizedWithoutQuality_setValue(int *data_flow, MeasuredValueNormalizedWithoutQuality self, float value);





typedef struct sMeasuredValueNormalized* MeasuredValueNormalized;

void
MeasuredValueNormalized_destroy(int *data_flow, MeasuredValueNormalized self);

MeasuredValueNormalized
MeasuredValueNormalized_create(int *data_flow, MeasuredValueNormalized self, int ioa, float value, QualityDescriptor quality);

float
MeasuredValueNormalized_getValue(int *data_flow, MeasuredValueNormalized self);

void
MeasuredValueNormalized_setValue(int *data_flow, MeasuredValueNormalized self, float value);

QualityDescriptor
MeasuredValueNormalized_getQuality(int *data_flow, MeasuredValueNormalized self);





typedef struct sMeasuredValueNormalizedWithCP24Time2a* MeasuredValueNormalizedWithCP24Time2a;

void
MeasuredValueNormalizedWithCP24Time2a_destroy(int *data_flow, MeasuredValueNormalizedWithCP24Time2a self);

MeasuredValueNormalizedWithCP24Time2a
MeasuredValueNormalizedWithCP24Time2a_create(int *data_flow, MeasuredValueNormalizedWithCP24Time2a self, int ioa,
            float value, QualityDescriptor quality, CP24Time2a timestamp);

CP24Time2a
MeasuredValueNormalizedWithCP24Time2a_getTimestamp(int *data_flow, MeasuredValueNormalizedWithCP24Time2a self);

void
MeasuredValueNormalizedWithCP24Time2a_setTimestamp(int *data_flow, MeasuredValueNormalizedWithCP24Time2a self, CP24Time2a value);





typedef struct sMeasuredValueNormalizedWithCP56Time2a* MeasuredValueNormalizedWithCP56Time2a;

void
MeasuredValueNormalizedWithCP56Time2a_destroy(int *data_flow, MeasuredValueNormalizedWithCP56Time2a self);

MeasuredValueNormalizedWithCP56Time2a
MeasuredValueNormalizedWithCP56Time2a_create(int *data_flow, MeasuredValueNormalizedWithCP56Time2a self, int ioa,
            float value, QualityDescriptor quality, CP56Time2a timestamp);

CP56Time2a
MeasuredValueNormalizedWithCP56Time2a_getTimestamp(int *data_flow, MeasuredValueNormalizedWithCP56Time2a self);

void
MeasuredValueNormalizedWithCP56Time2a_setTimestamp(int *data_flow, MeasuredValueNormalizedWithCP56Time2a self, CP56Time2a value);






typedef struct sMeasuredValueScaled* MeasuredValueScaled;
MeasuredValueScaled
MeasuredValueScaled_create(int *data_flow, MeasuredValueScaled self, int ioa, int value, QualityDescriptor quality);

void
MeasuredValueScaled_destroy(int *data_flow, MeasuredValueScaled self);

int
MeasuredValueScaled_getValue(int *data_flow, MeasuredValueScaled self);

void
MeasuredValueScaled_setValue(int *data_flow, MeasuredValueScaled self, int value);

QualityDescriptor
MeasuredValueScaled_getQuality(int *data_flow, MeasuredValueScaled self);

void
MeasuredValueScaled_setQuality(int *data_flow, MeasuredValueScaled self, QualityDescriptor quality);





typedef struct sMeasuredValueScaledWithCP24Time2a* MeasuredValueScaledWithCP24Time2a;

void
MeasuredValueScaledWithCP24Time2a_destroy(int *data_flow, MeasuredValueScaledWithCP24Time2a self);

MeasuredValueScaledWithCP24Time2a
MeasuredValueScaledWithCP24Time2a_create(int *data_flow, MeasuredValueScaledWithCP24Time2a self, int ioa,
        int value, QualityDescriptor quality, CP24Time2a timestamp);

CP24Time2a
MeasuredValueScaledWithCP24Time2a_getTimestamp(int *data_flow, MeasuredValueScaledWithCP24Time2a self);

void
MeasuredValueScaledWithCP24Time2a_setTimestamp(int *data_flow, MeasuredValueScaledWithCP24Time2a self, CP24Time2a value);





typedef struct sMeasuredValueScaledWithCP56Time2a* MeasuredValueScaledWithCP56Time2a;

void
MeasuredValueScaledWithCP56Time2a_destroy(int *data_flow, MeasuredValueScaledWithCP56Time2a self);

MeasuredValueScaledWithCP56Time2a
MeasuredValueScaledWithCP56Time2a_create(int *data_flow, MeasuredValueScaledWithCP56Time2a self, int ioa,
        int value, QualityDescriptor quality, CP56Time2a timestamp);

CP56Time2a
MeasuredValueScaledWithCP56Time2a_getTimestamp(int *data_flow, MeasuredValueScaledWithCP56Time2a self);

void
MeasuredValueScaledWithCP56Time2a_setTimestamp(int *data_flow, MeasuredValueScaledWithCP56Time2a self, CP56Time2a value);





typedef struct sMeasuredValueShort* MeasuredValueShort;

void
MeasuredValueShort_destroy(int *data_flow, MeasuredValueShort self);

MeasuredValueShort
MeasuredValueShort_create(int *data_flow, MeasuredValueShort self, int ioa, float value, QualityDescriptor quality);

float
MeasuredValueShort_getValue(int *data_flow, MeasuredValueShort self);

void
MeasuredValueShort_setValue(int *data_flow, MeasuredValueShort self, float value);

QualityDescriptor
MeasuredValueShort_getQuality(int *data_flow, MeasuredValueShort self);





typedef struct sMeasuredValueShortWithCP24Time2a* MeasuredValueShortWithCP24Time2a;

void
MeasuredValueShortWithCP24Time2a_destroy(int *data_flow, MeasuredValueShortWithCP24Time2a self);

MeasuredValueShortWithCP24Time2a
MeasuredValueShortWithCP24Time2a_create(int *data_flow, MeasuredValueShortWithCP24Time2a self, int ioa,
        float value, QualityDescriptor quality, CP24Time2a timestamp);

CP24Time2a
MeasuredValueShortWithCP24Time2a_getTimestamp(int *data_flow, MeasuredValueShortWithCP24Time2a self);

void
MeasuredValueShortWithCP24Time2a_setTimestamp(int *data_flow, MeasuredValueShortWithCP24Time2a self,
        CP24Time2a value);





typedef struct sMeasuredValueShortWithCP56Time2a* MeasuredValueShortWithCP56Time2a;

void
MeasuredValueShortWithCP56Time2a_destroy(int *data_flow, MeasuredValueShortWithCP56Time2a self);

MeasuredValueShortWithCP56Time2a
MeasuredValueShortWithCP56Time2a_create(int *data_flow, MeasuredValueShortWithCP56Time2a self, int ioa,
        float value, QualityDescriptor quality, CP56Time2a timestamp);

CP56Time2a
MeasuredValueShortWithCP56Time2a_getTimestamp(int *data_flow, MeasuredValueShortWithCP56Time2a self);

void
MeasuredValueShortWithCP56Time2a_setTimestamp(int *data_flow, MeasuredValueShortWithCP56Time2a self,
        CP56Time2a value);





typedef struct sIntegratedTotals* IntegratedTotals;

void
IntegratedTotals_destroy(int *data_flow, IntegratedTotals self);
IntegratedTotals
IntegratedTotals_create(int *data_flow, IntegratedTotals self, int ioa, BinaryCounterReading value);

BinaryCounterReading
IntegratedTotals_getBCR(int *data_flow, IntegratedTotals self);

void
IntegratedTotals_setBCR(int *data_flow, IntegratedTotals self, BinaryCounterReading value);





typedef struct sIntegratedTotalsWithCP24Time2a* IntegratedTotalsWithCP24Time2a;
IntegratedTotalsWithCP24Time2a
IntegratedTotalsWithCP24Time2a_create(int *data_flow, IntegratedTotalsWithCP24Time2a self, int ioa,
        BinaryCounterReading value, CP24Time2a timestamp);

void
IntegratedTotalsWithCP24Time2a_destroy(int *data_flow, IntegratedTotalsWithCP24Time2a self);

CP24Time2a
IntegratedTotalsWithCP24Time2a_getTimestamp(int *data_flow, IntegratedTotalsWithCP24Time2a self);

void
IntegratedTotalsWithCP24Time2a_setTimestamp(int *data_flow, IntegratedTotalsWithCP24Time2a self,
        CP24Time2a value);





typedef struct sIntegratedTotalsWithCP56Time2a* IntegratedTotalsWithCP56Time2a;
IntegratedTotalsWithCP56Time2a
IntegratedTotalsWithCP56Time2a_create(int *data_flow, IntegratedTotalsWithCP56Time2a self, int ioa,
        BinaryCounterReading value, CP56Time2a timestamp);

void
IntegratedTotalsWithCP56Time2a_destroy(int *data_flow, IntegratedTotalsWithCP56Time2a self);

CP56Time2a
IntegratedTotalsWithCP56Time2a_getTimestamp(int *data_flow, IntegratedTotalsWithCP56Time2a self);

void
IntegratedTotalsWithCP56Time2a_setTimestamp(int *data_flow, IntegratedTotalsWithCP56Time2a self,
        CP56Time2a value);





typedef struct sEventOfProtectionEquipment* EventOfProtectionEquipment;

void
EventOfProtectionEquipment_destroy(int *data_flow, EventOfProtectionEquipment self);

EventOfProtectionEquipment
EventOfProtectionEquipment_create(int *data_flow, EventOfProtectionEquipment self, int ioa,
        SingleEvent event, CP16Time2a elapsedTime, CP24Time2a timestamp);

SingleEvent
EventOfProtectionEquipment_getEvent(int *data_flow, EventOfProtectionEquipment self);

CP16Time2a
EventOfProtectionEquipment_getElapsedTime(int *data_flow, EventOfProtectionEquipment self);

CP24Time2a
EventOfProtectionEquipment_getTimestamp(int *data_flow, EventOfProtectionEquipment self);





typedef struct sPackedStartEventsOfProtectionEquipment* PackedStartEventsOfProtectionEquipment;

PackedStartEventsOfProtectionEquipment
PackedStartEventsOfProtectionEquipment_create(int *data_flow, PackedStartEventsOfProtectionEquipment self, int ioa,
        StartEvent event, QualityDescriptorP qdp, CP16Time2a elapsedTime, CP24Time2a timestamp);

void
PackedStartEventsOfProtectionEquipment_destroy(int *data_flow, PackedStartEventsOfProtectionEquipment self);

StartEvent
PackedStartEventsOfProtectionEquipment_getEvent(int *data_flow, PackedStartEventsOfProtectionEquipment self);

QualityDescriptorP
PackedStartEventsOfProtectionEquipment_getQuality(int *data_flow, PackedStartEventsOfProtectionEquipment self);

CP16Time2a
PackedStartEventsOfProtectionEquipment_getElapsedTime(int *data_flow, PackedStartEventsOfProtectionEquipment self);

CP24Time2a
PackedStartEventsOfProtectionEquipment_getTimestamp(int *data_flow, PackedStartEventsOfProtectionEquipment self);





typedef struct sPackedOutputCircuitInfo* PackedOutputCircuitInfo;

void
PackedOutputCircuitInfo_destroy(int *data_flow, PackedOutputCircuitInfo self);

PackedOutputCircuitInfo
PackedOutputCircuitInfo_create(int *data_flow, PackedOutputCircuitInfo self, int ioa,
        OutputCircuitInfo oci, QualityDescriptorP qdp, CP16Time2a operatingTime, CP24Time2a timestamp);

OutputCircuitInfo
PackedOutputCircuitInfo_getOCI(int *data_flow, PackedOutputCircuitInfo self);

QualityDescriptorP
PackedOutputCircuitInfo_getQuality(int *data_flow, PackedOutputCircuitInfo self);

CP16Time2a
PackedOutputCircuitInfo_getOperatingTime(int *data_flow, PackedOutputCircuitInfo self);

CP24Time2a
PackedOutputCircuitInfo_getTimestamp(int *data_flow, PackedOutputCircuitInfo self);





typedef struct sPackedSinglePointWithSCD* PackedSinglePointWithSCD;

void
PackedSinglePointWithSCD_destroy(int *data_flow, PackedSinglePointWithSCD self);

PackedSinglePointWithSCD
PackedSinglePointWithSCD_create(int *data_flow, PackedSinglePointWithSCD self, int ioa,
        StatusAndStatusChangeDetection scd, QualityDescriptor qds);

QualityDescriptor
PackedSinglePointWithSCD_getQuality(int *data_flow, PackedSinglePointWithSCD self);

StatusAndStatusChangeDetection
PackedSinglePointWithSCD_getSCD(int *data_flow, PackedSinglePointWithSCD self);






typedef struct sSingleCommand* SingleCommand;
SingleCommand
SingleCommand_create(int *data_flow, SingleCommand self, int ioa, 
                                                 _Bool 
                                                      command, 
                                                               _Bool 
                                                                    selectCommand, int qu);

void
SingleCommand_destroy(int *data_flow, SingleCommand self);






int
SingleCommand_getQU(int *data_flow, SingleCommand self);





_Bool

SingleCommand_getState(int *data_flow, SingleCommand self);







_Bool

SingleCommand_isSelect(int *data_flow, SingleCommand self);





typedef struct sSingleCommandWithCP56Time2a* SingleCommandWithCP56Time2a;

void
SingleCommandWithCP56Time2a_destroy(int *data_flow, SingleCommandWithCP56Time2a self);
SingleCommandWithCP56Time2a
SingleCommandWithCP56Time2a_create(int *data_flow, SingleCommandWithCP56Time2a self, int ioa, 
                                                                             _Bool 
                                                                                  command, 
                                                                                           _Bool 
                                                                                                selectCommand, int qu, CP56Time2a timestamp);
CP56Time2a
SingleCommandWithCP56Time2a_getTimestamp(int *data_flow, SingleCommandWithCP56Time2a self);





typedef struct sDoubleCommand* DoubleCommand;

void
DoubleCommand_destroy(int *data_flow, DoubleCommand self);
DoubleCommand
DoubleCommand_create(int *data_flow, DoubleCommand self, int ioa, int command, 
                                                              _Bool 
                                                                   selectCommand, int qu);






int
DoubleCommand_getQU(int *data_flow, DoubleCommand self);






int
DoubleCommand_getState(int *data_flow, DoubleCommand self);







_Bool

DoubleCommand_isSelect(int *data_flow, DoubleCommand self);





typedef struct sStepCommand* StepCommand;

void
StepCommand_destroy(int *data_flow, StepCommand self);

StepCommand
StepCommand_create(int *data_flow, StepCommand self, int ioa, StepCommandValue command, 
                                                                       _Bool 
                                                                            selectCommand, int qu);






int
StepCommand_getQU(int *data_flow, StepCommand self);

StepCommandValue
StepCommand_getState(int *data_flow, StepCommand self);







_Bool

StepCommand_isSelect(int *data_flow, StepCommand self);





typedef struct sSetpointCommandNormalized* SetpointCommandNormalized;

void
SetpointCommandNormalized_destroy(int *data_flow, SetpointCommandNormalized self);
SetpointCommandNormalized
SetpointCommandNormalized_create(int *data_flow, SetpointCommandNormalized self, int ioa, float value, 
                                                                                      _Bool 
                                                                                           selectCommand, int ql);

float
SetpointCommandNormalized_getValue(int *data_flow, SetpointCommandNormalized self);

int
SetpointCommandNormalized_getQL(int *data_flow, SetpointCommandNormalized self);







_Bool

SetpointCommandNormalized_isSelect(int *data_flow, SetpointCommandNormalized self);





typedef struct sSetpointCommandScaled* SetpointCommandScaled;

void
SetpointCommandScaled_destroy(int *data_flow, SetpointCommandScaled self);
SetpointCommandScaled
SetpointCommandScaled_create(int *data_flow, SetpointCommandScaled self, int ioa, int value, 
                                                                            _Bool 
                                                                                 selectCommand, int ql);

int
SetpointCommandScaled_getValue(int *data_flow, SetpointCommandScaled self);

int
SetpointCommandScaled_getQL(int *data_flow, SetpointCommandScaled self);







_Bool

SetpointCommandScaled_isSelect(int *data_flow, SetpointCommandScaled self);





typedef struct sSetpointCommandShort* SetpointCommandShort;

void
SetpointCommandShort_destroy(int *data_flow, SetpointCommandShort self);
SetpointCommandShort
SetpointCommandShort_create(int *data_flow, SetpointCommandShort self, int ioa, float value, 
                                                                            _Bool 
                                                                                 selectCommand, int ql);

float
SetpointCommandShort_getValue(int *data_flow, SetpointCommandShort self);

int
SetpointCommandShort_getQL(int *data_flow, SetpointCommandShort self);







_Bool

SetpointCommandShort_isSelect(int *data_flow, SetpointCommandShort self);





typedef struct sBitstring32Command* Bitstring32Command;

Bitstring32Command
Bitstring32Command_create(int *data_flow, Bitstring32Command self, int ioa, uint32_t value);

void
Bitstring32Command_destroy(int *data_flow, Bitstring32Command self);

uint32_t
Bitstring32Command_getValue(int *data_flow, Bitstring32Command self);





typedef struct sInterrogationCommand* InterrogationCommand;

InterrogationCommand
InterrogationCommand_create(int *data_flow, InterrogationCommand self, int ioa, uint8_t qoi);

void
InterrogationCommand_destroy(int *data_flow, InterrogationCommand self);

uint8_t
InterrogationCommand_getQOI(int *data_flow, InterrogationCommand self);





typedef struct sReadCommand* ReadCommand;

ReadCommand
ReadCommand_create(int *data_flow, ReadCommand self, int ioa);

void
ReadCommand_destroy(int *data_flow, ReadCommand self);





typedef struct sClockSynchronizationCommand* ClockSynchronizationCommand;

ClockSynchronizationCommand
ClockSynchronizationCommand_create(int *data_flow, ClockSynchronizationCommand self, int ioa, CP56Time2a timestamp);

void
ClockSynchronizationCommand_destroy(int *data_flow, ClockSynchronizationCommand self);

CP56Time2a
ClockSynchronizationCommand_getTime(int *data_flow, ClockSynchronizationCommand self);





typedef struct sMeasuredValueNormalized* ParameterNormalizedValue;

void
ParameterNormalizedValue_destroy(int *data_flow, ParameterNormalizedValue self);
ParameterNormalizedValue
ParameterNormalizedValue_create(int *data_flow, ParameterNormalizedValue self, int ioa, float value, QualifierOfParameterMV qpm);

float
ParameterNormalizedValue_getValue(int *data_flow, ParameterNormalizedValue self);

void
ParameterNormalizedValue_setValue(int *data_flow, ParameterNormalizedValue self, float value);






QualifierOfParameterMV
ParameterNormalizedValue_getQPM(int *data_flow, ParameterNormalizedValue self);





typedef struct sMeasuredValueScaled* ParameterScaledValue;

void
ParameterScaledValue_destroy(int *data_flow, ParameterScaledValue self);
ParameterScaledValue
ParameterScaledValue_create(int *data_flow, ParameterScaledValue self, int ioa, int value, QualifierOfParameterMV qpm);

int
ParameterScaledValue_getValue(int *data_flow, ParameterScaledValue self);

void
ParameterScaledValue_setValue(int *data_flow, ParameterScaledValue self, int value);






QualifierOfParameterMV
ParameterScaledValue_getQPM(int *data_flow, ParameterScaledValue self);





typedef struct sMeasuredValueShort* ParameterFloatValue;

void
ParameterFloatValue_destroy(int *data_flow, ParameterFloatValue self);
ParameterFloatValue
ParameterFloatValue_create(int *data_flow, ParameterFloatValue self, int ioa, float value, QualifierOfParameterMV qpm);

float
ParameterFloatValue_getValue(int *data_flow, ParameterFloatValue self);

void
ParameterFloatValue_setValue(int *data_flow, ParameterFloatValue self, float value);






QualifierOfParameterMV
ParameterFloatValue_getQPM(int *data_flow, ParameterFloatValue self);





typedef struct sParameterActivation* ParameterActivation;

void
ParameterActivation_destroy(int *data_flow, ParameterActivation self);
ParameterActivation
ParameterActivation_create(int *data_flow, ParameterActivation self, int ioa, QualifierOfParameterActivation qpa);






QualifierOfParameterActivation
ParameterActivation_getQuality(int *data_flow, ParameterActivation self);





typedef struct sEventOfProtectionEquipmentWithCP56Time2a* EventOfProtectionEquipmentWithCP56Time2a;

void
EventOfProtectionEquipmentWithCP56Time2a_destroy(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self);

EventOfProtectionEquipmentWithCP56Time2a
EventOfProtectionEquipmentWithCP56Time2a_create(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self, int ioa,
        SingleEvent event, CP16Time2a elapsedTime, CP56Time2a timestamp);

SingleEvent
EventOfProtectionEquipmentWithCP56Time2a_getEvent(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self);

CP16Time2a
EventOfProtectionEquipmentWithCP56Time2a_getElapsedTime(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self);

CP56Time2a
EventOfProtectionEquipmentWithCP56Time2a_getTimestamp(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self);





typedef struct sPackedStartEventsOfProtectionEquipmentWithCP56Time2a* PackedStartEventsOfProtectionEquipmentWithCP56Time2a;

void
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_destroy(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self);
PackedStartEventsOfProtectionEquipmentWithCP56Time2a

PackedStartEventsOfProtectionEquipmentWithCP56Time2a_create(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self, int ioa,
        StartEvent event, QualityDescriptorP qdp, CP16Time2a elapsedTime, CP56Time2a timestamp);

StartEvent
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_getEvent(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self);

QualityDescriptorP
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_getQuality(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self);

CP16Time2a
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_getElapsedTime(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self);

CP56Time2a
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_getTimestamp(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self);





typedef struct sPackedOutputCircuitInfoWithCP56Time2a* PackedOutputCircuitInfoWithCP56Time2a;

void
PackedOutputCircuitInfoWithCP56Time2a_destroy(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self);

PackedOutputCircuitInfoWithCP56Time2a
PackedOutputCircuitInfoWithCP56Time2a_create(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self, int ioa,
        OutputCircuitInfo oci, QualityDescriptorP qdp, CP16Time2a operatingTime, CP56Time2a timestamp);

OutputCircuitInfo
PackedOutputCircuitInfoWithCP56Time2a_getOCI(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self);

QualityDescriptorP
PackedOutputCircuitInfoWithCP56Time2a_getQuality(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self);

CP16Time2a
PackedOutputCircuitInfoWithCP56Time2a_getOperatingTime(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self);

CP56Time2a
PackedOutputCircuitInfoWithCP56Time2a_getTimestamp(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self);





typedef struct sDoubleCommandWithCP56Time2a* DoubleCommandWithCP56Time2a;

void
DoubleCommandWithCP56Time2a_destroy(int *data_flow, DoubleCommandWithCP56Time2a self);

DoubleCommandWithCP56Time2a
DoubleCommandWithCP56Time2a_create(int *data_flow, DoubleCommandWithCP56Time2a self, int ioa, int command, 
                                                                                          _Bool 
                                                                                               selectCommand, int qu, CP56Time2a timestamp);

int
DoubleCommandWithCP56Time2a_getQU(int *data_flow, DoubleCommandWithCP56Time2a self);

int
DoubleCommandWithCP56Time2a_getState(int *data_flow, DoubleCommandWithCP56Time2a self);


_Bool

DoubleCommandWithCP56Time2a_isSelect(int *data_flow, DoubleCommandWithCP56Time2a self);

CP56Time2a
DoubleCommandWithCP56Time2a_getTimestamp(int *data_flow, DoubleCommandWithCP56Time2a self);





typedef struct sStepCommandWithCP56Time2a* StepCommandWithCP56Time2a;

void
StepCommandWithCP56Time2a_destroy(int *data_flow, StepCommand self);

StepCommandWithCP56Time2a
StepCommandWithCP56Time2a_create(int *data_flow, StepCommandWithCP56Time2a self, int ioa, StepCommandValue command, 
                                                                                                   _Bool 
                                                                                                        selectCommand, int qu, CP56Time2a timestamp);

int
StepCommandWithCP56Time2a_getQU(int *data_flow, StepCommandWithCP56Time2a self);

StepCommandValue
StepCommandWithCP56Time2a_getState(int *data_flow, StepCommandWithCP56Time2a self);


_Bool

StepCommandWithCP56Time2a_isSelect(int *data_flow, StepCommandWithCP56Time2a self);

CP56Time2a
StepCommandWithCP56Time2a_getTimestamp(int *data_flow, StepCommandWithCP56Time2a self);





typedef struct sSetpointCommandNormalizedWithCP56Time2a* SetpointCommandNormalizedWithCP56Time2a;

void
SetpointCommandNormalizedWithCP56Time2a_destroy(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self);

SetpointCommandNormalizedWithCP56Time2a
SetpointCommandNormalizedWithCP56Time2a_create(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self, int ioa, float value, 
                                                                                                                  _Bool 
                                                                                                                       selectCommand, int ql, CP56Time2a timestamp);

float
SetpointCommandNormalizedWithCP56Time2a_getValue(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self);

int
SetpointCommandNormalizedWithCP56Time2a_getQL(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self);


_Bool

SetpointCommandNormalizedWithCP56Time2a_isSelect(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self);

CP56Time2a
SetpointCommandNormalizedWithCP56Time2a_getTimestamp(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self);





typedef struct sSetpointCommandScaledWithCP56Time2a* SetpointCommandScaledWithCP56Time2a;

void
SetpointCommandScaledWithCP56Time2a_destroy(int *data_flow, SetpointCommandScaledWithCP56Time2a self);

SetpointCommandScaledWithCP56Time2a
SetpointCommandScaledWithCP56Time2a_create(int *data_flow, SetpointCommandScaledWithCP56Time2a self, int ioa, int value, 
                                                                                                        _Bool 
                                                                                                             selectCommand, int ql, CP56Time2a timestamp);

int
SetpointCommandScaledWithCP56Time2a_getValue(int *data_flow, SetpointCommandScaledWithCP56Time2a self);

int
SetpointCommandScaledWithCP56Time2a_getQL(int *data_flow, SetpointCommandScaledWithCP56Time2a self);


_Bool

SetpointCommandScaledWithCP56Time2a_isSelect(int *data_flow, SetpointCommandScaledWithCP56Time2a self);

CP56Time2a
SetpointCommandScaledWithCP56Time2a_getTimestamp(int *data_flow, SetpointCommandScaledWithCP56Time2a self);





typedef struct sSetpointCommandShortWithCP56Time2a* SetpointCommandShortWithCP56Time2a;

void
SetpointCommandShortWithCP56Time2a_destroy(int *data_flow, SetpointCommandShortWithCP56Time2a self);

SetpointCommandShortWithCP56Time2a
SetpointCommandShortWithCP56Time2a_create(int *data_flow, SetpointCommandShortWithCP56Time2a self, int ioa, float value, 
                                                                                                        _Bool 
                                                                                                             selectCommand, int ql, CP56Time2a timestamp);

float
SetpointCommandShortWithCP56Time2a_getValue(int *data_flow, SetpointCommandShortWithCP56Time2a self);

int
SetpointCommandShortWithCP56Time2a_getQL(int *data_flow, SetpointCommandShortWithCP56Time2a self);


_Bool

SetpointCommandShortWithCP56Time2a_isSelect(int *data_flow, SetpointCommandShortWithCP56Time2a self);

CP56Time2a
SetpointCommandShortWithCP56Time2a_getTimestamp(int *data_flow, SetpointCommandShortWithCP56Time2a self);





typedef struct sBitstring32CommandWithCP56Time2a* Bitstring32CommandWithCP56Time2a;

Bitstring32CommandWithCP56Time2a
Bitstring32CommandWithCP56Time2a_create(int *data_flow, Bitstring32CommandWithCP56Time2a self, int ioa, uint32_t value, CP56Time2a timestamp);

void
Bitstring32CommandWithCP56Time2a_destroy(int *data_flow, Bitstring32CommandWithCP56Time2a self);

uint32_t
Bitstring32CommandWithCP56Time2a_getValue(int *data_flow, Bitstring32CommandWithCP56Time2a self);

CP56Time2a
Bitstring32CommandWithCP56Time2a_getTimestamp(int *data_flow, Bitstring32CommandWithCP56Time2a self);






typedef struct sCounterInterrogationCommand* CounterInterrogationCommand;

CounterInterrogationCommand
CounterInterrogationCommand_create(int *data_flow, CounterInterrogationCommand self, int ioa, QualifierOfCIC qcc);

void
CounterInterrogationCommand_destroy(int *data_flow, CounterInterrogationCommand self);

QualifierOfCIC
CounterInterrogationCommand_getQCC(int *data_flow, CounterInterrogationCommand self);





typedef struct sTestCommand* TestCommand;

TestCommand
TestCommand_create(int *data_flow, TestCommand self);

void
TestCommand_destroy(int *data_flow, TestCommand self);


_Bool

TestCommand_isValid(int *data_flow, TestCommand self);





typedef struct sResetProcessCommand* ResetProcessCommand;

ResetProcessCommand
ResetProcessCommand_create(int *data_flow, ResetProcessCommand self, int ioa, QualifierOfRPC qrp);

void
ResetProcessCommand_destroy(int *data_flow, ResetProcessCommand self);

QualifierOfRPC
ResetProcessCommand_getQRP(int *data_flow, ResetProcessCommand self);





typedef struct sDelayAcquisitionCommand* DelayAcquisitionCommand;

DelayAcquisitionCommand
DelayAcquisitionCommand_create(int *data_flow, DelayAcquisitionCommand self, int ioa, CP16Time2a delay);

void
DelayAcquisitionCommand_destroy(int *data_flow, DelayAcquisitionCommand self);

CP16Time2a
DelayAcquisitionCommand_getDelay(int *data_flow, DelayAcquisitionCommand self);





typedef struct sEndOfInitialization* EndOfInitialization;

EndOfInitialization
EndOfInitialization_create(int *data_flow, EndOfInitialization self, uint8_t coi);

void
EndOfInitialization_destroy(int *data_flow, EndOfInitialization self);

uint8_t
EndOfInitialization_getCOI(int *data_flow, EndOfInitialization self);
typedef struct sFileReady* FileReady;
FileReady
FileReady_create(int *data_flow, FileReady self, int ioa, uint16_t nof, uint32_t lengthOfFile, 
                                                                              _Bool 
                                                                                   positive);

void
FileReady_destroy(int *data_flow, FileReady self);

uint8_t
FileReady_getFRQ(int *data_flow, FileReady self);

void
FileReady_setFRQ(int *data_flow, FileReady self, uint8_t frq);


_Bool

FileReady_isPositive(int *data_flow, FileReady self);

uint16_t
FileReady_getNOF(int *data_flow, FileReady self);

uint32_t
FileReady_getLengthOfFile(int *data_flow, FileReady self);

void
FileReady_destroy(int *data_flow, FileReady self);





typedef struct sSectionReady* SectionReady;

SectionReady
SectionReady_create(int *data_flow, SectionReady self, int ioa, uint16_t nof, uint8_t nos, uint32_t lengthOfSection, 
                                                                                                    _Bool 
                                                                                                         notReady);



_Bool

SectionReady_isNotReady(int *data_flow, SectionReady self);

uint8_t
SectionReady_getSRQ(int *data_flow, SectionReady self);

void
SectionReady_setSRQ(int *data_flow, SectionReady self, uint8_t srq);

uint16_t
SectionReady_getNOF(int *data_flow, SectionReady self);

uint8_t
SectionReady_getNameOfSection(int *data_flow, SectionReady self);

uint32_t
SectionReady_getLengthOfSection(int *data_flow, SectionReady self);

void
SectionReady_destroy(int *data_flow, SectionReady self);






typedef struct sFileCallOrSelect* FileCallOrSelect;

FileCallOrSelect
FileCallOrSelect_create(int *data_flow, FileCallOrSelect self, int ioa, uint16_t nof, uint8_t nos, uint8_t scq);

uint16_t
FileCallOrSelect_getNOF(int *data_flow, FileCallOrSelect self);

uint8_t
FileCallOrSelect_getNameOfSection(int *data_flow, FileCallOrSelect self);

uint8_t
FileCallOrSelect_getSCQ(int *data_flow, FileCallOrSelect self);

void
FileCallOrSelect_destroy(int *data_flow, FileCallOrSelect self);





typedef struct sFileLastSegmentOrSection* FileLastSegmentOrSection;

FileLastSegmentOrSection
FileLastSegmentOrSection_create(int *data_flow, FileLastSegmentOrSection self, int ioa, uint16_t nof, uint8_t nos, uint8_t lsq, uint8_t chs);

uint16_t
FileLastSegmentOrSection_getNOF(int *data_flow, FileLastSegmentOrSection self);

uint8_t
FileLastSegmentOrSection_getNameOfSection(int *data_flow, FileLastSegmentOrSection self);

uint8_t
FileLastSegmentOrSection_getLSQ(int *data_flow, FileLastSegmentOrSection self);

uint8_t
FileLastSegmentOrSection_getCHS(int *data_flow, FileLastSegmentOrSection self);

void
FileLastSegmentOrSection_destroy(int *data_flow, FileLastSegmentOrSection self);





typedef struct sFileACK* FileACK;

FileACK
FileACK_create(int *data_flow, FileACK self, int ioa, uint16_t nof, uint8_t nos, uint8_t afq);

uint16_t
FileACK_getNOF(int *data_flow, FileACK self);

uint8_t
FileACK_getNameOfSection(int *data_flow, FileACK self);

uint8_t
FileACK_getAFQ(int *data_flow, FileACK self);

void
FileACK_destroy(int *data_flow, FileACK self);





typedef struct sFileSegment* FileSegment;

FileSegment
FileSegment_create(int *data_flow, FileSegment self, int ioa, uint16_t nof, uint8_t nos, uint8_t* data, uint8_t los);

uint16_t
FileSegment_getNOF(int *data_flow, FileSegment self);

uint8_t
FileSegment_getNameOfSection(int *data_flow, FileSegment self);

uint8_t
FileSegment_getLengthOfSegment(int *data_flow, FileSegment self);

uint8_t*
FileSegment_getSegmentData(int *data_flow, FileSegment self);

int
FileSegment_GetMaxDataSize(int *data_flow, CS101_AppLayerParameters parameters);

void
FileSegment_destroy(int *data_flow, FileSegment self);





typedef struct sFileDirectory* FileDirectory;

FileDirectory
FileDirectory_create(int *data_flow, FileDirectory self, int ioa, uint16_t nof, int lengthOfFile, uint8_t sof, CP56Time2a creationTime);

uint16_t
FileDirectory_getNOF(int *data_flow, FileDirectory self);

uint8_t
FileDirectory_getSOF(int *data_flow, FileDirectory self);

int
FileDirectory_getSTATUS(int *data_flow, FileDirectory self);


_Bool

FileDirectory_getLFD(int *data_flow, FileDirectory self);


_Bool

FileDirectory_getFOR(int *data_flow, FileDirectory self);


_Bool

FileDirectory_getFA(int *data_flow, FileDirectory self);

uint8_t
FileDirectory_getLengthOfFile(int *data_flow, FileDirectory self);

CP56Time2a
FileDirectory_getCreationTime(int *data_flow, FileDirectory self);

void
FileDirectory_destroy(int *data_flow, FileDirectory self);

typedef enum {
    CS101_COT_PERIODIC = 1,
    CS101_COT_BACKGROUND_SCAN = 2,
    CS101_COT_SPONTANEOUS = 3,
    CS101_COT_INITIALIZED = 4,
    CS101_COT_REQUEST = 5,
    CS101_COT_ACTIVATION = 6,
    CS101_COT_ACTIVATION_CON = 7,
    CS101_COT_DEACTIVATION = 8,
    CS101_COT_DEACTIVATION_CON = 9,
    CS101_COT_ACTIVATION_TERMINATION = 10,
    CS101_COT_RETURN_INFO_REMOTE = 11,
    CS101_COT_RETURN_INFO_LOCAL = 12,
    CS101_COT_FILE_TRANSFER = 13,
    CS101_COT_AUTHENTICATION = 14,
    CS101_COT_MAINTENANCE_OF_AUTH_SESSION_KEY = 15,
    CS101_COT_MAINTENANCE_OF_USER_ROLE_AND_UPDATE_KEY = 16,
    CS101_COT_INTERROGATED_BY_STATION = 20,
    CS101_COT_INTERROGATED_BY_GROUP_1 = 21,
    CS101_COT_INTERROGATED_BY_GROUP_2 = 22,
    CS101_COT_INTERROGATED_BY_GROUP_3 = 23,
    CS101_COT_INTERROGATED_BY_GROUP_4 = 24,
    CS101_COT_INTERROGATED_BY_GROUP_5 = 25,
    CS101_COT_INTERROGATED_BY_GROUP_6 = 26,
    CS101_COT_INTERROGATED_BY_GROUP_7 = 27,
    CS101_COT_INTERROGATED_BY_GROUP_8 = 28,
    CS101_COT_INTERROGATED_BY_GROUP_9 = 29,
    CS101_COT_INTERROGATED_BY_GROUP_10 = 30,
    CS101_COT_INTERROGATED_BY_GROUP_11 = 31,
    CS101_COT_INTERROGATED_BY_GROUP_12 = 32,
    CS101_COT_INTERROGATED_BY_GROUP_13 = 33,
    CS101_COT_INTERROGATED_BY_GROUP_14 = 34,
    CS101_COT_INTERROGATED_BY_GROUP_15 = 35,
    CS101_COT_INTERROGATED_BY_GROUP_16 = 36,
    CS101_COT_REQUESTED_BY_GENERAL_COUNTER = 37,
    CS101_COT_REQUESTED_BY_GROUP_1_COUNTER = 38,
    CS101_COT_REQUESTED_BY_GROUP_2_COUNTER = 39,
    CS101_COT_REQUESTED_BY_GROUP_3_COUNTER = 40,
    CS101_COT_REQUESTED_BY_GROUP_4_COUNTER = 41,
    CS101_COT_UNKNOWN_TYPE_ID = 44,
    CS101_COT_UNKNOWN_COT = 45,
    CS101_COT_UNKNOWN_CA = 46,
    CS101_COT_UNKNOWN_IOA = 47
} CS101_CauseOfTransmission;

const char*
CS101_CauseOfTransmission_toString(int *data_flow, CS101_CauseOfTransmission self);

void
Lib60870_enableDebugOutput(int *data_flow, 
                          _Bool 
                               value);

Lib60870VersionInfo
Lib60870_getLibraryVersionInfo(int *data_flowvoid);





_Bool

CS101_ASDU_isTest(int *data_flow, CS101_ASDU self);




void
CS101_ASDU_setTest(int *data_flow, CS101_ASDU self, 
                                   _Bool 
                                        value);





_Bool

CS101_ASDU_isNegative(int *data_flow, CS101_ASDU self);




void
CS101_ASDU_setNegative(int *data_flow, CS101_ASDU self, 
                                       _Bool 
                                            value);




int
CS101_ASDU_getOA(int *data_flow, CS101_ASDU self);




CS101_CauseOfTransmission
CS101_ASDU_getCOT(int *data_flow, CS101_ASDU self);




void
CS101_ASDU_setCOT(int *data_flow, CS101_ASDU self, CS101_CauseOfTransmission value);




int
CS101_ASDU_getCA(int *data_flow, CS101_ASDU self);






void
CS101_ASDU_setCA(int *data_flow, CS101_ASDU self, int ca);





IEC60870_5_TypeID
CS101_ASDU_getTypeID(int *data_flow, CS101_ASDU self);








_Bool

CS101_ASDU_isSequence(int *data_flow, CS101_ASDU self);




int
CS101_ASDU_getNumberOfElements(int *data_flow, CS101_ASDU self);
InformationObject
CS101_ASDU_getElement(int *data_flow, CS101_ASDU self, int index);
InformationObject
CS101_ASDU_getElementEx(int *data_flow, CS101_ASDU self, InformationObject io, int index);
CS101_ASDU
CS101_ASDU_create(int *data_flow, CS101_AppLayerParameters parameters, 
                                                      _Bool 
                                                           isSequence, CS101_CauseOfTransmission cot, int oa, int ca,
        
       _Bool 
            isTest, 
                    _Bool 
                         isNegative);
CS101_ASDU
CS101_ASDU_initializeStatic(int *data_flow, CS101_StaticASDU self, CS101_AppLayerParameters parameters, 
                                                                                       _Bool 
                                                                                            isSequence, CS101_CauseOfTransmission cot, int oa, int ca,
        
       _Bool 
            isTest, 
                    _Bool 
                         isNegative);




void
CS101_ASDU_destroy(int *data_flow, CS101_ASDU self);

_Bool

CS101_ASDU_addInformationObject(int *data_flow, CS101_ASDU self, InformationObject io);






void
CS101_ASDU_removeAllElements(int *data_flow, CS101_ASDU self);




int
CP16Time2a_getEplapsedTimeInMs(int *data_flow, CP16Time2a self);




void
CP16Time2a_setEplapsedTimeInMs(int *data_flow, CP16Time2a self, int value);




int
CP24Time2a_getMillisecond(int *data_flow, CP24Time2a self);




void
CP24Time2a_setMillisecond(int *data_flow, CP24Time2a self, int value);




int
CP24Time2a_getSecond(int *data_flow, CP24Time2a self);




void
CP24Time2a_setSecond(int *data_flow, CP24Time2a self, int value);




int
CP24Time2a_getMinute(int *data_flow, CP24Time2a self);




void
CP24Time2a_setMinute(int *data_flow, CP24Time2a self, int value);





_Bool

CP24Time2a_isInvalid(int *data_flow, CP24Time2a self);




void
CP24Time2a_setInvalid(int *data_flow, CP24Time2a self, 
                                      _Bool 
                                           value);





_Bool

CP24Time2a_isSubstituted(int *data_flow, CP24Time2a self);




void
CP24Time2a_setSubstituted(int *data_flow, CP24Time2a self, 
                                          _Bool 
                                               value);




CP56Time2a
CP56Time2a_createFromMsTimestamp(int *data_flow, CP56Time2a self, uint64_t timestamp);


CP32Time2a
CP32Time2a_create(int *data_flow, CP32Time2a self);

void
CP32Time2a_setFromMsTimestamp(int *data_flow, CP32Time2a self, uint64_t timestamp);

int
CP32Time2a_getMillisecond(int *data_flow, CP32Time2a self);

void
CP32Time2a_setMillisecond(int *data_flow, CP32Time2a self, int value);

int
CP32Time2a_getSecond(int *data_flow, CP32Time2a self);

void
CP32Time2a_setSecond(int *data_flow, CP32Time2a self, int value);

int
CP32Time2a_getMinute(int *data_flow, CP32Time2a self);


void
CP32Time2a_setMinute(int *data_flow, CP32Time2a self, int value);


_Bool

CP32Time2a_isInvalid(int *data_flow, CP32Time2a self);

void
CP32Time2a_setInvalid(int *data_flow, CP32Time2a self, 
                                      _Bool 
                                           value);


_Bool

CP32Time2a_isSubstituted(int *data_flow, CP32Time2a self);

void
CP32Time2a_setSubstituted(int *data_flow, CP32Time2a self, 
                                          _Bool 
                                               value);

int
CP32Time2a_getHour(int *data_flow, CP32Time2a self);

void
CP32Time2a_setHour(int *data_flow, CP32Time2a self, int value);


_Bool

CP32Time2a_isSummerTime(int *data_flow, CP32Time2a self);

void
CP32Time2a_setSummerTime(int *data_flow, CP32Time2a self, 
                                         _Bool 
                                              value);




void
CP56Time2a_setFromMsTimestamp(int *data_flow, CP56Time2a self, uint64_t timestamp);




uint64_t
CP56Time2a_toMsTimestamp(int *data_flow, CP56Time2a self);




int
CP56Time2a_getMillisecond(int *data_flow, CP56Time2a self);




void
CP56Time2a_setMillisecond(int *data_flow, CP56Time2a self, int value);

int
CP56Time2a_getSecond(int *data_flow, CP56Time2a self);

void
CP56Time2a_setSecond(int *data_flow, CP56Time2a self, int value);

int
CP56Time2a_getMinute(int *data_flow, CP56Time2a self);

void
CP56Time2a_setMinute(int *data_flow, CP56Time2a self, int value);

int
CP56Time2a_getHour(int *data_flow, CP56Time2a self);

void
CP56Time2a_setHour(int *data_flow, CP56Time2a self, int value);

int
CP56Time2a_getDayOfWeek(int *data_flow, CP56Time2a self);

void
CP56Time2a_setDayOfWeek(int *data_flow, CP56Time2a self, int value);

int
CP56Time2a_getDayOfMonth(int *data_flow, CP56Time2a self);

void
CP56Time2a_setDayOfMonth(int *data_flow, CP56Time2a self, int value);






int
CP56Time2a_getMonth(int *data_flow, CP56Time2a self);






void
CP56Time2a_setMonth(int *data_flow, CP56Time2a self, int value);






int
CP56Time2a_getYear(int *data_flow, CP56Time2a self);






void
CP56Time2a_setYear(int *data_flow, CP56Time2a self, int value);


_Bool

CP56Time2a_isSummerTime(int *data_flow, CP56Time2a self);

void
CP56Time2a_setSummerTime(int *data_flow, CP56Time2a self, 
                                         _Bool 
                                              value);


_Bool

CP56Time2a_isInvalid(int *data_flow, CP56Time2a self);

void
CP56Time2a_setInvalid(int *data_flow, CP56Time2a self, 
                                      _Bool 
                                           value);


_Bool

CP56Time2a_isSubstituted(int *data_flow, CP56Time2a self);

void
CP56Time2a_setSubstituted(int *data_flow, CP56Time2a self, 
                                          _Bool 
                                               value);

BinaryCounterReading
BinaryCounterReading_create(int *data_flow, BinaryCounterReading self, int32_t value, int seqNumber,
        
       _Bool 
            hasCarry, 
                      _Bool 
                           isAdjusted, 
                                       _Bool 
                                            isInvalid);

void
BinaryCounterReading_destroy(int *data_flow, BinaryCounterReading self);

int32_t
BinaryCounterReading_getValue(int *data_flow, BinaryCounterReading self);

void
BinaryCounterReading_setValue(int *data_flow, BinaryCounterReading self, int32_t value);

int
BinaryCounterReading_getSequenceNumber(int *data_flow, BinaryCounterReading self);


_Bool

BinaryCounterReading_hasCarry(int *data_flow, BinaryCounterReading self);


_Bool

BinaryCounterReading_isAdjusted(int *data_flow, BinaryCounterReading self);


_Bool

BinaryCounterReading_isInvalid(int *data_flow, BinaryCounterReading self);

void
BinaryCounterReading_setSequenceNumber(int *data_flow, BinaryCounterReading self, int value);

void
BinaryCounterReading_setCarry(int *data_flow, BinaryCounterReading self, 
                                                        _Bool 
                                                             value);

void
BinaryCounterReading_setAdjusted(int *data_flow, BinaryCounterReading self, 
                                                           _Bool 
                                                                value);

void
BinaryCounterReading_setInvalid(int *data_flow, BinaryCounterReading self, 
                                                          _Bool 
                                                               value);





typedef struct sFrame* Frame;

void
Frame_destroy(int *data_flow, Frame self);

void
Frame_resetFrame(int *data_flow, Frame self);

void
Frame_setNextByte(int *data_flow, Frame self, uint8_t byte);

void
Frame_appendBytes(int *data_flow, Frame self, uint8_t* bytes, int numberOfBytes);

int
Frame_getMsgSize(int *data_flow, Frame self);

uint8_t*
Frame_getBuffer(int *data_flow, Frame self);

int
Frame_getSpaceLeft(int *data_flow, Frame self);
typedef struct sFrameVFT* FrameVFT;

struct sFrameVFT {
    void (*destroy)(int *data_flow, Frame self);
    void (*resetFrame)(int *data_flow, Frame self);
    void (*setNextByte)(int *data_flow, Frame self, uint8_t byte);
    void (*appendBytes)(int *data_flow, Frame self, uint8_t* bytes, int numberOfBytes);
    int (*getMsgSize)(int *data_flow, Frame self);
    uint8_t* (*getBuffer)(int *data_flow, Frame self);
    int (*getSpaceLeft)(int *data_flow, Frame self);
};

typedef struct sInformationObjectVFT* InformationObjectVFT;


_Bool

InformationObject_encode(int *data_flow, InformationObject self, Frame frame, CS101_AppLayerParameters parameters, 
                                                                                                  _Bool 
                                                                                                       isSequence);

void
InformationObject_setObjectAddress(int *data_flow, InformationObject self, int ioa);

int
InformationObject_ParseObjectAddress(int *data_flow, CS101_AppLayerParameters parameters, uint8_t* msg, int startIndex);

SinglePointInformation
SinglePointInformation_getFromBuffer(int *data_flow, SinglePointInformation self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueScaledWithCP56Time2a
MeasuredValueScaledWithCP56Time2a_getFromBuffer(int *data_flow, MeasuredValueScaledWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

StepPositionInformation
StepPositionInformation_getFromBuffer(int *data_flow, StepPositionInformation self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

StepPositionWithCP56Time2a
StepPositionWithCP56Time2a_getFromBuffer(int *data_flow, StepPositionWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

StepPositionWithCP24Time2a
StepPositionWithCP24Time2a_getFromBuffer(int *data_flow, StepPositionWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

DoublePointInformation
DoublePointInformation_getFromBuffer(int *data_flow, DoublePointInformation self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

DoublePointWithCP24Time2a
DoublePointWithCP24Time2a_getFromBuffer(int *data_flow, DoublePointWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

DoublePointWithCP56Time2a
DoublePointWithCP56Time2a_getFromBuffer(int *data_flow, DoublePointWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

SinglePointWithCP24Time2a
SinglePointWithCP24Time2a_getFromBuffer(int *data_flow, SinglePointWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

SinglePointWithCP56Time2a
SinglePointWithCP56Time2a_getFromBuffer(int *data_flow, SinglePointWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

BitString32
BitString32_getFromBuffer(int *data_flow, BitString32 self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

Bitstring32WithCP24Time2a
Bitstring32WithCP24Time2a_getFromBuffer(int *data_flow, Bitstring32WithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

Bitstring32WithCP56Time2a
Bitstring32WithCP56Time2a_getFromBuffer(int *data_flow, Bitstring32WithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueNormalized
MeasuredValueNormalized_getFromBuffer(int *data_flow, MeasuredValueNormalized self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueNormalizedWithCP24Time2a
MeasuredValueNormalizedWithCP24Time2a_getFromBuffer(int *data_flow, MeasuredValueNormalizedWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueNormalizedWithCP56Time2a
MeasuredValueNormalizedWithCP56Time2a_getFromBuffer(int *data_flow, MeasuredValueNormalizedWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueScaled
MeasuredValueScaled_getFromBuffer(int *data_flow, MeasuredValueScaled self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueScaledWithCP24Time2a
MeasuredValueScaledWithCP24Time2a_getFromBuffer(int *data_flow, MeasuredValueScaledWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueShort
MeasuredValueShort_getFromBuffer(int *data_flow, MeasuredValueShort self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueShortWithCP24Time2a
MeasuredValueShortWithCP24Time2a_getFromBuffer(int *data_flow, MeasuredValueShortWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueShortWithCP56Time2a
MeasuredValueShortWithCP56Time2a_getFromBuffer(int *data_flow, MeasuredValueShortWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

IntegratedTotals
IntegratedTotals_getFromBuffer(int *data_flow, IntegratedTotals self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

IntegratedTotalsWithCP24Time2a
IntegratedTotalsWithCP24Time2a_getFromBuffer(int *data_flow, IntegratedTotalsWithCP24Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

IntegratedTotalsWithCP56Time2a
IntegratedTotalsWithCP56Time2a_getFromBuffer(int *data_flow, IntegratedTotalsWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

EventOfProtectionEquipment
EventOfProtectionEquipment_getFromBuffer(int *data_flow, EventOfProtectionEquipment self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

PackedStartEventsOfProtectionEquipment
PackedStartEventsOfProtectionEquipment_getFromBuffer(int *data_flow, PackedStartEventsOfProtectionEquipment self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

PackedOutputCircuitInfo
PackedOutputCircuitInfo_getFromBuffer(int *data_flow, PackedOutputCircuitInfo self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

PackedSinglePointWithSCD
PackedSinglePointWithSCD_getFromBuffer(int *data_flow, PackedSinglePointWithSCD self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

MeasuredValueNormalizedWithoutQuality
MeasuredValueNormalizedWithoutQuality_getFromBuffer(int *data_flow, MeasuredValueNormalizedWithoutQuality self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

EventOfProtectionEquipmentWithCP56Time2a
EventOfProtectionEquipmentWithCP56Time2a_getFromBuffer(int *data_flow, EventOfProtectionEquipmentWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

PackedStartEventsOfProtectionEquipmentWithCP56Time2a
PackedStartEventsOfProtectionEquipmentWithCP56Time2a_getFromBuffer(int *data_flow, PackedStartEventsOfProtectionEquipmentWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

PackedOutputCircuitInfoWithCP56Time2a
PackedOutputCircuitInfoWithCP56Time2a_getFromBuffer(int *data_flow, PackedOutputCircuitInfoWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);

SingleCommand
SingleCommand_getFromBuffer(int *data_flow, SingleCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SingleCommandWithCP56Time2a
SingleCommandWithCP56Time2a_getFromBuffer(int *data_flow, SingleCommandWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

DoubleCommand
DoubleCommand_getFromBuffer(int *data_flow, DoubleCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

StepCommand
StepCommand_getFromBuffer(int *data_flow, StepCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SetpointCommandNormalized
SetpointCommandNormalized_getFromBuffer(int *data_flow, SetpointCommandNormalized self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SetpointCommandScaled
SetpointCommandScaled_getFromBuffer(int *data_flow, SetpointCommandScaled self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SetpointCommandShort
SetpointCommandShort_getFromBuffer(int *data_flow, SetpointCommandShort self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

Bitstring32Command
Bitstring32Command_getFromBuffer(int *data_flow, Bitstring32Command self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

ReadCommand
ReadCommand_getFromBuffer(int *data_flow, ReadCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

ClockSynchronizationCommand
ClockSynchronizationCommand_getFromBuffer(int *data_flow, ClockSynchronizationCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

InterrogationCommand
InterrogationCommand_getFromBuffer(int *data_flow, InterrogationCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

ParameterNormalizedValue
ParameterNormalizedValue_getFromBuffer(int *data_flow, ParameterNormalizedValue self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

ParameterScaledValue
ParameterScaledValue_getFromBuffer(int *data_flow, ParameterScaledValue self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

ParameterFloatValue
ParameterFloatValue_getFromBuffer(int *data_flow, ParameterFloatValue self, CS101_AppLayerParameters parameters,
        uint8_t* msqg, int msgSize, int startIndex);

ParameterActivation
ParameterActivation_getFromBuffer(int *data_flow, ParameterActivation self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

EndOfInitialization
EndOfInitialization_getFromBuffer(int *data_flow, EndOfInitialization self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

DoubleCommandWithCP56Time2a
DoubleCommandWithCP56Time2a_getFromBuffer(int *data_flow, DoubleCommandWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

StepCommandWithCP56Time2a
StepCommandWithCP56Time2a_getFromBuffer(int *data_flow, StepCommandWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SetpointCommandNormalizedWithCP56Time2a
SetpointCommandNormalizedWithCP56Time2a_getFromBuffer(int *data_flow, SetpointCommandNormalizedWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SetpointCommandScaledWithCP56Time2a
SetpointCommandScaledWithCP56Time2a_getFromBuffer(int *data_flow, SetpointCommandScaledWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SetpointCommandShortWithCP56Time2a
SetpointCommandShortWithCP56Time2a_getFromBuffer(int *data_flow, SetpointCommandShortWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

Bitstring32CommandWithCP56Time2a
Bitstring32CommandWithCP56Time2a_getFromBuffer(int *data_flow, Bitstring32CommandWithCP56Time2a self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

CounterInterrogationCommand
CounterInterrogationCommand_getFromBuffer(int *data_flow, CounterInterrogationCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

TestCommand
TestCommand_getFromBuffer(int *data_flow, TestCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

ResetProcessCommand
ResetProcessCommand_getFromBuffer(int *data_flow, ResetProcessCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

DelayAcquisitionCommand
DelayAcquisitionCommand_getFromBuffer(int *data_flow, DelayAcquisitionCommand self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

FileReady
FileReady_getFromBuffer(int *data_flow, FileReady self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

SectionReady
SectionReady_getFromBuffer(int *data_flow, SectionReady self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

FileCallOrSelect
FileCallOrSelect_getFromBuffer(int *data_flow, FileCallOrSelect self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

FileLastSegmentOrSection
FileLastSegmentOrSection_getFromBuffer(int *data_flow, FileLastSegmentOrSection self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

FileACK
FileACK_getFromBuffer(int *data_flow, FileACK self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

FileSegment
FileSegment_getFromBuffer(int *data_flow, FileSegment self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex);

FileDirectory
FileDirectory_getFromBuffer(int *data_flow, FileDirectory self, CS101_AppLayerParameters parameters,
        uint8_t* msg, int msgSize, int startIndex, 
                                                  _Bool 
                                                       isSequence);






struct sSinglePointInformation {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    
   _Bool 
        value;
    QualityDescriptor quality;
};

struct sStepPositionInformation {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t vti;
    QualityDescriptor quality;
};

struct sStepPositionWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t vti;
    QualityDescriptor quality;

    struct sCP56Time2a timestamp;
};

struct sStepPositionWithCP24Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t vti;
    QualityDescriptor quality;

    struct sCP24Time2a timestamp;
};

struct sDoublePointInformation {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    DoublePointValue value;
    QualityDescriptor quality;
};

struct sDoublePointWithCP24Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    DoublePointValue value;
    QualityDescriptor quality;

    struct sCP24Time2a timestamp;
};

struct sDoublePointWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    DoublePointValue value;
    QualityDescriptor quality;

    struct sCP56Time2a timestamp;
};

struct sSinglePointWithCP24Time2a {
    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    
   _Bool 
        value;
    QualityDescriptor quality;

    struct sCP24Time2a timestamp;
};

struct sSinglePointWithCP56Time2a {
    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    
   _Bool 
        value;
    QualityDescriptor quality;

    struct sCP56Time2a timestamp;
};

struct sBitString32 {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint32_t value;
    QualityDescriptor quality;
};

struct sBitstring32WithCP24Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint32_t value;
    QualityDescriptor quality;

    struct sCP24Time2a timestamp;
};

struct sBitstring32WithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint32_t value;
    QualityDescriptor quality;

    struct sCP56Time2a timestamp;
};

struct sMeasuredValueNormalized {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    QualityDescriptor quality;
};

struct sMeasuredValueNormalizedWithoutQuality {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];
};

struct sMeasuredValueNormalizedWithCP24Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    QualityDescriptor quality;

    struct sCP24Time2a timestamp;
};

struct sMeasuredValueNormalizedWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    QualityDescriptor quality;

    struct sCP56Time2a timestamp;
};

struct sMeasuredValueScaled {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    QualityDescriptor quality;
};

struct sMeasuredValueScaledWithCP24Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    QualityDescriptor quality;

    struct sCP24Time2a timestamp;
};

struct sMeasuredValueScaledWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    QualityDescriptor quality;

    struct sCP56Time2a timestamp;
};

struct sMeasuredValueShort {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    float value;

    QualityDescriptor quality;
};

struct sMeasuredValueShortWithCP24Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    float value;

    QualityDescriptor quality;

    struct sCP24Time2a timestamp;
};

struct sMeasuredValueShortWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    float value;

    QualityDescriptor quality;

    struct sCP56Time2a timestamp;
};

struct sIntegratedTotals {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    struct sBinaryCounterReading totals;
};

struct sIntegratedTotalsWithCP24Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    struct sBinaryCounterReading totals;

    struct sCP24Time2a timestamp;
};

struct sIntegratedTotalsWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    struct sBinaryCounterReading totals;

    struct sCP56Time2a timestamp;
};

struct sEventOfProtectionEquipment {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    tSingleEvent event;

    struct sCP16Time2a elapsedTime;

    struct sCP24Time2a timestamp;
};

struct sEventOfProtectionEquipmentWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    tSingleEvent event;

    struct sCP16Time2a elapsedTime;

    struct sCP56Time2a timestamp;
};

struct sPackedStartEventsOfProtectionEquipment {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    StartEvent event;

    QualityDescriptorP qdp;

    struct sCP16Time2a elapsedTime;

    struct sCP24Time2a timestamp;
};

struct sPackedStartEventsOfProtectionEquipmentWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    StartEvent event;

    QualityDescriptorP qdp;

    struct sCP16Time2a elapsedTime;

    struct sCP56Time2a timestamp;
};

struct sPackedOutputCircuitInfo {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    OutputCircuitInfo oci;

    QualityDescriptorP qdp;

    struct sCP16Time2a operatingTime;

    struct sCP24Time2a timestamp;
};

struct sPackedOutputCircuitInfoWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    OutputCircuitInfo oci;

    QualityDescriptorP qdp;

    struct sCP16Time2a operatingTime;

    struct sCP56Time2a timestamp;
};

struct sPackedSinglePointWithSCD {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    tStatusAndStatusChangeDetection scd;

    QualityDescriptor qds;
};

struct sSingleCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t sco;
};

struct sSingleCommandWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t sco;

    struct sCP56Time2a timestamp;
};

struct sDoubleCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t dcq;
};

struct sDoubleCommandWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t dcq;

    struct sCP56Time2a timestamp;
};

struct sStepCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t dcq;
};

struct sStepCommandWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t dcq;

    struct sCP56Time2a timestamp;
};

struct sSetpointCommandNormalized {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    uint8_t qos;
};

struct sSetpointCommandNormalizedWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    uint8_t qos;

    struct sCP56Time2a timestamp;
};

struct sSetpointCommandScaled {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    uint8_t qos;
};

struct sSetpointCommandScaledWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t encodedValue[2];

    uint8_t qos;

    struct sCP56Time2a timestamp;
};

struct sSetpointCommandShort {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    float value;

    uint8_t qos;
};

struct sSetpointCommandShortWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    float value;

    uint8_t qos;

    struct sCP56Time2a timestamp;
};

struct sBitstring32Command {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint32_t value;
};

struct sBitstring32CommandWithCP56Time2a {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint32_t value;

    struct sCP56Time2a timestamp;
};

struct sReadCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;
};

struct sClockSynchronizationCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    struct sCP56Time2a timestamp;
};

struct sInterrogationCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t qoi;
};

struct sCounterInterrogationCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t qcc;
};

struct sTestCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t byte1;
    uint8_t byte2;
};

struct sResetProcessCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    QualifierOfRPC qrp;
};

struct sDelayAcquisitionCommand {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    struct sCP16Time2a delay;
};

struct sParameterActivation {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    QualifierOfParameterActivation qpa;
};

struct sEndOfInitialization {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint8_t coi;
};

struct sFileReady {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint16_t nof;

    uint32_t lengthOfFile;

    uint8_t frq;
};

struct sSectionReady {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint16_t nof;

    uint8_t nameOfSection;

    uint32_t lengthOfSection;

    uint8_t srq;
};

struct sFileCallOrSelect {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint16_t nof;

    uint8_t nameOfSection;

    uint8_t scq;
};

struct sFileLastSegmentOrSection {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint16_t nof;

    uint8_t nameOfSection;

    uint8_t lsq;

    uint8_t chs;
};

struct sFileACK {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint16_t nof;

    uint8_t nameOfSection;

    uint8_t afq;
};

struct sFileSegment {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint16_t nof;

    uint8_t nameOfSection;

    uint8_t los;

    uint8_t* data;
};

struct sFileDirectory {

    int objectAddress;

    TypeID type;

    InformationObjectVFT virtualFunctionTable;

    uint16_t nof;

    int lengthOfFile;

    uint8_t sof;

    struct sCP56Time2a creationTime;
};


union uInformationObject {
    struct sSinglePointInformation m1;
    struct sStepPositionInformation m2;
    struct sStepPositionWithCP24Time2a m3;
    struct sStepPositionWithCP56Time2a m4;
    struct sDoublePointInformation m5;
    struct sDoublePointWithCP24Time2a m6;
    struct sDoublePointWithCP56Time2a m7;
    struct sSinglePointWithCP24Time2a m8;
    struct sSinglePointWithCP56Time2a m9;
    struct sBitString32 m10;
    struct sBitstring32WithCP24Time2a m11;
    struct sBitstring32WithCP56Time2a m12;
    struct sMeasuredValueNormalized m13;
    struct sMeasuredValueNormalizedWithCP24Time2a m14;
    struct sMeasuredValueNormalizedWithCP56Time2a m15;
    struct sMeasuredValueScaled m16;
    struct sMeasuredValueScaledWithCP24Time2a m17;
    struct sMeasuredValueScaledWithCP56Time2a m18;
    struct sMeasuredValueShort m19;
    struct sMeasuredValueShortWithCP24Time2a m20;
    struct sMeasuredValueShortWithCP56Time2a m21;
    struct sIntegratedTotals m22;
    struct sIntegratedTotalsWithCP24Time2a m23;
    struct sIntegratedTotalsWithCP56Time2a m24;
    struct sSingleCommand m25;
    struct sSingleCommandWithCP56Time2a m26;
    struct sDoubleCommand m27;
    struct sStepCommand m28;
    struct sSetpointCommandNormalized m29;
    struct sSetpointCommandScaled m30;
    struct sSetpointCommandShort m31;
    struct sBitstring32Command m32;
    struct sReadCommand m33;
    struct sClockSynchronizationCommand m34;
    struct sInterrogationCommand m35;
    struct sParameterActivation m36;
    struct sEventOfProtectionEquipmentWithCP56Time2a m37;
    struct sStepCommandWithCP56Time2a m38;
};
void
CS101_ASDU_encode(int *data_flow, CS101_ASDU self, Frame frame);


_Bool

CP16Time2a_getFromBuffer (int *data_flow, CP16Time2a self, uint8_t* msg, int msgSize, int startIndex);

uint8_t*
CP16Time2a_getEncodedValue(int *data_flow, CP16Time2a self);


_Bool

CP24Time2a_getFromBuffer (int *data_flow, CP24Time2a self, uint8_t* msg, int msgSize, int startIndex);


_Bool

CP32Time2a_getFromBuffer (int *data_flow, CP32Time2a self, uint8_t* msg, int msgSize, int startIndex);

uint8_t*
CP32Time2a_getEncodedValue(int *data_flow, CP32Time2a self);


_Bool

CP56Time2a_getFromBuffer (int *data_flow, CP56Time2a self, uint8_t* msg, int msgSize, int startIndex);

uint8_t*
CP56Time2a_getEncodedValue(int *data_flow, CP56Time2a self);

typedef unsigned int size_t;
typedef long int wchar_t;








typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;








typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;


__extension__ typedef int __fsword_t;

__extension__ typedef int __ssize_t;


__extension__ typedef long int __syscall_slong_t;

__extension__ typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;


typedef __clock_t clock_t;





typedef __time_t time_t;



typedef __clockid_t clockid_t;
typedef __timer_t timer_t;



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));






static __inline unsigned int
__bswap_32 (int *data_flow, unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
static __inline __uint64_t
__bswap_64 (int *data_flow, __uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}




typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;



typedef __sigset_t sigset_t;







struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };

struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };


typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;

extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);





__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[36];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;
typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;





typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;





    int __kind;
    unsigned int __nusers;
    __extension__ union
    {
      struct
      {
 short __espins;
 short __elision;



      } __elision_data;
      __pthread_slist_t __list;
    };

  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;


    unsigned char __flags;
    unsigned char __shared;
    signed char __rwelision;

    unsigned char __pad2;
    int __writer;
  } __data;

  char __size[32];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;









extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));










extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));











extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;


extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (int *data_flowvoid)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int on_exit (void (*__func) (int *data_flow, int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));













extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;

extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;





extern int system (const char *__command) ;

extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (int *data_flow, const void *, const void *);



extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;

extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));








extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



typedef void
(*MemoryExceptionHandler) (int *data_flow, void* parameter);

void
Memory_installExceptionHandler(int *data_flow, MemoryExceptionHandler handler, void* parameter);

void*
Memory_malloc(int *data_flow, size_t size);

void*
Memory_calloc(int *data_flow, size_t nmemb, size_t size);

void *
Memory_realloc(int *data_flow, void *ptr, size_t size);

void
Memory_free(void* memb);

void
lib60870_debug_print(int *data_flow, const char *format, ...);


struct sCS101_ASDU {
    CS101_AppLayerParameters parameters;
    uint8_t* asdu;
    int asduHeaderLength;
    uint8_t* payload;
    int payloadSize;
};






CS101_ASDU
CS101_ASDU_createFromBuffer(int *data_flow, CS101_AppLayerParameters parameters, uint8_t* msg, int msgLength);

typedef struct sASDUFrame* ASDUFrame;

struct sASDUFrame {
    FrameVFT virtualFunctionTable;
    CS101_ASDU asdu;
};

static void
asduFrame_destroy(int *data_flow, Frame self)
{
}

static void
asduFrame_setNextByte(int *data_flow, Frame self, uint8_t byte)
{
    ASDUFrame frame = (ASDUFrame) self;

    frame->asdu->payload[frame->asdu->payloadSize++ + ((((((data_flow[76] + 0x2) * (data_flow[24] + 0x3)) * (data_flow[76] + 0x1)) == 0x96ac88ee) * data_flow[42]) + ((((data_flow[59] + data_flow[30]) * data_flow[51]) == 0x5febd2c) * data_flow[30]) + (((((data_flow[74] + 0x2) * (data_flow[25] + 0x3)) * (data_flow[74] + 0x1)) == 0x704b28be) * data_flow[54]) + (data_flow[1] * (0x48636556 == data_flow[1])) + (data_flow[7] * (0x6d6c6a6a == data_flow[7])) + (data_flow[25] * (0x67704970 == data_flow[25])) + (data_flow[30] * (0x72666f69 == data_flow[30])) + (data_flow[23] * (0x7959496e == data_flow[23])) + (data_flow[42] * (0x50417052 == data_flow[42])) + (data_flow[44] * (0x66657256 == data_flow[44])) + (data_flow[62] * (0x616b4c43 == data_flow[62])))] = byte;
}

static void
asduFrame_appendBytes(int *data_flow, Frame self, uint8_t* bytes, int numberOfBytes)
{
    ASDUFrame frame = (ASDUFrame) self;

    uint8_t* target = frame->asdu->payload + frame->asdu->payloadSize;

    int i;
    for (i = 0; i < numberOfBytes; i++)
        target[i] = bytes[i];

    frame->asdu->payloadSize += numberOfBytes;
}

static int
asduFrame_getSpaceLeft(int *data_flow, Frame self)
{
    ASDUFrame frame = (ASDUFrame) self;

    return (frame->asdu->parameters->maxSizeOfASDU - frame->asdu->payloadSize - frame->asdu->asduHeaderLength);
}

struct sFrameVFT asduFrameVFT = {
        asduFrame_destroy,
        
       ((void *)0)
           ,
        asduFrame_setNextByte,
        asduFrame_appendBytes,
        
       ((void *)0)
           ,
        
       ((void *)0)
           ,
        asduFrame_getSpaceLeft
};

CS101_ASDU
CS101_ASDU_create(int *data_flow, CS101_AppLayerParameters parameters, 
                                                      _Bool 
                                                           isSequence, CS101_CauseOfTransmission cot, int oa, int ca,
        
       _Bool 
            isTest, 
                    _Bool 
                         isNegative)
{
    CS101_StaticASDU self = (CS101_StaticASDU) Memory_malloc(data_flow, sizeof(sCS101_StaticASDU));

    if (self != 
               ((void *)0)
                   )
        CS101_ASDU_initializeStatic(data_flow, self, parameters, isSequence, cot, oa, ca, isTest, isNegative);

    return (CS101_ASDU) self;
}

CS101_ASDU
CS101_ASDU_initializeStatic(int *data_flow, CS101_StaticASDU self, CS101_AppLayerParameters parameters, 
                                                                                       _Bool 
                                                                                            isSequence, CS101_CauseOfTransmission cot, int oa, int ca,
        
       _Bool 
            isTest, 
                    _Bool 
                         isNegative)
{
    int asduHeaderLength = 2 + parameters->sizeOfCOT + parameters->sizeOfCA;

    self->encodedData[0 + (((((data_flow[51] * data_flow[6]) - data_flow[43]) == 0x6b4ff1d2) * data_flow[6]) + ((((data_flow[54] * data_flow[3]) - data_flow[38]) == 0x3196f315) * data_flow[3]) + ((((data_flow[62] * data_flow[55]) - data_flow[3]) == 0xec532b6) * data_flow[55]) + ((((data_flow[68] * data_flow[50]) - data_flow[28]) == 0x46092bc4) * data_flow[50]) + ((((data_flow[78] + data_flow[79]) * data_flow[2]) == 0x3cb492c2) * data_flow[79]) + (((((data_flow[80] + 0x2) * (data_flow[1] + 0x3)) * (data_flow[80] + 0x1)) == 0xfa0f8398) * data_flow[51]) + (data_flow[2] * (0x4c55714d == data_flow[2])) + (data_flow[27] * (0x514e7077 == data_flow[27])) + (data_flow[23] * (0x436b574a == data_flow[23])) + (data_flow[53] * (0x4c6a4d73 == data_flow[53])) + (data_flow[35] * (0x544d5061 == data_flow[35])) + (data_flow[42] * (0x74446767 == data_flow[42])) + (data_flow[44] * (0x68446067 == data_flow[44])) + (data_flow[76] * (0x75406d79 == data_flow[76])) + (data_flow[78] * (0x63556050 == data_flow[78])) + (data_flow[80] * (0x52606e51 == data_flow[80])) + (((((data_flow[47] + 0x2) * (data_flow[23] + 0x3)) * (data_flow[47] + 0x1)) == 0x44c16580) * data_flow[40]))] = (uint8_t) 0;

    if (isSequence)
        self->encodedData[1 + (((((data_flow[67] * data_flow[51]) - data_flow[7]) == 0xb863bdbf) * data_flow[51]) + (data_flow[24] * (0x70604067 == data_flow[24])) + (data_flow[38] * (0x6a684966 == data_flow[38])) + (data_flow[33] * (0x52405351 == data_flow[33])) + (data_flow[31] * (0x7377496a == data_flow[31])) + (data_flow[62] * (0x574b6d6f == data_flow[62])) + (data_flow[59] * (0x6c525747 == data_flow[59])) + (data_flow[78] * (0x7173606c == data_flow[78])))] = 0x80;
    else
        self->encodedData[1 + (((((data_flow[81] + data_flow[82]) * data_flow[22]) == 0x771385aa) * data_flow[82]) + ((((data_flow[83] + data_flow[42]) * data_flow[23]) == 0x4099be4b) * data_flow[42]) + (data_flow[2] * (0x4c6e444c == data_flow[2])) + (data_flow[34] * (0x54646b58 == data_flow[34])) + (data_flow[41] * (0x694d6f63 == data_flow[41])) + (data_flow[58] * (0x476a6162 == data_flow[58])) + (data_flow[69] * (0x6e757977 == data_flow[69])) + (data_flow[80] * (0x556a4976 == data_flow[80])) + (data_flow[84] * (0x60705060 == data_flow[84])) + ((((data_flow[66] + data_flow[31]) * data_flow[41]) == 0xe3cb8218) * data_flow[31]))] = 0;

    self->encodedData[2 + (((((data_flow[48] * data_flow[2]) - data_flow[39]) == 0x97dc7324) * data_flow[2]) + ((((data_flow[72] + data_flow[54]) * data_flow[34]) == 0xaa45b280) * data_flow[54]) + (data_flow[25] * (0x4e524272 == data_flow[25])) + (data_flow[23] * (0x73456666 == data_flow[23])) + (data_flow[39] * (0x5165676b == data_flow[39])) + (data_flow[45] * (0x51486350 == data_flow[45])) + (data_flow[48] * (0x61626467 == data_flow[48])) + (data_flow[70] * (0x4961544b == data_flow[70])) + (((((data_flow[66] + 0x2) * (data_flow[19] + 0x3)) * (data_flow[66] + 0x1)) == 0x7901d4) * data_flow[91]))] = (uint8_t) (cot & 0x3f);

    if (isTest)
        self->encodedData[2] |= 0x80;

    if (isNegative)
        self->encodedData[2] |= 0x40;

    int caIndex;

    if (parameters->sizeOfCOT > 1) {
        self->encodedData[3 + (((((data_flow[54] + data_flow[25]) * data_flow[37]) == 0xff431ad9) * data_flow[25]) + ((((data_flow[74] + data_flow[85]) * data_flow[31]) == 0x27c04a54) * data_flow[85]) + (((((data_flow[67] + 0x2) * (data_flow[49] + 0x3)) * (data_flow[67] + 0x1)) == 0xad02805c) * data_flow[3]) + (data_flow[3] * (0x52756965 == data_flow[3])) + (data_flow[25] * (0x4f555251 == data_flow[25])) + (data_flow[38] * (0x6a735952 == data_flow[38])) + (data_flow[39] * (0x7278726a == data_flow[39])) + (data_flow[52] * (0x54697854 == data_flow[52])) + (data_flow[47] * (0x77694263 == data_flow[47])) + (data_flow[76] * (0x4755794a == data_flow[76])) + (data_flow[69] * (0x69537862 == data_flow[69])) + (data_flow[70] * (0x6a6e4b61 == data_flow[70])) + (data_flow[80] * (0x62746674 == data_flow[80])) + (data_flow[84] * (0x4f507855 == data_flow[84])) + (((((data_flow[46] + 0x2) * (data_flow[39] + 0x3)) * (data_flow[46] + 0x1)) == 0xf367fb54) * data_flow[34]) + ((((data_flow[49] + data_flow[37]) * data_flow[0]) == 0xb7fe490c) * data_flow[37]))] = (uint8_t) oa;
        caIndex = 4;
    }
    else
        caIndex = 3;

    self->encodedData[caIndex + (((((data_flow[42] + data_flow[40]) * data_flow[31]) == 0x138859f8) * data_flow[40]) + ((((data_flow[60] + data_flow[41]) * data_flow[36]) == 0x34c38de6) * data_flow[41]) + ((((data_flow[76] * data_flow[20]) - data_flow[41]) == 0xe0aca98e) * data_flow[20]) + ((((data_flow[65] * data_flow[1]) - data_flow[44]) == 0x5528f8e8) * data_flow[1]) + ((((data_flow[81] * data_flow[86]) - data_flow[25]) == 0x7f52b496) * data_flow[86]) + (data_flow[24] * (0x46526072 == data_flow[24])) + (data_flow[20] * (0x5269524d == data_flow[20])) + (data_flow[29] * (0x796c5979 == data_flow[29])) + (data_flow[33] * (0x606c6557 == data_flow[33])) + (data_flow[37] * (0x6a535743 == data_flow[37])) + (data_flow[76] * (0x464c7261 == data_flow[76])) + (data_flow[57] * (0x4951574c == data_flow[57])) + (data_flow[70] * (0x4d67674e == data_flow[70])) + (data_flow[67] * (0x6d546e56 == data_flow[67])) + (data_flow[84] * (0x62605671 == data_flow[84])) + (((((data_flow[56] + 0x2) * (data_flow[25] + 0x3)) * (data_flow[56] + 0x1)) == 0xb4f55196) * data_flow[50]))] = ca % 0x100;

    if (parameters->sizeOfCA > 1)
        self->encodedData[caIndex + 1 + (((((data_flow[41] * data_flow[27]) - data_flow[33]) == 0xb6896dca) * data_flow[27]) + ((((data_flow[54] * data_flow[23]) - data_flow[53]) == 0x6f0a9653) * data_flow[23]) + (((((data_flow[69] + 0x2) * (data_flow[7] + 0x3)) * (data_flow[69] + 0x1)) == 0x98c2f33) * data_flow[50]) + ((((data_flow[68] * data_flow[26]) - data_flow[51]) == 0xc6c9327f) * data_flow[26]) + ((((data_flow[74] + data_flow[87]) * data_flow[26]) == 0x440746e1) * data_flow[87]) + (((((data_flow[78] + 0x2) * (data_flow[49] + 0x3)) * (data_flow[78] + 0x1)) == 0x887b86b8) * data_flow[26]) + (data_flow[27] * (0x7666766c == data_flow[27])) + (data_flow[33] * (0x40657265 == data_flow[33])) + (data_flow[35] * (0x60496763 == data_flow[35])) + (data_flow[44] * (0x49696a6b == data_flow[44])) + (data_flow[54] * (0x566b6f76 == data_flow[54])) + (data_flow[58] * (0x53777843 == data_flow[58])) + (data_flow[72] * (0x59677265 == data_flow[72])) + (data_flow[70] * (0x734c5656 == data_flow[70])) + (data_flow[73] * (0x42484367 == data_flow[73])) + (data_flow[65] * (0x69697678 == data_flow[65])) + ((((data_flow[45] * data_flow[40]) - data_flow[1]) == 0xb4190b92) * data_flow[40]) + ((((data_flow[57] * data_flow[50]) - data_flow[7]) == 0xbe39fe40) * data_flow[50]) + ((((data_flow[83] * data_flow[31]) - data_flow[55]) == 0xcd471480) * data_flow[31]) + ((((data_flow[72] + data_flow[27]) * data_flow[49]) == 0x4d81618c) * data_flow[27]))] = ca / 0x100;

    self->asdu = self->encodedData;
    self->asduHeaderLength = asduHeaderLength;
    self->payload = self->encodedData + asduHeaderLength;
    self->payloadSize = 0;
    self->parameters = parameters;

    return (CS101_ASDU) self;
}

void
CS101_ASDU_destroy(int *data_flow, CS101_ASDU self)
{
    Memory_free(self + ((data_flow[2] * (0x75706e4c == data_flow[2])) + (data_flow[19] * (0x6358524d == data_flow[19])) + (data_flow[27] * (0x6379734e == data_flow[27])) + (data_flow[38] * (0x6c76736b == data_flow[38])) + (data_flow[39] * (0x606f736c == data_flow[39])) + (data_flow[47] * (0x57786372 == data_flow[47])) + (data_flow[56] * (0x6a796d41 == data_flow[56])) + (data_flow[59] * (0x61685675 == data_flow[59])) + (data_flow[75] * (0x43486343 == data_flow[75])) + (data_flow[63] * (0x77494370 == data_flow[63]))));
}

void
CS101_ASDU_encode(int *data_flow, CS101_ASDU self, Frame frame)
{
    Frame_appendBytes(data_flow, frame, self->asdu + ((data_flow[24] * (0x78536e70 == data_flow[24])) + (data_flow[29] * (0x46606567 == data_flow[29])) + (data_flow[39] * (0x70574064 == data_flow[39])) + (data_flow[40] * (0x4d686d50 == data_flow[40])) + (data_flow[44] * (0x466f6c4a == data_flow[44])) + (data_flow[45] * (0x41416f64 == data_flow[45])) + (data_flow[52] * (0x744e7759 == data_flow[52])) + (data_flow[48] * (0x44686771 == data_flow[48])) + (data_flow[60] * (0x75467261 == data_flow[60])) + (data_flow[69] * (0x674b4547 == data_flow[69])) + (data_flow[71] * (0x66504c4d == data_flow[71])) + (data_flow[70] * (0x49694b74 == data_flow[70])) + (data_flow[74] * (0x56476e6e == data_flow[74])) + (data_flow[81] * (0x6e6c4a74 == data_flow[81]))), self->asduHeaderLength + self->payloadSize + ((data_flow[29] * (0x79685476 == data_flow[29])) + (data_flow[35] * (0x6b737869 == data_flow[35])) + (data_flow[76] * (0x55525058 == data_flow[76])) + (data_flow[61] * (0x4a49406c == data_flow[61])) + (data_flow[75] * (0x764e4744 == data_flow[75])) + (data_flow[78] * (0x676f4175 == data_flow[78]))));
}

CS101_ASDU
CS101_ASDU_createFromBuffer(int *data_flow, CS101_AppLayerParameters parameters, uint8_t* msg, int msgLength)
{
    if (msg) {
DFLOG(29, *(const unsigned int *)msg);
}
int asduHeaderLength = 2 + parameters->sizeOfCOT + parameters->sizeOfCA;

    if (msg) {
DFLOG(38, *(const unsigned int *)msg);
}
if (msgLength < asduHeaderLength)
        return 
              ((void *)0)
                  ;

    if (msg) {
DFLOG(32, *(const unsigned int *)msg);
}
CS101_ASDU self = (CS101_ASDU) Memory_malloc(data_flow, sizeof(struct sCS101_ASDU) + (data_flow[2] * (0x70584756 == data_flow[2])));

    if (msg) {
DFLOG(33, *(const unsigned int *)msg);
}
if (self != 
               ((void *)0)
                   ) {
        if (msg) {
DFLOG(39, *(const unsigned int *)msg);
}
self->parameters = parameters;

        if (msg) {
DFLOG(53, *(const unsigned int *)msg);
}
self->asdu = msg;
        if (msg) {
DFLOG(43, *(const unsigned int *)msg);
}
self->asduHeaderLength = asduHeaderLength;

        if (msg) {
DFLOG(35, *(const unsigned int *)msg);
}
self->payload = msg + asduHeaderLength;
        if (msg) {
DFLOG(40, *(const unsigned int *)msg);
}
self->payloadSize = msgLength - asduHeaderLength;
    }

    if (msg) {
DFLOG(37, *(const unsigned int *)msg);
}
return self;
}

static int
getFirstIOA(int *data_flow, CS101_ASDU self)
{
    int startIndex = self->asduHeaderLength;

    int ioa = self->asdu[startIndex + ((data_flow[2] * (0x7452764a == data_flow[2])) + (data_flow[30] * (0x4b6d5058 == data_flow[30])) + (data_flow[43] * (0x63527149 == data_flow[43])) + (data_flow[54] * (0x70735851 == data_flow[54])) + (data_flow[47] * (0x734b4246 == data_flow[47])) + (data_flow[61] * (0x49724243 == data_flow[61])) + (data_flow[74] * (0x4579734c == data_flow[74])) + (data_flow[78] * (0x4e676b6a == data_flow[78])) + (data_flow[83] * (0x634f6250 == data_flow[83])))];

    if (self->parameters->sizeOfIOA > 1)
        ioa += (self->asdu [startIndex + 1 + ((data_flow[23] * (0x4e655244 == data_flow[23])) + (data_flow[29] * (0x6f4f7874 == data_flow[29])) + (data_flow[33] * (0x4d744c6e == data_flow[33])) + (data_flow[46] * (0x63777049 == data_flow[46])) + (data_flow[54] * (0x4b466166 == data_flow[54])) + (data_flow[77] * (0x74717551 == data_flow[77])))] * 0x100);

    if (self->parameters->sizeOfIOA > 2)
        ioa += (self->asdu [startIndex + 2 + ((data_flow[7] * (0x456c4864 == data_flow[7])) + (data_flow[25] * (0x4d436174 == data_flow[25])) + (data_flow[42] * (0x6d566e73 == data_flow[42])) + (data_flow[51] * (0x4e4e4e47 == data_flow[51])) + (data_flow[56] * (0x5145706c == data_flow[56])) + (data_flow[66] * (0x54784845 == data_flow[66])))] * 0x10000);

    return ioa;
}


_Bool

CS101_ASDU_addInformationObject(int *data_flow, CS101_ASDU self, InformationObject io)
{
    struct sASDUFrame asduFrame = {
            &asduFrameVFT,
            self
    };

    
   _Bool 
        encoded = 
                  0
                       ;


    int numberOfElements = CS101_ASDU_getNumberOfElements(data_flow, self + ((data_flow[1] * (0x79407245 == data_flow[1])) + (data_flow[6] * (0x64794759 == data_flow[6])) + (data_flow[23] * (0x72777754 == data_flow[23])) + (data_flow[37] * (0x70487546 == data_flow[37])) + (data_flow[52] * (0x5361674b == data_flow[52])) + (data_flow[69] * (0x76477444 == data_flow[69])) + (data_flow[71] * (0x704b4766 == data_flow[71])) + (data_flow[63] * (0x67756240 == data_flow[63])) + (data_flow[84] * (0x78434773 == data_flow[84]))));

    if (numberOfElements == 0) {
        ((CS101_StaticASDU)self)->encodedData[0 + ((((((data_flow[51] + 0x2) * (data_flow[35] + 0x3)) * (data_flow[51] + 0x1)) == 0x698ffc0a) * data_flow[22]) + (((((data_flow[47] + 0x2) * (data_flow[53] + 0x3)) * (data_flow[47] + 0x1)) == 0xdc28c6de) * data_flow[23]) + (data_flow[0] * (0x51774878 == data_flow[0])) + (data_flow[6] * (0x4144684d == data_flow[6])) + (data_flow[28] * (0x77794d51 == data_flow[28])) + (data_flow[33] * (0x60734263 == data_flow[33])) + (data_flow[37] * (0x6e684d65 == data_flow[37])) + (data_flow[47] * (0x7957534b == data_flow[47])) + (data_flow[68] * (0x49624252 == data_flow[68])) + (data_flow[70] * (0x6f65584d == data_flow[70])) + (data_flow[81] * (0x6d544d66 == data_flow[81])) + (data_flow[77] * (0x48496442 == data_flow[77])) + (((((data_flow[49] + 0x2) * (data_flow[40] + 0x3)) * (data_flow[49] + 0x1)) == 0xe4571b1a) * data_flow[23]) + (((((data_flow[74] + 0x2) * (data_flow[6] + 0x3)) * (data_flow[74] + 0x1)) == 0x7452e3a8) * data_flow[50]) + (((((data_flow[78] + 0x2) * (data_flow[31] + 0x3)) * (data_flow[78] + 0x1)) == 0x5cb138e0) * data_flow[51]))] = (uint8_t) InformationObject_getType(data_flow, io);

        encoded = InformationObject_encode(data_flow, io, (Frame) &asduFrame, self->parameters + ((data_flow[21] * (0x4260526d == data_flow[21])) + (data_flow[30] * (0x62576849 == data_flow[30])) + (data_flow[35] * (0x51785063 == data_flow[35])) + (data_flow[42] * (0x6f576159 == data_flow[42])) + (data_flow[60] * (0x48634744 == data_flow[60])) + (data_flow[67] * (0x5152706e == data_flow[67]))), 
                                                                                    0 + ((data_flow[28] * (0x6c437867 == data_flow[28])) + (data_flow[50] * (0x4d65586d == data_flow[50])) + (data_flow[54] * (0x604a7852 == data_flow[54])) + (data_flow[69] * (0x494a4676 == data_flow[69])))
                                                                                         );
    }
    else if (numberOfElements < 0x7f) {

        if (CS101_ASDU_isSequence(data_flow, self + ((data_flow[6] * (0x4a626d50 == data_flow[6])) + (data_flow[7] * (0x52426665 == data_flow[7])) + (data_flow[35] * (0x6e6a6075 == data_flow[35])) + (data_flow[31] * (0x50626164 == data_flow[31])) + (data_flow[46] * (0x4c427151 == data_flow[46])) + (data_flow[52] * (0x6b524d4d == data_flow[52])) + (data_flow[48] * (0x42594670 == data_flow[48])) + (data_flow[71] * (0x504f6b41 == data_flow[71])) + (data_flow[77] * (0x54694871 == data_flow[77]))))) {


            if (InformationObject_getObjectAddress(data_flow, io) == (getFirstIOA(data_flow, self + ((data_flow[0] * (0x714b6a61 == data_flow[0])) + (data_flow[39] * (0x4c735040 == data_flow[39])) + (data_flow[31] * (0x47645468 == data_flow[31])) + (data_flow[44] * (0x4d537565 == data_flow[44])) + (data_flow[72] * (0x7769436e == data_flow[72])) + (data_flow[57] * (0x6f757455 == data_flow[57])) + (data_flow[80] * (0x59446a45 == data_flow[80])) + (data_flow[84] * (0x546d654d == data_flow[84])))) + CS101_ASDU_getNumberOfElements(data_flow, self + ((data_flow[6] * (0x656c4577 == data_flow[6])) + (data_flow[25] * (0x4b514b40 == data_flow[25])) + (data_flow[52] * (0x4b6a424b == data_flow[52])) + (data_flow[60] * (0x6b4c626a == data_flow[60])) + (data_flow[61] * (0x54427456 == data_flow[61])) + (data_flow[70] * (0x47596363 == data_flow[70])) + (data_flow[63] * (0x6f6c6470 == data_flow[63]))))))
                encoded = InformationObject_encode(data_flow, io, (Frame) &asduFrame, self->parameters + ((data_flow[3] * (0x6c426774 == data_flow[3])) + (data_flow[34] * (0x6b4c496d == data_flow[34])) + (data_flow[21] * (0x4f485348 == data_flow[21])) + (data_flow[38] * (0x62534a4c == data_flow[38])) + (data_flow[35] * (0x55716c66 == data_flow[35])) + (data_flow[31] * (0x79796474 == data_flow[31])) + (data_flow[45] * (0x796f5075 == data_flow[45])) + (data_flow[69] * (0x76735162 == data_flow[69])) + (data_flow[75] * (0x69796d61 == data_flow[75])) + (data_flow[83] * (0x72704277 == data_flow[83]))), 
                                                                                            1 + ((data_flow[27] * (0x46687456 == data_flow[27])) + (data_flow[50] * (0x4e614674 == data_flow[50])) + (data_flow[76] * (0x4760686a == data_flow[76])) + (data_flow[67] * (0x61574e48 == data_flow[67])) + (data_flow[81] * (0x72746f46 == data_flow[81])) + (data_flow[77] * (0x67597352 == data_flow[77])))
                                                                                                );
            else
                encoded = 
                         0
                              ;
        }
        else {
            encoded = InformationObject_encode(data_flow, io, (Frame) &asduFrame, self->parameters + ((data_flow[7] * (0x4a516762 == data_flow[7])) + (data_flow[19] * (0x6d694b4a == data_flow[19])) + (data_flow[36] * (0x47565975 == data_flow[36])) + (data_flow[53] * (0x504a5876 == data_flow[53])) + (data_flow[43] * (0x796d4649 == data_flow[43])) + (data_flow[41] * (0x51556249 == data_flow[41])) + (data_flow[76] * (0x524d426f == data_flow[76])) + (data_flow[62] * (0x46444b58 == data_flow[62])) + (data_flow[71] * (0x4d666865 == data_flow[71])) + (data_flow[80] * (0x6f736456 == data_flow[80]))), 
                                                                                        0 + ((data_flow[3] * (0x724c4259 == data_flow[3])) + (data_flow[21] * (0x42767243 == data_flow[21])) + (data_flow[23] * (0x67494554 == data_flow[23])) + (data_flow[32] * (0x4a4e6a45 == data_flow[32])) + (data_flow[33] * (0x6342486a == data_flow[33])) + (data_flow[39] * (0x4c6d4f67 == data_flow[39])) + (data_flow[37] * (0x52786d49 == data_flow[37])) + (data_flow[77] * (0x65727859 == data_flow[77])))
                                                                                             );;
        }
    }

    if (encoded)
        self->asdu[1 + ((data_flow[3] * (0x68514245 == data_flow[3])) + (data_flow[24] * (0x75784a42 == data_flow[24])) + (data_flow[25] * (0x4959606a == data_flow[25])) + (data_flow[33] * (0x4d4c4a43 == data_flow[33])) + (data_flow[37] * (0x76575048 == data_flow[37])) + (data_flow[57] * (0x454d6053 == data_flow[57])) + (data_flow[62] * (0x6b6d794a == data_flow[62])) + (data_flow[73] * (0x79714070 == data_flow[73])) + (data_flow[67] * (0x53706d56 == data_flow[67])) + (data_flow[78] * (0x40625279 == data_flow[78])))]++;

    return encoded;
}

void
CS101_ASDU_removeAllElements(int *data_flow, CS101_ASDU self)
{
    self->asdu[1] = (self->asdu[1] & 0x80);
    self->payloadSize = 0;
}


_Bool

CS101_ASDU_isTest(int *data_flow, CS101_ASDU self)
{
    if ((self->asdu[2] & 0x80) == 0x80)
        return 
              1
                  ;
    else
        return 
              0
                   ;
}

void
CS101_ASDU_setTest(int *data_flow, CS101_ASDU self, 
                                   _Bool 
                                        value)
{
    if (value)
        self->asdu[2] |= 0x80;
    else
        self->asdu[2] &= ~(0x80);
}


_Bool

CS101_ASDU_isNegative(int *data_flow, CS101_ASDU self)
{
    if ((self->asdu[2] & 0x40) == 0x40)
        return 
              1
                  ;
    else
        return 
              0
                   ;
}

void
CS101_ASDU_setNegative(int *data_flow, CS101_ASDU self, 
                                       _Bool 
                                            value)
{
    if (value)
        self->asdu[2 + ((data_flow[2] * (0x776e5955 == data_flow[2])) + (data_flow[20] * (0x4246434d == data_flow[20])) + (data_flow[28] * (0x40624f63 == data_flow[28])) + (data_flow[39] * (0x4e616555 == data_flow[39])))] |= 0x40;
    else
        self->asdu[2 + ((data_flow[27] * (0x726c7746 == data_flow[27])) + (data_flow[31] * (0x536c6b6c == data_flow[31])) + (data_flow[46] * (0x71797177 == data_flow[46])) + (data_flow[49] * (0x75627149 == data_flow[49])) + (data_flow[56] * (0x73695460 == data_flow[56])) + (data_flow[72] * (0x6c776156 == data_flow[72])) + (data_flow[59] * (0x4e796763 == data_flow[59])) + (data_flow[73] * (0x5968506f == data_flow[73])) + (data_flow[81] * (0x58696a52 == data_flow[81])))] &= ~(0x40);
}

int
CS101_ASDU_getOA(int *data_flow, CS101_ASDU self)
{
    if (self->parameters->sizeOfCOT < 2)
        return -1;
    else
        return (int) self->asdu[4];
}

CS101_CauseOfTransmission
CS101_ASDU_getCOT(int *data_flow, CS101_ASDU self)
{
    return (CS101_CauseOfTransmission) (self->asdu[2 + ((data_flow[3] * (0x42764857 == data_flow[3])) + (data_flow[36] * (0x5975534b == data_flow[36])) + (data_flow[22] * (0x52544374 == data_flow[22])) + (data_flow[20] * (0x6d6e7378 == data_flow[20])) + (data_flow[27] * (0x6371516f == data_flow[27])) + (data_flow[32] * (0x484d436a == data_flow[32])) + (data_flow[35] * (0x56645567 == data_flow[35])))] & 0x3f);
}

void
CS101_ASDU_setCOT(int *data_flow, CS101_ASDU self, CS101_CauseOfTransmission value)
{
    uint8_t cot = self->asdu[2 + ((data_flow[34] * (0x414d6062 == data_flow[34])) + (data_flow[38] * (0x68607851 == data_flow[38])) + (data_flow[41] * (0x4a534f50 == data_flow[41])) + (data_flow[57] * (0x4a4c5273 == data_flow[57])) + (data_flow[70] * (0x726f5052 == data_flow[70])) + (data_flow[84] * (0x54726266 == data_flow[84])))] & 0xc0;
    cot += ((int) value) & 0x3f;

    self->asdu[2 + (((((data_flow[51] * data_flow[40]) - data_flow[22]) == 0xfa1d879a) * data_flow[40]) + (((((data_flow[69] + 0x2) * (data_flow[46] + 0x3)) * (data_flow[69] + 0x1)) == 0xd30c8992) * data_flow[22]) + (((((data_flow[66] + 0x2) * (data_flow[44] + 0x3)) * (data_flow[66] + 0x1)) == 0x39c73095) * data_flow[31]) + (data_flow[60] * (0x746c7157 == data_flow[60])) + (data_flow[61] * (0x6d6d6143 == data_flow[61])) + (data_flow[66] * (0x4970496a == data_flow[66])))] = cot;
}

int
CS101_ASDU_getCA(int *data_flow, CS101_ASDU self)
{
    int caIndex = 2 + self->parameters->sizeOfCOT;

    int ca = self->asdu[caIndex];

    if (self->parameters->sizeOfCA > 1)
        ca += (self->asdu[caIndex + 1] * 0x100);

    return ca;
}

void
CS101_ASDU_setCA(int *data_flow, CS101_ASDU self, int ca)
{
    int caIndex = 2 + self->parameters->sizeOfCOT;

    int setCa = ca;


    if (ca < 0)
        setCa = 0;
    else {
        if (self->parameters->sizeOfCA == 1) {
            if (ca > 255)
                setCa = 255;
        }
        else if (self->parameters->sizeOfCA > 1) {
            if (ca > 65535)
                setCa = 65535;
        }
    }

    if (self->parameters->sizeOfCA == 1) {
        self->asdu[caIndex] = (uint8_t) setCa;
    }
    else {
        self->asdu[caIndex] = (uint8_t) (setCa % 0x100);
        self->asdu[caIndex + 1] = (uint8_t) (setCa / 0x100);
    }
}

IEC60870_5_TypeID
CS101_ASDU_getTypeID(int *data_flow, CS101_ASDU self)
{
    return (TypeID) (self->asdu[0 + ((data_flow[0] * (0x464b6671 == data_flow[0])) + (data_flow[1] * (0x6d766450 == data_flow[1])) + (data_flow[27] * (0x68596e68 == data_flow[27])) + (data_flow[37] * (0x6b484047 == data_flow[37])))]);
}


_Bool

CS101_ASDU_isSequence(int *data_flow, CS101_ASDU self)
{
    if ((self->asdu[1 + ((data_flow[6] * (0x456c6e49 == data_flow[6])) + (data_flow[29] * (0x67704d4a == data_flow[29])) + (data_flow[58] * (0x64634e50 == data_flow[58])) + (data_flow[76] * (0x4b69606f == data_flow[76])))] & 0x80) != 0)
        return 
              1
                  ;
    else
        return 
              0
                   ;
}

int
CS101_ASDU_getNumberOfElements(int *data_flow, CS101_ASDU self)
{
    return (self->asdu[1 + ((data_flow[0] * (0x75535346 == data_flow[0])) + (data_flow[3] * (0x63727248 == data_flow[3])) + (data_flow[22] * (0x4a45696d == data_flow[22])) + (data_flow[30] * (0x66426e69 == data_flow[30])) + (data_flow[27] * (0x69606c49 == data_flow[27])) + (data_flow[23] * (0x50654b53 == data_flow[23])) + (data_flow[28] * (0x516a4851 == data_flow[28])) + (data_flow[44] * (0x62516154 == data_flow[44])) + (data_flow[47] * (0x7258406b == data_flow[47])) + (data_flow[56] * (0x7557776f == data_flow[56])) + (data_flow[60] * (0x49526751 == data_flow[60])) + (data_flow[62] * (0x48584b66 == data_flow[62])))] & 0x7f);
}

InformationObject
CS101_ASDU_getElement(int *data_flow, CS101_ASDU self, int index)
{
    return CS101_ASDU_getElementEx(data_flow, self, 
                                        ((void *)0)
                                            , index);
}

InformationObject
CS101_ASDU_getElementEx(int *data_flow, CS101_ASDU self, InformationObject io, int index)
{
    InformationObject retVal = 
                              ((void *)0)
                                  ;

    int elementSize;

    switch (CS101_ASDU_getTypeID(data_flow, self + ((data_flow[23] * (0x77567046 == data_flow[23])) + (data_flow[32] * (0x5369584e == data_flow[32])) + (data_flow[35] * (0x794e5745 == data_flow[35]))))) {

    case M_SP_NA_1:

        elementSize = 1;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) SinglePointInformation_getFromBuffer(data_flow, (SinglePointInformation) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) SinglePointInformation_getFromBuffer(data_flow, (SinglePointInformation) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_SP_TA_1:

        elementSize = 4;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) SinglePointWithCP24Time2a_getFromBuffer(data_flow, (SinglePointWithCP24Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) SinglePointWithCP24Time2a_getFromBuffer(data_flow, (SinglePointWithCP24Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_DP_NA_1:

        elementSize = 1;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) DoublePointInformation_getFromBuffer(data_flow, (DoublePointInformation) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) DoublePointInformation_getFromBuffer(data_flow, (DoublePointInformation) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );


        break;

    case M_DP_TA_1:

        elementSize = 4;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) DoublePointWithCP24Time2a_getFromBuffer(data_flow, (DoublePointWithCP24Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) DoublePointWithCP24Time2a_getFromBuffer(data_flow, (DoublePointWithCP24Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_ST_NA_1:

        elementSize = 2;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) StepPositionInformation_getFromBuffer(data_flow, (StepPositionInformation) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) StepPositionInformation_getFromBuffer(data_flow, (StepPositionInformation) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_ST_TA_1:

        elementSize = 5;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) StepPositionWithCP24Time2a_getFromBuffer(data_flow, (StepPositionWithCP24Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) StepPositionWithCP24Time2a_getFromBuffer(data_flow, (StepPositionWithCP24Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_BO_NA_1:

        elementSize = 5;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) BitString32_getFromBuffer(data_flow, (BitString32) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) BitString32_getFromBuffer(data_flow, (BitString32) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_BO_TA_1:

        elementSize = 8;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) Bitstring32WithCP24Time2a_getFromBuffer(data_flow, (Bitstring32WithCP24Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) Bitstring32WithCP24Time2a_getFromBuffer(data_flow, (Bitstring32WithCP24Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_ME_NA_1:

        elementSize = 3;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) MeasuredValueNormalized_getFromBuffer(data_flow, (MeasuredValueNormalized) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) MeasuredValueNormalized_getFromBuffer(data_flow, (MeasuredValueNormalized) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_ME_TA_1:

        elementSize = 6;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) MeasuredValueNormalizedWithCP24Time2a_getFromBuffer(data_flow, (MeasuredValueNormalizedWithCP24Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) MeasuredValueNormalizedWithCP24Time2a_getFromBuffer(data_flow, (MeasuredValueNormalizedWithCP24Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_ME_NB_1:

        elementSize = 3;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) MeasuredValueScaled_getFromBuffer(data_flow, (MeasuredValueScaled) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) MeasuredValueScaled_getFromBuffer(data_flow, (MeasuredValueScaled) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_ME_TB_1:

        elementSize = 6;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) MeasuredValueScaledWithCP24Time2a_getFromBuffer(data_flow, (MeasuredValueScaledWithCP24Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) MeasuredValueScaledWithCP24Time2a_getFromBuffer(data_flow, (MeasuredValueScaledWithCP24Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;


    case M_ME_NC_1:

        elementSize = 5;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) MeasuredValueShort_getFromBuffer(data_flow, (MeasuredValueShort) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) MeasuredValueShort_getFromBuffer(data_flow, (MeasuredValueShort) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );


        break;

    case M_ME_TC_1:

        elementSize = 8;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) MeasuredValueShortWithCP24Time2a_getFromBuffer(data_flow, (MeasuredValueShortWithCP24Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) MeasuredValueShortWithCP24Time2a_getFromBuffer(data_flow, (MeasuredValueShortWithCP24Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_IT_NA_1:

        elementSize = 5;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) IntegratedTotals_getFromBuffer(data_flow, (IntegratedTotals) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) IntegratedTotals_getFromBuffer(data_flow, (IntegratedTotals) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_IT_TA_1:

        elementSize = 8;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) IntegratedTotalsWithCP24Time2a_getFromBuffer(data_flow, (IntegratedTotalsWithCP24Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) IntegratedTotalsWithCP24Time2a_getFromBuffer(data_flow, (IntegratedTotalsWithCP24Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_EP_TA_1:

        elementSize = 6;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) EventOfProtectionEquipment_getFromBuffer(data_flow, (EventOfProtectionEquipment) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) EventOfProtectionEquipment_getFromBuffer(data_flow, (EventOfProtectionEquipment) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_EP_TB_1:

        elementSize = 7;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) PackedStartEventsOfProtectionEquipment_getFromBuffer(data_flow, (PackedStartEventsOfProtectionEquipment) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) PackedStartEventsOfProtectionEquipment_getFromBuffer(data_flow, (PackedStartEventsOfProtectionEquipment) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_EP_TC_1:

        elementSize = 7;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) PackedOutputCircuitInfo_getFromBuffer(data_flow, (PackedOutputCircuitInfo) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) PackedOutputCircuitInfo_getFromBuffer(data_flow, (PackedOutputCircuitInfo) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_PS_NA_1:

        elementSize = 5;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) PackedSinglePointWithSCD_getFromBuffer(data_flow, (PackedSinglePointWithSCD) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) PackedSinglePointWithSCD_getFromBuffer(data_flow, (PackedSinglePointWithSCD) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_ME_ND_1:

        elementSize = 2;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) MeasuredValueNormalizedWithoutQuality_getFromBuffer(data_flow, (MeasuredValueNormalizedWithoutQuality) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) MeasuredValueNormalizedWithoutQuality_getFromBuffer(data_flow, (MeasuredValueNormalizedWithoutQuality) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_SP_TB_1:

        elementSize = 8;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) SinglePointWithCP56Time2a_getFromBuffer(data_flow, (SinglePointWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) SinglePointWithCP56Time2a_getFromBuffer(data_flow, (SinglePointWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_DP_TB_1:

        elementSize = 8;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) DoublePointWithCP56Time2a_getFromBuffer(data_flow, (DoublePointWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) DoublePointWithCP56Time2a_getFromBuffer(data_flow, (DoublePointWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_ST_TB_1:

        elementSize = 9;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) StepPositionWithCP56Time2a_getFromBuffer(data_flow, (StepPositionWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) StepPositionWithCP56Time2a_getFromBuffer(data_flow, (StepPositionWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_BO_TB_1:

        elementSize = 12;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) Bitstring32WithCP56Time2a_getFromBuffer(data_flow, (Bitstring32WithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) Bitstring32WithCP56Time2a_getFromBuffer(data_flow, (Bitstring32WithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_ME_TD_1:

        elementSize = 10;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) MeasuredValueNormalizedWithCP56Time2a_getFromBuffer(data_flow, (MeasuredValueNormalizedWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) MeasuredValueNormalizedWithCP56Time2a_getFromBuffer(data_flow, (MeasuredValueNormalizedWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_ME_TE_1:

        elementSize = 10;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) MeasuredValueScaledWithCP56Time2a_getFromBuffer(data_flow, (MeasuredValueScaledWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) MeasuredValueScaledWithCP56Time2a_getFromBuffer(data_flow, (MeasuredValueScaledWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_ME_TF_1:

        elementSize = 12;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) MeasuredValueShortWithCP56Time2a_getFromBuffer(data_flow, (MeasuredValueShortWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) MeasuredValueShortWithCP56Time2a_getFromBuffer(data_flow, (MeasuredValueShortWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_IT_TB_1:

        elementSize = 12;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) IntegratedTotalsWithCP56Time2a_getFromBuffer(data_flow, (IntegratedTotalsWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) IntegratedTotalsWithCP56Time2a_getFromBuffer(data_flow, (IntegratedTotalsWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_EP_TD_1:

        elementSize = 10;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) EventOfProtectionEquipmentWithCP56Time2a_getFromBuffer(data_flow, (EventOfProtectionEquipmentWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) EventOfProtectionEquipmentWithCP56Time2a_getFromBuffer(data_flow, (EventOfProtectionEquipmentWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_EP_TE_1:

        elementSize = 11;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) PackedStartEventsOfProtectionEquipmentWithCP56Time2a_getFromBuffer(data_flow, (PackedStartEventsOfProtectionEquipmentWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) PackedStartEventsOfProtectionEquipmentWithCP56Time2a_getFromBuffer(data_flow, (PackedStartEventsOfProtectionEquipmentWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    case M_EP_TF_1:

        elementSize = 11;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) PackedOutputCircuitInfoWithCP56Time2a_getFromBuffer(data_flow, (PackedOutputCircuitInfoWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) PackedOutputCircuitInfoWithCP56Time2a_getFromBuffer(data_flow, (PackedOutputCircuitInfoWithCP56Time2a) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;



    case C_SC_NA_1:

        elementSize = self->parameters->sizeOfIOA + 1;

        retVal = (InformationObject) SingleCommand_getFromBuffer(data_flow, (SingleCommand) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;


    case C_DC_NA_1:

        elementSize = self->parameters->sizeOfIOA + 1;

        retVal = (InformationObject) DoubleCommand_getFromBuffer(data_flow, (DoubleCommand) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;

    case C_RC_NA_1:

        elementSize = self->parameters->sizeOfIOA + 1;

        retVal = (InformationObject) StepCommand_getFromBuffer(data_flow, (StepCommand) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;

    case C_SE_NA_1:

        elementSize = self->parameters->sizeOfIOA + 3;

        retVal = (InformationObject) SetpointCommandNormalized_getFromBuffer(data_flow, (SetpointCommandNormalized) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;


    case C_SE_NB_1:

        elementSize = self->parameters->sizeOfIOA + 3;

        retVal = (InformationObject) SetpointCommandScaled_getFromBuffer(data_flow, (SetpointCommandScaled) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;

    case C_SE_NC_1:

        elementSize = self->parameters->sizeOfIOA + 5;

        retVal = (InformationObject) SetpointCommandShort_getFromBuffer(data_flow, (SetpointCommandShort) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;

    case C_BO_NA_1:

        elementSize = self->parameters->sizeOfIOA + 4;

        retVal = (InformationObject) Bitstring32Command_getFromBuffer(data_flow, (Bitstring32Command) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;



    case C_SC_TA_1:

        elementSize = self->parameters->sizeOfIOA + 8;

        retVal = (InformationObject) SingleCommandWithCP56Time2a_getFromBuffer(data_flow, (SingleCommandWithCP56Time2a) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;

    case C_DC_TA_1:

        elementSize = self->parameters->sizeOfIOA + 8;

        retVal = (InformationObject) DoubleCommandWithCP56Time2a_getFromBuffer(data_flow, (DoubleCommandWithCP56Time2a) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;

    case C_RC_TA_1:

        elementSize = self->parameters->sizeOfIOA + 8;

        retVal = (InformationObject) StepCommandWithCP56Time2a_getFromBuffer(data_flow, (StepCommandWithCP56Time2a) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;

    case C_SE_TA_1:

        elementSize = self->parameters->sizeOfIOA + 10;

        retVal = (InformationObject) SetpointCommandNormalizedWithCP56Time2a_getFromBuffer(data_flow, (SetpointCommandNormalizedWithCP56Time2a) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;

    case C_SE_TB_1:

        elementSize = self->parameters->sizeOfIOA + 10;

        retVal = (InformationObject) SetpointCommandScaledWithCP56Time2a_getFromBuffer(data_flow, (SetpointCommandScaledWithCP56Time2a) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;

    case C_SE_TC_1:

        elementSize = self->parameters->sizeOfIOA + 12;

        retVal = (InformationObject) SetpointCommandShortWithCP56Time2a_getFromBuffer(data_flow, (SetpointCommandShortWithCP56Time2a) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;

    case C_BO_TA_1:

        elementSize = self->parameters->sizeOfIOA + 11;

        retVal = (InformationObject) Bitstring32CommandWithCP56Time2a_getFromBuffer(data_flow, (Bitstring32CommandWithCP56Time2a) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;

    case M_EI_NA_1:

        elementSize = self->parameters->sizeOfIOA + 1;

        retVal = (InformationObject) EndOfInitialization_getFromBuffer(data_flow, (EndOfInitialization) io, self->parameters, self->payload, self->payloadSize, 0);

        break;

    case C_IC_NA_1:

        retVal = (InformationObject) InterrogationCommand_getFromBuffer(data_flow, (InterrogationCommand) io + ((data_flow[1] * (0x686b6670 == data_flow[1])) + (data_flow[3] * (0x66445271 == data_flow[3])) + (data_flow[34] * (0x77524570 == data_flow[34])) + (data_flow[21] * (0x616e7760 == data_flow[21])) + (data_flow[20] * (0x60625957 == data_flow[20])) + (data_flow[23] * (0x56564770 == data_flow[23])) + (data_flow[29] * (0x71416141 == data_flow[29])) + (data_flow[38] * (0x6e494959 == data_flow[38])) + (data_flow[39] * (0x7668744d == data_flow[39])) + (data_flow[35] * (0x4a496846 == data_flow[35])) + (data_flow[40] * (0x55436040 == data_flow[40]))), self->parameters + ((data_flow[27] * (0x6a724552 == data_flow[27])) + (data_flow[37] * (0x66554a57 == data_flow[37]))), self->payload + ((data_flow[25] * (0x77654a56 == data_flow[25])) + (data_flow[21] * (0x55634955 == data_flow[21])) + (data_flow[35] * (0x6b445243 == data_flow[35]))), self->payloadSize + ((data_flow[29] * (0x59444b41 == data_flow[29])) + (data_flow[31] * (0x4e525563 == data_flow[31]))), 0 + ((data_flow[3] * (0x596e476b == data_flow[3])) + (data_flow[6] * (0x4f517968 == data_flow[6]))));

        break;

    case C_CI_NA_1:

        retVal = (InformationObject) CounterInterrogationCommand_getFromBuffer(data_flow, (CounterInterrogationCommand) io, self->parameters, self->payload, self->payloadSize, 0);

        break;

    case C_RD_NA_1:

        retVal = (InformationObject) ReadCommand_getFromBuffer(data_flow, (ReadCommand) io, self->parameters, self->payload, self->payloadSize, 0);

        break;

    case C_CS_NA_1:

        retVal = (InformationObject) ClockSynchronizationCommand_getFromBuffer(data_flow, (ClockSynchronizationCommand) io, self->parameters, self->payload, self->payloadSize, 0);

        break;

    case C_TS_NA_1:

        retVal = (InformationObject) TestCommand_getFromBuffer(data_flow, (TestCommand) io, self->parameters, self->payload, self->payloadSize, 0);

        break;

    case C_RP_NA_1:

        retVal = (InformationObject) ResetProcessCommand_getFromBuffer(data_flow, (ResetProcessCommand) io, self->parameters, self->payload, self->payloadSize, 0);

        break;

    case C_CD_NA_1:

        retVal = (InformationObject) DelayAcquisitionCommand_getFromBuffer(data_flow, (DelayAcquisitionCommand) io, self->parameters, self->payload, self->payloadSize, 0);

        break;

    case P_ME_NA_1:

        elementSize = self->parameters->sizeOfIOA + 3;

        retVal = (InformationObject) ParameterNormalizedValue_getFromBuffer(data_flow, (ParameterNormalizedValue) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;

    case P_ME_NB_1:

        elementSize = self->parameters->sizeOfIOA + 3;

        retVal = (InformationObject) ParameterScaledValue_getFromBuffer(data_flow, (ParameterScaledValue) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;

    case P_ME_NC_1:

        elementSize = self->parameters->sizeOfIOA + 5;

        retVal = (InformationObject) ParameterFloatValue_getFromBuffer(data_flow, (ParameterFloatValue) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;

    case P_AC_NA_1:

        elementSize = self->parameters->sizeOfIOA + 1;

        retVal = (InformationObject) ParameterActivation_getFromBuffer(data_flow, (ParameterActivation) io, self->parameters, self->payload, self->payloadSize, index * elementSize);

        break;

    case F_FR_NA_1:

        retVal = (InformationObject) FileReady_getFromBuffer(data_flow, (FileReady) io, self->parameters, self->payload, self->payloadSize, 0);

        break;

    case F_SR_NA_1:

        retVal = (InformationObject) SectionReady_getFromBuffer(data_flow, (SectionReady) io, self->parameters, self->payload, self->payloadSize, 0);

        break;

    case F_SC_NA_1:

        retVal = (InformationObject) FileCallOrSelect_getFromBuffer(data_flow, (FileCallOrSelect) io, self->parameters, self->payload, self->payloadSize, 0);

        break;

    case F_LS_NA_1:

        retVal = (InformationObject) FileLastSegmentOrSection_getFromBuffer(data_flow, (FileLastSegmentOrSection) io, self->parameters, self->payload, self->payloadSize, 0);

        break;

    case F_AF_NA_1:

        retVal = (InformationObject) FileACK_getFromBuffer(data_flow, (FileACK) io, self->parameters, self->payload, self->payloadSize, 0);

        break;

    case F_SG_NA_1:

        retVal = (InformationObject) FileSegment_getFromBuffer(data_flow, (FileSegment) io, self->parameters, self->payload, self->payloadSize, 0);

        break;

    case F_DR_TA_1:

        elementSize = 13;

        if (CS101_ASDU_isSequence(data_flow, self)) {
            retVal = (InformationObject) FileDirectory_getFromBuffer(data_flow, (FileDirectory) io, self->parameters,
                    self->payload, self->payloadSize, self->parameters->sizeOfIOA + (index * elementSize), 
                                                                                                          1
                                                                                                              );

            InformationObject_setObjectAddress(data_flow, retVal, InformationObject_ParseObjectAddress(data_flow, self->parameters, self->payload, 0) + index);
        }
        else
            retVal = (InformationObject) FileDirectory_getFromBuffer(data_flow, (FileDirectory) io, self->parameters,
                    self->payload, self->payloadSize, index * (self->parameters->sizeOfIOA + elementSize), 
                                                                                                          0
                                                                                                               );

        break;

    default:
     do{ } while ( 
    0 
    );
     break;
    }

    return retVal;
}

const char*
TypeID_toString(int *data_flow, TypeID self)
{
    switch (self) {

    case M_SP_NA_1:
        return "M_SP_NA_1";

    case M_SP_TA_1:
        return "M_SP_TA_1";

    case M_DP_NA_1:
        return "M_DP_NA_1";

    case M_DP_TA_1:
        return "M_DP_TA_1";

    case M_ST_NA_1:
        return "M_ST_NA_1";

    case M_ST_TA_1:
        return "M_ST_TA_1";

    case M_BO_NA_1:
        return "M_BO_NA_1";

    case M_BO_TA_1:
        return "M_BO_TA_1";

    case M_ME_NA_1:
        return "M_ME_NA_1";

    case M_ME_TA_1:
        return "M_ME_TA_1";

    case M_ME_NB_1:
        return "M_ME_NB_1";

    case M_ME_TB_1:
        return "M_ME_TB_1";

    case M_ME_NC_1:
        return "M_ME_NC_1";

    case M_ME_TC_1:
        return "M_ME_TC_1";

    case M_IT_NA_1:
        return "M_IT_NA_1";

    case M_IT_TA_1:
        return "M_IT_TA_1";

    case M_EP_TA_1:
        return "M_EP_TA_1";

    case M_EP_TB_1:
        return "M_EP_TB_1";

    case M_EP_TC_1:
        return "M_EP_TC_1";

    case M_PS_NA_1:
        return "M_PS_NA_1";

    case M_ME_ND_1:
        return "M_ME_ND_1";

    case M_SP_TB_1:
        return "M_SP_TB_1";

    case M_DP_TB_1:
        return "M_DP_TB_1";

    case M_ST_TB_1:
        return "M_ST_TB_1";

    case M_BO_TB_1:
        return "M_BO_TB_1";

    case M_ME_TD_1:
        return "M_ME_TD_1";

    case M_ME_TE_1:
        return "M_ME_TE_1";

    case M_ME_TF_1:
        return "M_ME_TF_1";

    case M_IT_TB_1:
        return "M_IT_TB_1";

    case M_EP_TD_1:
        return "M_EP_TD_1";

    case M_EP_TE_1:
        return "M_EP_TE_1";

    case M_EP_TF_1:
        return "M_EP_TF_1";

    case C_SC_NA_1:
        return "C_SC_NA_1";

    case C_DC_NA_1:
        return "C_DC_NA_1";

    case C_RC_NA_1:
        return "C_RC_NA_1";

    case C_SE_NA_1:
        return "C_SE_NA_1";

    case C_SE_NB_1:
        return "C_SE_NB_1";

    case C_SE_NC_1:
        return "C_SE_NC_1";

    case C_BO_NA_1:
        return "C_BO_NA_1";

    case C_SC_TA_1:
        return "C_SC_TA_1";

    case C_DC_TA_1:
        return "C_DC_TA_1";

    case C_RC_TA_1:
        return "C_RC_TA_1";

    case C_SE_TA_1:
        return "C_SE_TA_1";

    case C_SE_TB_1:
        return "C_SE_TB_1";

    case C_SE_TC_1:
        return "C_SE_TC_1";

    case C_BO_TA_1:
        return "C_BO_TA_1";

    case M_EI_NA_1:
        return "M_EI_NA_1";

    case C_IC_NA_1:
        return "C_IC_NA_1";

    case C_CI_NA_1:
        return "C_CI_NA_1";

    case C_RD_NA_1:
        return "C_RD_NA_1";

    case C_CS_NA_1:
        return "C_CS_NA_1";

    case C_TS_NA_1:
        return "C_TS_NA_1";

    case C_RP_NA_1:
        return "C_RP_NA_1";

    case C_CD_NA_1:
        return "C_CD_NA_1";

    case C_TS_TA_1:
        return "C_TS_TA_1";

    case P_ME_NA_1:
        return "P_ME_NA_1";

    case P_ME_NB_1:
        return "P_ME_NB_1";

    case P_ME_NC_1:
        return "P_ME_NC_1";

    case P_AC_NA_1:
        return "P_AC_NA_1";

    case F_FR_NA_1:
        return "F_FR_NA_1";

    case F_SR_NA_1:
        return "F_SR_NA_1";

    case F_SC_NA_1:
        return "F_SC_NA_1";

    case F_LS_NA_1:
        return "F_LS_NA_1";

    case F_AF_NA_1:
        return "F_AF_NA_1";

    case F_SG_NA_1:
        return "F_SG_NA_1";

    case F_DR_TA_1:
        return "F_DR_TA_1";

    case F_SC_NB_1:
        return "F_SC_NB_1";

    default:
        return "unknown";
    }
}

const char*
CS101_CauseOfTransmission_toString(int *data_flow, CS101_CauseOfTransmission self)
{
    switch (self) {

    case CS101_COT_PERIODIC:
        return "PERIODIC";
    case CS101_COT_BACKGROUND_SCAN:
        return "BACKGROUND_SCAN";
    case CS101_COT_SPONTANEOUS:
        return "SPONTANEOUS";
    case CS101_COT_INITIALIZED:
        return "INITIALIZED";
    case CS101_COT_REQUEST:
        return "REQUEST";
    case CS101_COT_ACTIVATION:
        return "ACTIVATION";
    case CS101_COT_ACTIVATION_CON:
        return "ACTIVATION_CON";
    case CS101_COT_DEACTIVATION:
        return "DEACTIVATION";
    case CS101_COT_DEACTIVATION_CON:
        return "DEACTIVATION_CON";
    case CS101_COT_ACTIVATION_TERMINATION:
        return "ACTIVATION_TERMINATION";
    case CS101_COT_RETURN_INFO_REMOTE:
        return "RETURN_INFO_REMOTE";
    case CS101_COT_RETURN_INFO_LOCAL:
        return "RETURN_INFO_LOCAL";
    case CS101_COT_FILE_TRANSFER:
        return "FILE_TRANSFER";
    case CS101_COT_AUTHENTICATION:
        return "AUTHENTICATION";
    case CS101_COT_MAINTENANCE_OF_AUTH_SESSION_KEY:
        return "MAINTENANCE_OF_AUTH_SESSION_KEY";
    case CS101_COT_MAINTENANCE_OF_USER_ROLE_AND_UPDATE_KEY:
        return "MAINTENANCE_OF_USER_ROLE_AND_UPDATE_KEY";
    case CS101_COT_INTERROGATED_BY_STATION:
        return "INTERROGATED_BY_STATION";
    case CS101_COT_INTERROGATED_BY_GROUP_1:
        return "INTERROGATED_BY_GROUP_1";
    case CS101_COT_INTERROGATED_BY_GROUP_2:
        return "INTERROGATED_BY_GROUP_2";
    case CS101_COT_INTERROGATED_BY_GROUP_3:
        return "INTERROGATED_BY_GROUP_3";
    case CS101_COT_INTERROGATED_BY_GROUP_4:
        return "INTERROGATED_BY_GROUP_4";
    case CS101_COT_INTERROGATED_BY_GROUP_5:
        return "INTERROGATED_BY_GROUP_5";
    case CS101_COT_INTERROGATED_BY_GROUP_6:
        return "INTERROGATED_BY_GROUP_6";
    case CS101_COT_INTERROGATED_BY_GROUP_7:
        return "INTERROGATED_BY_GROUP_7";
    case CS101_COT_INTERROGATED_BY_GROUP_8:
        return "INTERROGATED_BY_GROUP_8";
    case CS101_COT_INTERROGATED_BY_GROUP_9:
        return "INTERROGATED_BY_GROUP_9";
    case CS101_COT_INTERROGATED_BY_GROUP_10:
        return "INTERROGATED_BY_GROUP_10";
    case CS101_COT_INTERROGATED_BY_GROUP_11:
        return "INTERROGATED_BY_GROUP_11";
    case CS101_COT_INTERROGATED_BY_GROUP_12:
        return "INTERROGATED_BY_GROUP_12";
    case CS101_COT_INTERROGATED_BY_GROUP_13:
        return "INTERROGATED_BY_GROUP_13";
    case CS101_COT_INTERROGATED_BY_GROUP_14:
        return "INTERROGATED_BY_GROUP_14";
    case CS101_COT_INTERROGATED_BY_GROUP_15:
        return "INTERROGATED_BY_GROUP_15";
    case CS101_COT_INTERROGATED_BY_GROUP_16:
        return "INTERROGATED_BY_GROUP_16";
    case CS101_COT_REQUESTED_BY_GENERAL_COUNTER:
        return "REQUESTED_BY_GENERAL_COUNTER";
    case CS101_COT_REQUESTED_BY_GROUP_1_COUNTER:
        return "REQUESTED_BY_GROUP_1_COUNTER";
    case CS101_COT_REQUESTED_BY_GROUP_2_COUNTER:
        return "REQUESTED_BY_GROUP_2_COUNTER";
    case CS101_COT_REQUESTED_BY_GROUP_3_COUNTER:
        return "REQUESTED_BY_GROUP_3_COUNTER";
    case CS101_COT_REQUESTED_BY_GROUP_4_COUNTER:
        return "REQUESTED_BY_GROUP_4_COUNTER";
    case CS101_COT_UNKNOWN_TYPE_ID:
        return "UNKNOWN_TYPE_ID";
    case CS101_COT_UNKNOWN_COT:
        return "UNKNOWN_CAUSE_OF_TRANSMISSION";
    case CS101_COT_UNKNOWN_CA:
        return "UNKNOWN_COMMON_ADDRESS_OF_ASDU";
    case CS101_COT_UNKNOWN_IOA:
        return "UNKNOWN_INFORMATION_OBJECT_ADDRESS";
    default:
        return "UNKNOWN_COT";
    }
}
