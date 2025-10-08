#include "main.h"
#include "FreeRTOS.h"
#include "tim.h"

void led_task(void const * argument)
{
    HAL_TIM_PWM_Start(&htim5, TIM_CHANNEL_1);
    HAL_TIM_PWM_Start(&htim5, TIM_CHANNEL_2);
    HAL_TIM_PWM_Start(&htim5, TIM_CHANNEL_3);
    while(1)
    {
        for (int i = 0; i < 100; i++){
            __HAL_TIM_SET_COMPARE(&htim5, TIM_CHANNEL_1, i);
            vTaskDelay(10);
        }
        for (int i = 99; i >=0; i--){
            __HAL_TIM_SET_COMPARE(&htim5, TIM_CHANNEL_1, i);
            vTaskDelay(10);
        }
        for (int i = 0; i < 100; i++){
            __HAL_TIM_SET_COMPARE(&htim5, TIM_CHANNEL_2, i);
            vTaskDelay(10);
        }
        for (int i = 99; i >=0; i--){
            __HAL_TIM_SET_COMPARE(&htim5, TIM_CHANNEL_2, i);
            vTaskDelay(10);
        }for (int i = 0; i < 100; i++){
            __HAL_TIM_SET_COMPARE(&htim5, TIM_CHANNEL_3, i);
            vTaskDelay(10);
        }
        for (int i = 99; i >=0; i--){
            __HAL_TIM_SET_COMPARE(&htim5, TIM_CHANNEL_3, i);
            vTaskDelay(10);
        }
    }

}