#ifndef PLATFORM_TYPES_H
#define PLATFORM_TYPES_H

#define PLATFORM_MODULE_ID
#define PLATFORM_VENDOR_ID

#define PLATFORM_SW_MAJOR_VERSION                   1U
#define PLATFORM_SW_MINOR_VERSION                   0U
#define PLATFORM_SW_PATCH_VERSION                   0U

#define PLATFORM_AR_RELEASE_MAJOR_VERSION           21U
#define PLATFORM_AR_RELEASE_MINOR_VERSION           11U
#define PLATFORM_AR_RELEASE_PATCH_VERSION           0U

#ifndef FALSE
#define FALSE       0U
#endif
#ifndef TRUE
#define TRUE        1U
#endif

#define CPU_TYPE_8 8
#define CPU_TYPE_16 16
#define CPU_TYPE_32 32
#define CPU_TYPE_64 64
#define MSB_FIRST 0
#define LSB_FIRST 1
#define HIGH_BYTE_FIRST 0
#define LOW_BYTE_FIRST 1

#define CPU_TYPE        CPU_TYPE_32
#define CPU_BIT_ORDER   LSB_FIRST
#define CPU_BYTE_ORDER  LOW_BYTE_FIRST

typedef unsigned char boolean;
typedef unsigned char uint8; /*         0 .. 255             */
typedef signed char sint8; /*           -128 .. +127            */
typedef unsigned short uint16; /*       0 .. 65535           */
typedef signed short sint16; /*      -32768 .. +32767          */
typedef unsigned long uint32; /*        0 .. 4294967295      */
typedef signed long sint32; /* -2147483648 .. +2147483647     */
typedef unsigned long long uint64; /*   0..18446744073709551615  */
typedef signed long long sint64; /* -9223372036854775808 .. 9223372036854775807 */
typedef float float32;
typedef double float64;
typedef unsigned long uint8_least;
typedef signed long sint8_least;
typedef unsigned long uint16_least;
typedef signed long sint16_least;
typedef unsigned long uint32_least;
typedef signed long sint32_least;
typedef void* voidPtr;
typedef const void* constVoidPtr;

#endif
