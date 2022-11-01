/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/
#include "Arduino.h"
#include "Pins_arduino.h"

#if defined(__NUC240__)
#ifdef USE_BoardToPin
BoardToPin BoardToPinInfo[] = {
//IcPinNo Hw Type GrupNo // arduino Pin Id Bord number
	{ 17, UART_TYPE, 0}, // 0: PB0(UART_RX0)
    { 18, UART_TYPE, 0}, // 1: PB1(UART_TX0)
	{ 21, GPIO_TYPE, 0}, // 2: PC3
	{ 22, GPIO_TYPE, 0}, // 3: PC2
	{ 23, GPIO_TYPE, 0}, // 4: PC0
	{ 24, GPIO_TYPE, 0}, // 5: PC1
	{ 28, PWM_TYPE, 0},  // 6: PA12(PWM0)
    { 27, PWM_TYPE, 1},  // 7: PA13(PWM1)
    { 26, PWM_TYPE, 2},  // 8: PA14(PWM2)
    { 25, PWM_TYPE, 3},  // 9: PA15(PWM3)
	
	{ 32, ADC_TYPE, 0}, //10: PA0(ADC0)
    { 33, ADC_TYPE, 1}, //11: PA1(ADC1)
    { 34, ADC_TYPE, 2}, //12: PA2(ADC2)
    { 35, ADC_TYPE, 3}, //13: PA3(ADC3)
    { 36, ADC_TYPE, 4}, //14: PA4(ADC4)
    { 37, ADC_TYPE, 5}, //15: PA5(ADC5)
    { 38, ADC_TYPE, 6}, //16: PA6(ADC6)
	
	{ 19, CAN_TYPE, 0}, //17: PD6(CAN_RX)
    { 20, CAN_TYPE, 0}, //18: PD7(CAN_TX)
	{  4, CAN_TYPE, 1}, //19: PA11(CAN_RX)
    {  5, CAN_TYPE, 1}, //20: PA12(CAN_TX)
	
	{ 4, I2C_TYPE, 1}, //21: PA11(I21_SCL)
	{ 5, I2C_TYPE, 1}, //22: PA10(I21_SDA)
 	{ 6, I2C_TYPE, 0}, //23: PA9(I2C0_SCL)
    { 7, I2C_TYPE, 0}, //24: PA8(I2C0_SDA)
  
	{ 24, SPI_TYPE, 0}, //25: PD4(SPI0_SS0)
    { 23, SPI_TYPE, 0}, //26: PD1(SPI0_CLK)
	{ 22, SPI_TYPE, 0}, //27: PD2(SPI0_MISO)
    { 21, SPI_TYPE, 0}, //28: PD3(SPI0_MOSI)
	
	{ 8, UART_TYPE, 1}, //29: PB4(UART_TX1)
    { 9, UART_TYPE, 1}, //30: PB5(UART_RX1)
	
	{ 4, GPIO_TYPE, 0}, //31: PA11(Led)
   
};
#endif //USE_BoardToPin
GPIOPinDescription GPIO_Desc[] =
{
	{NULL, NULL, {NULL, NULL, NULL, NULL, NULL, NULL}}, //0
	{NULL, NULL, {NULL, NULL, NULL, NULL, NULL, NULL}}, //1
	{NULL, NULL, {NULL, NULL, NULL, NULL, NULL, NULL}}, //2
	{NULL, NULL, {NULL, NULL, NULL, NULL, NULL, NULL}}, //3
	{PA, BIT11, {(uint32_t) &SYS->GPA_MFP, SYS_GPA_MFP_PA11_Msk, SYS_ALT_MFP_PA11_Msk, NULL,                  NULL,                 SYS_GPA_MFP_PA11_GPIO}}, //4
	{PA, BIT10, {(uint32_t) &SYS->GPA_MFP, SYS_GPA_MFP_PA10_Msk, SYS_ALT_MFP_PA10_Msk, NULL,                  NULL,                 SYS_GPA_MFP_PA10_GPIO}}, //5
    {PA, BIT9,  {(uint32_t) &SYS->GPA_MFP, SYS_GPA_MFP_PA9_Msk, NULL,                 NULL,                   NULL,                 SYS_GPA_MFP_PA9_GPIO }}, //6
    {PA, BIT8,  {(uint32_t) &SYS->GPA_MFP, SYS_GPA_MFP_PA8_Msk, NULL,                 NULL,                   NULL,                 SYS_GPA_MFP_PA8_GPIO }}, //7
    {PB, BIT4,  {(uint32_t) &SYS->GPB_MFP, SYS_GPB_MFP_PB4_Msk, NULL,                 NULL,                   NULL,                 SYS_GPB_MFP_PB4_GPIO }}, //8
    {PB, BIT5,  {(uint32_t) &SYS->GPB_MFP, SYS_GPB_MFP_PB5_Msk, NULL,                 NULL,                   NULL,                 SYS_GPB_MFP_PB5_GPIO }}, //9
   	{NULL, NULL, {NULL, NULL, NULL, NULL, NULL, NULL}}, //10
	{NULL, NULL, {NULL, NULL, NULL, NULL, NULL, NULL}}, //11
	{NULL, NULL, {NULL, NULL, NULL, NULL, NULL, NULL}}, //12
	{NULL, NULL, {NULL, NULL, NULL, NULL, NULL, NULL}}, //13
    {NULL, NULL, {NULL, NULL, NULL, NULL, NULL, NULL}}, //14
    {NULL, NULL, {NULL, NULL, NULL, NULL, NULL, NULL}}, //15
    {NULL, NULL, {NULL, NULL, NULL, NULL, NULL, NULL}}, //16
    {PB, BIT0,  {(uint32_t) &SYS->GPB_MFP, SYS_GPB_MFP_PB0_Msk, NULL,                 NULL,                   NULL,                 SYS_GPB_MFP_PB0_GPIO }}, //17
    {PB, BIT1,  {(uint32_t) &SYS->GPB_MFP, SYS_GPB_MFP_PB1_Msk, NULL,                 NULL,                   NULL,                 SYS_GPB_MFP_PB1_GPIO }}, //18
    {PD, BIT6,  {(uint32_t) &SYS->GPD_MFP, SYS_GPD_MFP_PD6_Msk, NULL,                 NULL,                   NULL,                 SYS_GPD_MFP_PD6_GPIO }}, //19
    {PD, BIT7,  {(uint32_t) &SYS->GPD_MFP, SYS_GPD_MFP_PD7_Msk, NULL,                 NULL,                   NULL,                 SYS_GPD_MFP_PD7_GPIO }}, //20  
    {PC, BIT3,  {(uint32_t) &SYS->GPC_MFP, SYS_GPC_MFP_PC3_Msk, SYS_ALT_MFP_PC3_Msk,  NULL,                   NULL,                 SYS_GPC_MFP_PC3_GPIO }}, //21
    {PC, BIT2,  {(uint32_t) &SYS->GPC_MFP, SYS_GPC_MFP_PC2_Msk, SYS_ALT_MFP_PC2_Msk,  NULL,                   NULL,                 SYS_GPC_MFP_PC2_GPIO }}, //22
    {PC, BIT1,  {(uint32_t) &SYS->GPC_MFP, SYS_GPC_MFP_PC1_Msk, SYS_ALT_MFP_PC1_Msk,  NULL,                   NULL,                 SYS_GPC_MFP_PC1_GPIO }}, //23
    {PC, BIT0,  {(uint32_t) &SYS->GPC_MFP, SYS_GPC_MFP_PC0_Msk, SYS_ALT_MFP_PC0_Msk,  NULL,                   NULL,                 SYS_GPC_MFP_PC0_GPIO }}, //24
    {PA, BIT15, {(uint32_t) &SYS->GPA_MFP, SYS_GPA_MFP_PA15_Msk, SYS_ALT_MFP_PA15_Msk, SYS_ALT_MFP1_PA15_Msk, NULL,                 SYS_GPA_MFP_PA15_GPIO}}, //25
    {PA, BIT14, {(uint32_t) &SYS->GPA_MFP, SYS_GPA_MFP_PA14_Msk, NULL,                 SYS_ALT_MFP1_PA14_Msk, NULL,                 SYS_GPA_MFP_PA14_GPIO}}, //26
    {PA, BIT13, {(uint32_t) &SYS->GPA_MFP, SYS_GPA_MFP_PA13_Msk, NULL,                 SYS_ALT_MFP1_PA13_Msk, NULL,                 SYS_GPA_MFP_PA13_GPIO}}, //27
    {PA, BIT12, {(uint32_t) &SYS->GPA_MFP, SYS_GPA_MFP_PA12_Msk, NULL,                 SYS_ALT_MFP1_PA12_Msk, NULL,                 SYS_GPA_MFP_PA12_GPIO}}, //28
    {NULL, NULL, {NULL, NULL, NULL, NULL, NULL, NULL}}, //29
    {NULL, NULL, {NULL, NULL, NULL, NULL, NULL, NULL}}, //30
    {NULL, NULL, {NULL, NULL, NULL, NULL, NULL, NULL}}, //31
	{PA, BIT0,  {(uint32_t) &SYS->GPA_MFP, SYS_GPA_MFP_PA0_Msk, NULL,                 SYS_ALT_MFP1_PA0_Msk,   NULL,                 SYS_GPA_MFP_PA0_GPIO }}, //32
    {PA, BIT1,  {(uint32_t) &SYS->GPA_MFP, SYS_GPA_MFP_PA1_Msk, NULL,                 SYS_ALT_MFP1_PA1_Msk,   NULL,                 SYS_GPA_MFP_PA1_GPIO }}, //33
    {PA, BIT2,  {(uint32_t) &SYS->GPA_MFP, SYS_GPA_MFP_PA2_Msk, NULL,                 SYS_ALT_MFP1_PA2_Msk,   NULL,                 SYS_GPA_MFP_PA2_GPIO }}, //34
    {PA, BIT3,  {(uint32_t) &SYS->GPA_MFP, SYS_GPA_MFP_PA3_Msk, NULL,                 SYS_ALT_MFP1_PA3_Msk,   NULL,                 SYS_GPA_MFP_PA3_GPIO }}, //35
    {PA, BIT4,  {(uint32_t) &SYS->GPA_MFP, SYS_GPA_MFP_PA4_Msk, NULL,                 SYS_ALT_MFP1_PA4_Msk,   NULL,                 SYS_GPA_MFP_PA4_GPIO }}, //36
    {PA, BIT5,  {(uint32_t) &SYS->GPA_MFP, SYS_GPA_MFP_PA5_Msk, NULL,                 SYS_ALT_MFP1_PA5_Msk,   NULL,                 SYS_GPA_MFP_PA5_GPIO }}, //37
    {PA, BIT6,  {(uint32_t) &SYS->GPA_MFP, SYS_GPA_MFP_PA6_Msk, NULL,                 SYS_ALT_MFP1_PA6_Msk,   NULL,                 SYS_GPA_MFP_PA6_GPIO }}, //38
    {NULL, NULL, {NULL, NULL, NULL, NULL, NULL, NULL}}, //39
    {NULL, NULL, {NULL, NULL, NULL, NULL, NULL, NULL}}, //40
    {PC, BIT7,  {(uint32_t) &SYS->GPC_MFP, SYS_GPC_MFP_PC7_Msk, NULL,                 SYS_ALT_MFP1_PC7_Msk,   NULL,                 SYS_GPC_MFP_PC7_GPIO }}, //41
    {PC, BIT6,  {(uint32_t) &SYS->GPC_MFP, SYS_GPC_MFP_PC6_Msk, NULL,                 SYS_ALT_MFP1_PC6_Msk,   NULL,                 SYS_GPC_MFP_PC6_GPIO }}, //42
    {PB, BIT15, {(uint32_t) &SYS->GPB_MFP, SYS_GPB_MFP_PB15_Msk, SYS_ALT_MFP_PB15_Msk, NULL,                  SYS_ALT_MFP2_PB15_Msk, SYS_GPB_MFP_PB15_GPIO}}, //43
    {PF, BIT0,  {(uint32_t) &SYS->GPF_MFP, SYS_GPF_MFP_PF0_Msk, NULL,                 NULL,                   NULL,                 SYS_GPF_MFP_PF0_GPIO }}, //44
    {PF, BIT1,  {(uint32_t) &SYS->GPF_MFP, SYS_GPF_MFP_PF1_Msk, NULL,                 NULL,                   NULL,                 SYS_GPF_MFP_PF1_GPIO }}, //45
    {NULL, NULL, {NULL, NULL, NULL, NULL, NULL}}, //46
    {NULL, NULL, {NULL, NULL, NULL, NULL, NULL}}, //47
    {PB, BIT8,  {(uint32_t) &SYS->GPB_MFP, SYS_GPB_MFP_PB8_Msk, SYS_ALT_MFP_PB8_Msk,  NULL,                   NULL,                 SYS_GPB_MFP_PB8_GPIO }} //48
};

