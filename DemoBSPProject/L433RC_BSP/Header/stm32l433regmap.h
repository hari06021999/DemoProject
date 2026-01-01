/*
 * stm32l433regmap.h
 *
 *  Created on: 01-Jan-2026
 *      Author: hariharanmagendiran
 */

#ifndef L433RC_BSP_HEADER_STM32L433REGMAP_H_
#define L433RC_BSP_HEADER_STM32L433REGMAP_H_

#include "demohaltypes.h"


/**************************Reset Clock Control Register MAP **************************/

typedef struct {
	IO T_UINT32 RCC_CR;
	IO T_UINT32 RCC_ICSCR;
	IO T_UINT32 RCC_CFGR;
	IO T_UINT32 RCC_PLLCFGR;
	IO T_UINT32 RCC_PLLSAI1CFGR;
	IO T_UINT32 Reserved1;
	IO T_UINT32 RCC_CIER;
	IO T_UINT32 RCC_CIFR;
	IO T_UINT32 RCC_CICR;
	IO T_UINT32 Reserved2;
	IO T_UINT32 RCC_AHB1RSTR;
	IO T_UINT32 RCC_AHB2RSTR;
	IO T_UINT32 RCC_AHB3RSTR;
	IO T_UINT32 Reserved3;
	IO T_UINT32 RCC_APB1RSTR1;
	IO T_UINT32 RCC_APB1RSTR2;
	IO T_UINT32 RCC_APB2RSTR;
	IO T_UINT32 Reserved4;
	IO T_UINT32 RCC_AHB1ENR;
	IO T_UINT32 RCC_AHB2ENR;
	IO T_UINT32 RCC_AHB3ENR;
	IO T_UINT32 Reserved5;
	IO T_UINT32 RCC_APB1ENR1;
	IO T_UINT32 RCC_APB1ENR2;
	IO T_UINT32 RCC_APB2ENR;
	IO T_UINT32 Reserved6;
	IO T_UINT32 RCC_AHB1SMENR;
	IO T_UINT32 RCC_AHB2SMENR;
	IO T_UINT32 RCC_AHB3SMENR;
	IO T_UINT32 Reserved7;
	IO T_UINT32 RCC_APB1SMENR1;
	IO T_UINT32 RCC_APB1SMENR2;
	IO T_UINT32 RCC_APB2SMENR;
	IO T_UINT32 Reserved8;
	IO T_UINT32 RCC_CCIPR;
	IO T_UINT32 RCC_BDCR;
	IO T_UINT32 RCC_CSR;
	IO T_UINT32 RCC_CRRCR;
	IO T_UINT32 RCC_CRRCR2;
}T_RCC_Typedef;


#define M_RCC_REG				((T_RCC_Typedef*)0x40021000);


/**************************System Configuration Controller****************************/

typedef struct {
	IO T_UINT32 SYSCFG_MEMRMP;
	IO T_UINT32 SYSCFG_CFGR1;
	IO T_UINT32 SYSCFG_EXTICR1;
	IO T_UINT32 SYSCFG_EXTICR2;
	IO T_UINT32 SYSCFG_EXTICR3;
	IO T_UINT32 SYSCFG_EXTICR4;
	IO T_UINT32 SYSCFG_SCSR;
	IO T_UINT32 SYSCFG_CFGR2;
	IO T_UINT32 SYSCFG_SWPR;
	IO T_UINT32 SYSCFG_SKR;

}T_SYSCFG_Typdef;

#define M_SYSCFG_REG			((T_SYSCFG_Typdef*)0x40010000)

/**************************GPIO Driver Register MAP***********************************/

typedef struct {
	IO T_UINT32 GPIO_MODER;
	IO T_UINT32 GPIO_OTYPER;
	IO T_UINT32 GPIO_OSPEEDR;
	IO T_UINT32 GPIO_PUPDR;
	IOR T_UINT32 GPIO_IDR;
	IO T_UINT32 GPIO_ODR;
	IO T_UINT32 GPIO_BSRR;
	IO T_UINT32 GPIO_LCKR;
	IO T_UINT32 GPIO_AFRL;
	IO T_UINT32 GPIO_AFRH;
	IO T_UINT32 GPIO_BRR;
}T_GPIO_Typdef;

#define M_GPIOA_REG				((T_GPIO_Typdef*)0x48000000)
#define M_GPIOB_REG				((T_GPIO_Typdef*)0x48000400)
#define M_GPIOC_REG				((T_GPIO_Typdef*)0x48000800)
#define M_GPIOD_REG				((T_GPIO_Typdef*)0x48000C00)
#define M_GPIOE_REG				((T_GPIO_Typdef*)0x48001000)
#define M_GPIOF_REG				((T_GPIO_Typdef*)0x48001400) /* Reserved GPIOF Port*/
#define M_GPIOG_REG				((T_GPIO_Typdef*)0x48001800) /* Reserved GPIOG Port*/
#define M_GPIOH_REG				((T_GPIO_Typdef*)0x48001C00)

/**************************EXTI Interrupt Register MAP*********************************/

