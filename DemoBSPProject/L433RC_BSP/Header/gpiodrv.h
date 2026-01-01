/*
 * gpiodrv.h
 *
 *  Created on: 01-Jan-2026
 *      Author: hariharanmagendiran
 */

#ifndef L433RC_BSP_HEADER_GPIODRV_H_
#define L433RC_BSP_HEADER_GPIODRV_H_

#include "stm32l433regmap.h"


typedef struct {
	T_UINT32 Mode;
	T_UINT32 PushPull;
	T_UINT32 OutputSpeed;
	T_UINT32 PuPd;
}T_GPIO_INIT;

typedef enum {
	GPIO_RESET = M_ZERO,
	GPIO_SET
}T_GPIO_PIN_STATE;

/**********************GPIO MODE Macro*******************/

#define M_GPIO_INPUT_MODE		(0x0U)
#define M_GPIO_OUTPUT_MODE		(0x1U)
#define M_GPIO_ALTERNATE_MODE	(0x2U)
#define M_GPIO_ANALOG_MODE		(0x3U)

/**********************GPIO Output Type*******************/

#define M_GPIO_PUSHPULL			(0x0U)
#define M_GPIO_OPENDRAIN		(0x1U)

/**********************GPIO Output Speed*******************/

#define M_GPIO_LOWSPEED			(0x0U)
#define M_GPIO_MEDIUMSPEED		(0x1U)
#define M_GPIO_HIGHSPEED		(0x2U)
#define M_GPIO_VERY_HIGHSPEED	(0x3U)

/**********************GPIO Pull up/down*******************/

#define M_GPIO_NO_PUPD			(0x0U)
#define M_GPIO_PULLUP			(0x1U)
#define M_GPIO_PULLDOWN			(0x2U)

/**********************GPIO Port bit reset*****************/

#define M_GPIO_BIT_RESET		(0x1U)

/**********************GPIO Alternate mode*****************/

typedef enum {
	GPIO_AF0 = M_ZERO,
	GPIO_AF1,
	GPIO_AF2,
	GPIO_AF3,
	GPIO_AF4,
	GPIO_AF5,
	GPIO_AF6,
	GPIO_AF7,
	GPIO_AF8,
	GPIO_AF9,
	GPIO_AF10,
	GPIO_AF11,
	GPIO_AF12,
	GPIO_AF13,
	GPIO_AF14,
	GPIO_AF15
}T_GPIO_Mode;


#define M_GPIO_RCCBIT(GPIO) (GPIO == M_GPIOA_REG ? M_ZERO :\
							 GPIO == M_GPIOB_REG ? M_ONE : \
							 GPIO == M_GPIOC_REG ? M_TWO  :\
							 GPIO == M_GPIOD_REG ? M_THREE:  \
							 GPIO == M_GPIOE_REG ? M_FOUR : \
							 GPIO == M_GPIOH_REG ? M_SEVEN : -1  \
		)

/**********************GPIO Function Prototype*****************/

void GpioInit (T_GPIO_Typdef *GPIO, T_GPIO_INIT gpio_details);
void GpioWritePin (T_GPIO_Typdef *GPIO, T_UINT32 gpio_pinumber, T_GPIO_PIN_STATE gpio_pinstate);
T_UINT32 GpioReadPin (T_GPIO_Typdef *GPIO, T_UINT32 gpio_pinumber);
void GpioTogglePin (T_GPIO_Typdef *GPIO, T_UINT32 gpio_pinumber);
void GpioDeInit (T_GPIO_Typdef *GPIO);



#endif /* L433RC_BSP_HEADER_GPIODRV_H_ */
