#include "main.h"
#include "FreeRTOS.h"
#include "tim.h"

void servo_task(void const * argument)
{
    HAL_TIM_PWM_Start(&htim8, TIM_CHANNEL_2);
    
    for (int i = 1; i <= 5; i++) { 
        int out = i * 500;
         __HAL_TIM_SET_COMPARE(&htim8, TIM_CHANNEL_2, out);
        osDelay(1000);
    }
}