typedef struct {
	IO T_UINT32 EXTI_IMR1;
	IO T_UINT32 EXTI_EMR1;
	IO T_UINT32 EXTI_RTSR1;
	IO T_UINT32 EXTI_FTSR1;
	IO T_UINT32 EXTI_SWIER1;
	IO T_UINT32 EXTI_PR1;
	IO T_UINT32 Reserved[M_TWO];
	IO T_UINT32 EXTI_IMR2;
	IO T_UINT32 EXTI_EMR2;
	IO T_UINT32 EXTI_RTSR2;
	IO T_UINT32 EXTI_FTSR2;
	IO T_UINT32 EXTI_SWIER2;
	IO T_UINT32 EXTI_PR2;
}T_EXTI_Typedef;

#define M_EXTI_REG				((T_EXTI_Typedef*)0x40010400)

/**************************UART Driver Register MAP***********************************/

typedef struct {
	IO T_UINT32 UART_CR1;
	IO T_UINT32 UART_CR2;
	IO T_UINT32 UART_CR3;
	IO T_UINT32 UART_BRR;
	IO T_UINT32 UART_GTPR;
	IO T_UINT32 UART_RTOR;
	IO T_UINT32 UART_RQR;
	IO T_UINT32 UART_ISR;
	IO T_UINT32 UART_ICR;
	IO T_UINT32 UART_RDR;
	IO T_UINT32 UART_TDR;
}T_UART_Typedef;


#define M_UART1_REG				((T_UART_Typedef*)0x40013800)
#define M_UART2_REG				((T_UART_Typedef*)0x40004400)
#define M_UART3_REG				((T_UART_Typedef*)0x40004800)

/**************************I2C Driver Register MAP************************************/

typedef struct {
	IO T_UINT32 I2C_CR1;
	IO T_UINT32 I2C_CR2;
	IO T_UINT32 I2C_OAR1;
	IO T_UINT32 I2C_OAR2;
	IO T_UINT32 I2C_TIMINGR;
	IO T_UINT32 I2C_TIMEOUTR;
	IO T_UINT32 I2C_ISR;
	IO T_UINT32 I2C_ICR;
	IO T_UINT32 I2C_PECR;
	IO T_UINT32 I2C_RXDR;
	IO T_UINT32 I2C_TXDR;
}T_I2C_Typedef;


#define M_I2C1_REG				((T_I2C_Typedef*)0x40005400)
#define M_I2C2_REG				((T_I2C_Typedef*)0x40005800)
#define M_I2C3_REG				((T_I2C_Typedef*)0x40005C00)
#define M_I2C4_REG				((T_I2C_Typedef*)0x40008000)


/**************************SPI Driver Register MAP************************************/

typedef struct {
	IO T_UINT32 SPI_CR1;
	IO T_UINT32 SPI_CR2;
	IO T_UINT32 SPI_SR;
	IO T_UINT32 SPI_DR;
	IO T_UINT32 SPI_CRCPR;
	IO T_UINT32 SPI_RXCRCPR;
	IO T_UINT32 SPI_TXCRCPR;
}T_SPI_Typedef;


#define M_SPI1_REG				((T_SPI_Typedef*)0x40013000)
#define M_SPI2_REG				((T_SPI_Typedef*)0x40003800)
#define M_SPI3_REG				((T_SPI_Typedef*)0x40003C00)


/**************************Independent WWDG Driver Register MAP***********************/

typedef struct {
	IO T_UINT32 IWDG_KR;
	IO T_UINT32 IWDG_PR;
	IO T_UINT32 IWDG_RLR;
	IO T_UINT32 IWDG_SR;
	IO T_UINT32 IWDG_WINR;
}T_IWDG_Typedef;


#define M_IWDG_REG				((T_IWDG_Typedef*)0x40003000)

/**************************System Window WWDG Driver Register MAP***********************/

typedef struct {
	IO T_UINT32 WWDG_CR;
	IO T_UINT32 WWDG_CFR;
	IO T_UINT32 WWDG_SR;
}T_WWDG_Typedef;


#define M_WWDG_REG				((T_WWDG_Typedef*)0x40002C00)


/**************************QSPI Driver Register MAP************************************/

typedef struct {
	IO T_UINT32 QSPI_CR1;
	IO T_UINT32 QSPI_DCR;
	IO T_UINT32 QSPI_SR;
	IO T_UINT32 QSPI_FCR;
	IO T_UINT32 QSPI_DLR;
	IO T_UINT32 QSPI_CCR;
	IO T_UINT32 QSPI_AR;
	IO T_UINT32 QSPI_ABR;
	IO T_UINT32 QSPI_DR;
	IO T_UINT32 QSPI_PSMKR;
	IO T_UINT32 QSPI_PSMAR;
	IO T_UINT32 QSPI_PIR;
	IO T_UINT32 QSPI_LPTR;
}T_QSPI_Typedef;


#define M_QSPI_REG				((T_QSPI_Typedef*)0xA0001000)

#endif /* L433RC_BSP_HEADER_STM32L433REGMAP_H_ */
