#ifndef _BSP_LED_H
#define _BSP_LED_H

#include "stm32f1xx.h"

#define LED_R_ON      do{HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_RESET);}while(0); 
#define LED_R_OFF     do{HAL_GPIO_WritePin(GPIOB,GPIO_PIN_5,GPIO_PIN_SET);}while(0); 
#define LED_R_Toggle  do{HAL_GPIO_TogglePin(GPIOB,GPIO_PIN_5);}while(0);


void LED_GPIO_Init(void);


#endif