PWMPinDescription PWM_Desc[] =
{
    {PWMA, PWM01_MODULE, PWMA_IRQn, 0, 500, {28, SYS_GPA_MFP_PA12_PWM0, NULL,                 SYS_ALT_MFP1_PA12_PWM0, NULL                 }}, //0
    {PWMA, PWM01_MODULE, PWMA_IRQn, 1, 500, {27, SYS_GPA_MFP_PA13_PWM1, NULL,                 SYS_ALT_MFP1_PA13_PWM1, NULL                 }}, //1
    {PWMA, PWM23_MODULE, PWMA_IRQn, 2, 500, {26, SYS_GPA_MFP_PA14_PWM2, NULL,                 SYS_ALT_MFP1_PA14_PWM2, NULL                 }}, //2
    {PWMA, PWM23_MODULE, PWMA_IRQn, 3, 500, {15, SYS_GPA_MFP_PA15_PWM3, SYS_ALT_MFP_PA15_PWM3, SYS_ALT_MFP1_PA15_PWM3, NULL                 }}, //3
   };

ADCPinDescription ADC_Desc[] =
{
    {ADC, ADC_MODULE, 0, {32, SYS_GPA_MFP_PA0_ADC0, NULL,                 SYS_ALT_MFP1_PA0_ADC0, NULL                 }}, //0
    {ADC, ADC_MODULE, 1, {33, SYS_GPA_MFP_PA1_ADC1, NULL,                 SYS_ALT_MFP1_PA1_ADC1, NULL                 }}, //1
    {ADC, ADC_MODULE, 2, {34, SYS_GPA_MFP_PA2_ADC2, NULL,                 SYS_ALT_MFP1_PA2_ADC2, NULL                 }}, //2
    {ADC, ADC_MODULE, 3, {35, SYS_GPA_MFP_PA3_ADC3, NULL,                 SYS_ALT_MFP1_PA3_ADC3, NULL                 }}, //3
    {ADC, ADC_MODULE, 4, {36, SYS_GPA_MFP_PA4_ADC4, NULL,                 SYS_ALT_MFP1_PA4_ADC4, NULL                 }}, //4
    {ADC, ADC_MODULE, 5, {37, SYS_GPA_MFP_PA5_ADC5, NULL,                 SYS_ALT_MFP1_PA5_ADC5, NULL                 }}, //5
    {ADC, ADC_MODULE, 6, {38, SYS_GPA_MFP_PA6_ADC6, NULL,                 SYS_ALT_MFP1_PA6_ADC6, NULL                 }}, //6
};


