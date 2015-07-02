/*-------------------------------------------------------------------------------------------------------------------
 * Name:    XBeePro24.c
 * Purpose: Initialize USART, XBee, and send all data acquired
 * Date: 		6/18/15
 * Author:	Christopher Jordan - Denny
 *-------------------------------------------------------------------------------------------------------------------
 * Note(s): 
 *-------------------------------------------------------------------------------------------------------------------*/
 
 /*----------------------------------------------Include Statments---------------------------------------------------*/
 #include "stm32l053xx.h"					//Specific Device header
 
 #ifndef XBeePro24_H
 #define XBeePro24_H
 
 extern void LPUART_Init(void);
 extern void XBee_Init(void);
 extern void LPUART1_Send(char c[]);
 
 #endif

