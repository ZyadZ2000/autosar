#ifndef COMPILER_H
#define COMPILER_H

#include "Compiler_Cfg.h"

#define _TEXAS_INSTRUMENTS_C_ARM_

#define COMPILER_MODULE_ID
#define COMPILER_VENDOR_ID
#define COMPILER_SW_MAJOR_VERSION                   1U
#define COMPILER_SW_MINOR_VERSION                   0U
#define COMPILER_SW_PATCH_VERSION                   0U

#define COMPILER_AR_RELEASE_MAJOR_VERSION           21U
#define COMPILER_AR_RELEASE_MINOR_VERSION           11U
#define COMPILER_AR_RELEASE_PATCH_VERSION           0U

/* AUTOSAR checking between Compiler_Cfg and Compiler Modules */
#if ((COMPILER_CFG_AR_RELEASE_MAJOR_VERSION != COMPILER_AR_RELEASE_MAJOR_VERSION)\
 ||  (COMPILER_CFG_AR_RELEASE_MINOR_VERSION != COMPILER_AR_RELEASE_MINOR_VERSION)\
 ||  (COMPILER_CFG_AR_RELEASE_PATCH_VERSION != COMPILER_AR_RELEASE_PATCH_VERSION))
  #error "The AR version of Std_Types.h does not match the expected version"
#endif

#define AUTOMATIC
#define NULL_PTR                                                ((void*)0)
#define TYPEDEF
#define STATIC                                                  static
#define INLINE                                                  inline
#define LOCAL_INLINE                                            static inline
#define FUNC(rettype, memclass)                                 rettype
#define FUNC_P2CONST(rettype, ptrclass, memclass)               const rettype *
#define FUNC_P2VAR(rettype, ptrclass, memclass)                 rettype *
#define P2VAR(ptrtype, memclass, ptrclass)                      ptrtype *
#define P2CONST(ptrtype, memclass, ptrclass)                    const ptrtype *
#define CONSTP2VAR (ptrtype, memclass, ptrclass)                ptrtype * const
#define CONSTP2CONST (ptrtype, memclass, ptrclass)              const ptrtype * const
#define P2FUNC(rettype, ptrclass, fctname)                      rettype (*fctname)
#define CONSTP2FUNC(rettype, ptrclass, fctname)                 rettype (* const fctname)
#define CONST(type, memclass)                                   const type
#define VAR(type, memclass)                                     type

#endif
