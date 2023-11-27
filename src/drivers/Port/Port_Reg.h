#ifndef PORT_REG_H
#define PORT_REG_H

#include "Std_Types.h"

/* Ports Clock Register */
#define PORT_SYSCTL_RCGCGPIO_R       (*((volatile uint32*)0x400FE608))
/*
 * Registers Base
 * */
#define PORT_A_BASE_REG     ((volatile uint32 *)0x40004000)
#define PORT_B_BASE_REG     ((volatile uint32 *)0x40005000)
#define PORT_C_BASE_REG     ((volatile uint32 *)0x40006000)
#define PORT_D_BASE_REG     ((volatile uint32 *)0x40007000)
#define PORT_E_BASE_REG     ((volatile uint32 *)0x40024000)
#define PORT_F_BASE_REG     ((volatile uint32 *)0x40025000)

/*
 * Register Offsets
 * */
#define PORT_DATA_OFFSET    0x000U
#define PORT_DIR_OFFSET     0x400U
#define PORT_AFSEL_OFFSET   0x420U
#define PORT_DR2R_OFFSET    0x500U
#define PORT_DR4R_OFFSET    0x504U
#define PORT_DR8R_OFFSET    0x508U
#define PORT_ODR_OFFSET     0x50CU
#define PORT_PUR_OFFSET     0x510U
#define PORT_PDR_OFFSET     0x514U
#define PORT_SLR_OFFSET     0x518U
#define PORT_DEN_OFFSET     0x51CU
#define PORT_LOCK_OFFSET    0x520U
#define PORT_CR_OFFSET      0x524U
#define PORT_AMSEL_OFFSET   0x528U
#define PORT_PCTL_OFFSET    0x52CU

#endif
