/*
 * bluetooth.h
 *
 *  Created on: Nov 13, 2025
 *      Author: Bartek
 */

#ifndef INC_BLUETOOTH_H
#define INC_BLUETOOTH_H

#include "usart.h"

extern uint8_t rxData;

void initializeBluetoothConnection();
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);

#endif
