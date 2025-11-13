/*
 * bluetooth.c
 *
 *  Created on: Nov 13, 2025
 *      Author: Bartek
 */


#include "bluetooth.h"
#include "gpio.h"

uint8_t rxData;

void initializeBluetoothConnection() {
	HAL_UART_Receive_IT(&huart1, &rxData, 1);
}

void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart) {
	if(huart->Instance == USART1) {
		if(rxData == 79) {
			HAL_GPIO_WritePin(DEBUG_LED_GPIO_Port, DEBUG_LED_Pin, GPIO_PIN_SET);
		} else if(rxData == 88) {
			HAL_GPIO_WritePin(DEBUG_LED_GPIO_Port, DEBUG_LED_Pin, GPIO_PIN_RESET);
		}

		HAL_UART_Receive_IT(&huart1, &rxData, 1);
	}
}
