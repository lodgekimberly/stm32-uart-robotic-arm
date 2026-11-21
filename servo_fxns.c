/*
 * servo_fxns.c
 *
 *  Created on: Nov 20, 2026
 *      Author: lodgekimberly
 */


#include "servo_fxns.h"

extern TIM_HandleTypeDef htim3;
extern TIM_HandleTypeDef htim16;


void rotate(char comand){
	//TIM_HandleTypeDef *timer;
	//uint32_t channel;
	//uint32_t pulse_width;
	TIM_HandleTypeDef timer;
	uint32_t timerChannel;
	uint32_t PWMWidth;

	if (comand == 'a'){
		timer = htim3;
		timerChannel = TIM_CHANNEL_2;
		PWMWidth = 2000;
	}
	else if(comand == 'b'){
		timer = htim3;
		timerChannel = TIM_CHANNEL_2;
		PWMWidth = 500;
	}

	else if(comand == 'c'){
		timer = htim3;
		timerChannel = TIM_CHANNEL_3;
		PWMWidth = 2000;
	}
	else if(comand == 'd'){
		timer = htim3;
		timerChannel = TIM_CHANNEL_3;
		PWMWidth = 500;
	}

	else if(comand == 'e'){
		timer = htim3;
		timerChannel = TIM_CHANNEL_4;
		PWMWidth = 2000;
	}
	else if(comand == 'f'){
		timer = htim3;
		timerChannel = TIM_CHANNEL_4;
		PWMWidth = 500;
	}

	else if(comand == 'g'){
		timer = htim16;
		timerChannel = TIM_CHANNEL_1;
		PWMWidth = 2000;
	}
	else if(comand == 'h'){
		timer = htim16;
		timerChannel = TIM_CHANNEL_1;
		PWMWidth = 500;
	}

	HAL_TIM_PWM_Start(&timer, timerChannel);
	__HAL_TIM_SET_COMPARE( &timer, timerChannel, PWMWidth);
	HAL_Delay(1000);
	HAL_TIM_PWM_Stop(&timer, timerChannel);


}

