
#ifndef _HTS221_H_
#define _HTS221_H_

/********************************************************************************
  * @file    HTS221.h
  * @author  MCD Application Team
  * @brief   This file provides the standard USB requests following chapter 9.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                      http://www.st.com/SLA0044
  *******************************************************************************/

int32_t HTS221_Report(u8fifo_t* pL); // where to send out result with base char key

int32_t HTS221_Polling(void);
int32_t HTS221_IsPlugged(void);

extern int32_t HTS_RH_x10;
extern int32_t HTS_DegC_x10;

#endif
