#ifndef DET_H
#define DET_H

#define DET_VENDOR_ID    3000U
#define DET_MODULE_ID    120U

#define DET_SW_MAJOR_VERSION                   1U
#define DET_SW_MINOR_VERSION                   0U
#define DET_SW_PATCH_VERSION                   0U

#define DET_AR_RELEASE_MAJOR_VERSION           21U
#define DET_AR_RELEASE_MINOR_VERSION           11U
#define DET_AR_RELEASE_PATCH_VERSION           0U

#include "Std_Types.h"

/* AUTOSAR checking between Std_Types and Det Modules */
#if ((STD_TYPES_AR_RELEASE_MAJOR_VERSION != DET_AR_RELEASE_MAJOR_VERSION) || \
     (STD_TYPES_AR_RELEASE_MINOR_VERSION != DET_AR_RELEASE_MINOR_VERSION) || \
     (STD_TYPES_AR_RELEASE_PATCH_VERSION != DET_AR_RELEASE_PATCH_VERSION))
#error "The AR version of Std_Types.h does not match the expected version"
#endif

Std_ReturnType Det_ReportError(uint16 ModuleId, uint8 InstanceId, uint8 ApiId,
                               uint8 ErrorId);

#endif /* DET_H */
