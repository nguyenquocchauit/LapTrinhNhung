#include "main.h"
//#include "stm32f4xx_hal.h"
//uint16_t hieuungled[]={0xfffe,0xfffd,0xfffb,0xfff7,0xffef,0xffbf,0xff7f,0xfeff,0xfdff,0xfbff,0xf7ff,0xefff,0xdfff,0xbfff,0x7fff};
// Tao biên luu tru chân led
int hieuungled[]={0x0001,0x0002,0x0004,0x0008,0x0010,0x0020,0x0040,0x0080,0x0100,0x0200,0x0400,0x0800,0x1000,0x2000,0x4000,0x8000};
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
void SangHetLed();
void TatHetLed();
void SangXuoi();
void SangNguoc();
void NhapNhay();
int main(void)
{
  HAL_Init();
  SystemClock_Config();
  MX_GPIO_Init();
  while (1)
  {
		TatHetLed();
		HAL_Delay(10);
		SangHetLed();
		HAL_Delay(1000);
		TatHetLed();
		HAL_Delay(100);
		SangXuoi();
		HAL_Delay(1000);
		TatHetLed();
		HAL_Delay(1000);
		SangNguoc();
		HAL_Delay(1000);
		NhapNhay();
		HAL_Delay(1000);
  }
}
void SangXuoi()
{
	for ( int i=0;i<=15;i++)
	{
		// Sáng Led chân D tân tu và xuôi
		HAL_GPIO_TogglePin ( GPIOD, hieuungled[i]); 
		HAL_Delay(100);
	}
	for ( int i=0;i<=15;i++)
	{
		// Sáng Led chân E tân tu và xuôi
		HAL_GPIO_TogglePin ( GPIOE, hieuungled[i]); 
		HAL_Delay(100);
	}
}
void SangNguoc()
{
	for ( int i=15;i>=0;i--)
	{
		// Sáng Led chân E tân tu và nguoc
		HAL_GPIO_TogglePin ( GPIOE, hieuungled[i]); 
		HAL_Delay(100);
	}
	for ( int i=15;i>=0;i--)
	{
		// Sáng Led chân D tân tu và nguoc
		HAL_GPIO_TogglePin ( GPIOD, hieuungled[i]); 
		HAL_Delay(100);
	}
}
void NhapNhay()
{
	// Nháy led trong vòng 0.5s 
	for ( int i=0;i<=3;i++)
	{
		SangHetLed();
		HAL_Delay(500);
		TatHetLed();
	}
}
void SangHetLed()
{
	// SÁNG ÐÈN CÔNG D
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_0, GPIO_PIN_SET); 
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_1, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_2, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_3, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_4, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_5, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_6, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_7, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_8, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_9, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_10, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_11, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_12, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_13, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_14, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_15, GPIO_PIN_SET);
	// SANG ÐÈN CÔNG E
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_0, GPIO_PIN_SET); 
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_1, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_2, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_3, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_4, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_5, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_6, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_7, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_8, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_9, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_10, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_11, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_12, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_13, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_14, GPIO_PIN_SET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_15, GPIO_PIN_SET);
}
void TatHetLed()
{
	// TAT ÐÈN CÔNG D
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_0, GPIO_PIN_RESET); 
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_1, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_2, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_3, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_4, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_5, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_6, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_7, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_8, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_9, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_10, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_11, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_12, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_13, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_14, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOD, GPIO_PIN_15, GPIO_PIN_RESET);
	// TAT ÐÈN CÔNG E
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_0, GPIO_PIN_RESET); 
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_1, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_2, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_3, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_4, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_5, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_6, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_7, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_8, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_9, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_10, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_11, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_12, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_13, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_14, GPIO_PIN_RESET);
	HAL_GPIO_WritePin ( GPIOE, GPIO_PIN_15, GPIO_PIN_RESET);
}
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE2);
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSE;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;
  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
  __HAL_RCC_GPIOE_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();
  HAL_GPIO_WritePin(GPIOE, GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5
                          |GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9
                          |GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13
                          |GPIO_PIN_14|GPIO_PIN_15|GPIO_PIN_0|GPIO_PIN_1, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOD, GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11
                          |GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15
                          |GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7, GPIO_PIN_SET);
  GPIO_InitStruct.Pin = GPIO_PIN_2|GPIO_PIN_3|GPIO_PIN_4|GPIO_PIN_5
                          |GPIO_PIN_6|GPIO_PIN_7|GPIO_PIN_8|GPIO_PIN_9
                          |GPIO_PIN_10|GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13
                          |GPIO_PIN_14|GPIO_PIN_15|GPIO_PIN_0|GPIO_PIN_1;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);
  GPIO_InitStruct.Pin = GPIO_PIN_8|GPIO_PIN_9|GPIO_PIN_10|GPIO_PIN_11
                          |GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_14|GPIO_PIN_15
                          |GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

}
void Error_Handler(void)
{
  
  __disable_irq();
  while (1)
  {
  }
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
