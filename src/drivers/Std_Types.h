#ifndef STD_TYPES_H
#define STD_TYPES_H

#include "Platform_Types.h"
#include "Compiler.h"

#define STD_TYPES_MODULE_ID
#define STD_TYPES_VENDOR_ID

#define STD_TYPES_SW_MAJOR_VERSION                   1U
#define STD_TYPES_SW_MINOR_VERSION                   0U
#define STD_TYPES_SW_PATCH_VERSION                   0U

#define STD_TYPES_AR_RELEASE_MAJOR_VERSION           21U
#define STD_TYPES_AR_RELEASE_MINOR_VERSION           11U
#define STD_TYPES_AR_RELEASE_PATCH_VERSION           0U

/* AUTOSAR checking between Platform_Types and Std_Types Modules */
#if ((COMPILER_AR_RELEASE_MAJOR_VERSION != STD_TYPES_AR_RELEASE_MAJOR_VERSION)\
 ||  (COMPILER_AR_RELEASE_MINOR_VERSION != STD_TYPES_AR_RELEASE_MINOR_VERSION)\
 ||  (COMPILER_AR_RELEASE_PATCH_VERSION != STD_TYPES_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Std_Types.h does not match the expected version"
#endif

/* AUTOSAR checking between Compiler and Std_Types Modules */
#if ((PLATFORM_AR_RELEASE_MAJOR_VERSION != STD_TYPES_AR_RELEASE_MAJOR_VERSION)\
 ||  (PLATFORM_AR_RELEASE_MINOR_VERSION != STD_TYPES_AR_RELEASE_MINOR_VERSION)\
 ||  (PLATFORM_AR_RELEASE_PATCH_VERSION != STD_TYPES_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Std_Types.h does not match the expected version"
#endif

#ifndef STATUSTYPEDEFINED
#define STATUSTYPEDEFINED
#define E_OK                            0x00U
typedef unsigned char StatusType; /* OSEK compliance */
#endif
#define E_NOT_OK                        0x01U
#define STD_HIGH                        0x01U /* Physical state 5V or 3.3V */
#define STD_LOW                         0x00U /* Physical state 0V */
#define STD_ACTIVE                      0x01U /* Logical state active */
#define STD_IDLE                        0x00U /* Logical state idle */
#define STD_ON                          0x01U
#define STD_OFF                         0x00U
#define STD_TRANSFORMER_UNSPECIFIED     0x00U
#define STD_TRANSFORMER_SERIALIZER      0x01U
#define STD_TRANSFORMER_SAFETY          0x02U
#define STD_TRANSFORMER_SECURITY        0x03U
#define STD_TRANSFORMER_CUSTOM          0xFFU
#define STD_MESSAGETYPE_REQUEST         0x00U
#define STD_MESSAGETYPE_RESPONSE        0x01U
#define STD_MESSAGERESULT_OK            0x00U
#define STD_MESSAGERESULT_ERROR         0x01U

typedef uint8 Std_ReturnType;
typedef uint8 Std_TransformerErrorCode;
typedef uint8 Std_TransformerClass;
typedef uint8 Std_TransformerForwardCode;
typedef uint8 Std_MessageTypeType;
typedef uint8 Std_MessageResultType;

typedef struct
{
    uint16 vendorId;
    uint16 moduleId;
    uint8 sw_major_version;
    uint8 sw_minor_version;
    uint8 sw_patch_version;
} Std_VersionInfoType;

typedef struct
{
    Std_TransformerErrorCode errorCode;
    Std_TransformerClass transformerClass;
} Std_TransformerError;

typedef Std_ReturnType (*Std_ExtractProtocolHeaderFieldsType)(
        const uint8 *buffer, uint32 bufferLength,
        Std_MessageTypeType *messageType, Std_MessageResultType *messageResult);

#endif