SPIPinDescription SPI_Desc[] =
{
    {
        SPI0, SPI0_MODULE, SPI0_IRQn, CLK_CLKSEL1_SPI0_S_HCLK,
        {
            {23, SYS_GPC_MFP_PC1_SPI0_CLK, NULL, NULL, NULL},
            {21, SYS_GPC_MFP_PC3_SPI0_MOSI0, NULL, NULL, NULL},
            {22, SYS_GPC_MFP_PC2_SPI0_MISO0, NULL, NULL, NULL},
            {24, SYS_GPC_MFP_PC0_SPI0_SS0, NULL, NULL, NULL}
        }
    },
};

UARTPinDescription UART_Desc[] =
{
    {UART0, UART0_MODULE, UART02_IRQn, {{17, SYS_GPB_MFP_PB0_UART0_RXD, NULL, NULL, NULL}, {18, SYS_GPB_MFP_PB1_UART0_TXD, NULL, NULL, NULL} }},
    {UART1, UART1_MODULE, UART1_IRQn, {{8, SYS_GPB_MFP_PB4_UART1_RXD, NULL, NULL, NULL}, {9, SYS_GPB_MFP_PB5_UART1_TXD, NULL, NULL, NULL} }},
   // {UART2, UART2_MODULE, UART02_IRQn, {{38, SYS_GPD_MFP_PD14_UART2_RXD, NULL, NULL, NULL}, {39, SYS_GPD_MFP_PD15_UART2_TXD, NULL, NULL, NULL}}},
};

I2CPinDescription I2C_Desc[] =
{
    {I2C1, I2C1_MODULE, {{4, SYS_GPA_MFP_PA11_I2C1_SCL, NULL, NULL, NULL}, {5, SYS_GPA_MFP_PA10_I2C1_SDA, NULL, NULL, NULL}}},
    {I2C0, I2C0_MODULE, {{6, SYS_GPA_MFP_PA9_I2C0_SCL, NULL, NULL, NULL}, {7, SYS_GPA_MFP_PA8_I2C0_SDA, NULL, NULL, NULL}}},
};


CANPinDescription CAN_Desc[] =
{
    {CAN0, CAN0_MODULE, CAN0_IRQn, {{19, SYS_GPD_MFP_PD6_CAN0_RXD, NULL, NULL, NULL}, {20, SYS_GPD_MFP_PD7_CAN0_TXD, NULL, NULL, NULL}}},
};

#endif
