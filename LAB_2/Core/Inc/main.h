/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define ENM0 GPIO_PIN_2
#define ENM1 GPIO_PIN_3

#define DOT GPIO_PIN_4
#define DOT_PORT GPIOA
#define RED_LED_Pin GPIO_PIN_5
#define RED_LED_GPIO_Port GPIOA
#define EN0 GPIO_PIN_6
#define EN0_GPIO_Port GPIOA
#define EN1 GPIO_PIN_7
#define EN1_GPIO_Port GPIOA
#define EN2 GPIO_PIN_8
#define EN2_GPIO_Port GPIOA
#define EN3 GPIO_PIN_9
#define EN3_GPIO_Port GPIOA

#define ENM2 GPIO_PIN_10
#define ENM3 GPIO_PIN_11
#define ENM4 GPIO_PIN_12
#define ENM5 GPIO_PIN_13
#define ENM6 GPIO_PIN_14
#define ENM7 GPIO_PIN_15

#define SEG_a GPIO_PIN_0
#define SEG_b GPIO_PIN_1
#define SEG_c GPIO_PIN_2
#define SEG_d GPIO_PIN_3
#define SEG_e GPIO_PIN_4
#define SEG_f GPIO_PIN_5
#define SEG_g GPIO_PIN_6

#define ROW0 GPIO_PIN_8
#define ROW1 GPIO_PIN_9
#define ROW2 GPIO_PIN_10
#define ROW3 GPIO_PIN_11
#define ROW4 GPIO_PIN_12
#define ROW5 GPIO_PIN_13
#define ROW6 GPIO_PIN_14
#define ROW7 GPIO_PIN_15
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
