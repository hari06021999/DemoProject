/*
 * gpiodrv.c
 *
 *  Created on: 01-Jan-2026
 *      Author: hariharanmagendiran
 */


#include "gpiodrv.h"

void GpioInit (T_GPIO_Typdef *GPIO, T_GPIO_INIT gpio_details)
{
	T_UINT32 portnumber;

	/*RCC Clock Enable Respective Port */
	portnumber = M_GPIO_RCCBIT(GPIO);

	if(portnumber)
	{

	}

}
void GpioWritePin (T_GPIO_Typdef *GPIO, T_UINT32 gpio_pinumber, T_GPIO_PIN_STATE gpio_pinstate)
{

}
T_UINT32 GpioReadPin (T_GPIO_Typdef *GPIO, T_UINT32 gpio_pinumber)
{
   return 0;
}
void GpioTogglePin (T_GPIO_Typdef *GPIO, T_UINT32 gpio_pinumber)
{

}
void GpioDeInit (T_GPIO_Typdef *GPIO)
{

}
