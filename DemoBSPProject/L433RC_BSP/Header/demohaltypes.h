/*
 * demohaltypes.h
 *
 *  Created on: 01-Jan-2026
 *      Author: hariharanmagendiran
 */

#ifndef L433RC_BSP_HEADER_DEMOHALTYPES_H_
#define L433RC_BSP_HEADER_DEMOHALTYPES_H_

#include "democommonmacro.h"




typedef unsigned long long int T_UINT64;
typedef signed long long int   T_SINT64;

typedef unsigned int	T_UINT32;
typedef signed int		T_SINT32;
typedef unsigned short int	T_UINT16;
typedef signed short int	T_SINT16;
typedef unsigned char	T_UINT8;
typedef signed char		T_SINT8;

typedef float   T_SFLOAT32;  // Signed 32-bit float
typedef double  T_SFLOAT64;  // Signed 64-bit double


typedef enum {
	E_OK,
	E_NOK
}T_Return_status;

#endif /* L433RC_BSP_HEADER_DEMOHALTYPES_H_ */
