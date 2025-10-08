/*
 * servo.h
 *
 *  Created on: Oct 8, 2025
 *      Author: Bartek
 */

#ifndef INC_SERVO_H_
#define INC_SERVO_H_

#define SERVO_MIN 550
#define SERVO_MAX 2430
#define ANGLE_MIN 0
#define ANGLE_MAX 180

typedef struct {
	TIM_HandleTypeDef *htim;
	uint32_t channel;
} Servo;

void servoInit(Servo *servo, TIM_HandleTypeDef *_htim, uint32_t _channel);
void servoSetAngle(Servo *servo, uint16_t angle);

#endif /* INC_SERVO_H_ */
