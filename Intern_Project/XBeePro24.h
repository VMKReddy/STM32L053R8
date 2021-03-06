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
 
 typedef struct AT_Data
 {
	 char MY[6];		/* Source Address unique to this device */
	 char ID[6];		/* Personal Area Network 								*/
	 char DH[9];		/* Destination register high 						*/
	 char DL[9];		/* Destination register low							*/
	 char CH[4];		/* Channel Selection										*/
 } AT_Data;
 
 extern void LPUART_Init(void);
 extern void XBee_ProS1_Init(void);
 extern void XBee_900HP_Init(void);
 extern void LPUART1_Send(char c[]);
 extern void Read_Xbee_ProS1_Init(void);
 
void Wait_For_OK(void);
void Wait_For_Data(void);
 
 #endif

