/**************************************************************************//**
 * @file
 * @brief This project demonstrates generating a pulse train using the LETIMER
 * module. PC10 (Expansion Header Pin 16) is configured for output compare
 * and toggles PC10 on each overflow event at a set frequency.
 * @version 0.0.1
 ******************************************************************************
 * @section License
 * <b>Copyright 2015 Silicon Labs, Inc. http://www.silabs.com</b>
 *******************************************************************************
 *
 * This file is licensed under the Silabs License Agreement. See the file
 * "Silabs_License_Agreement.txt" for details. Before using this software for
 * any purpose, you must agree to the terms of that agreement.
 *
 ******************************************************************************/

#include "em_device.h"
#include "em_chip.h"
#include "em_cmu.h"
#include "em_emu.h"
#include "em_gpio.h"
#include "em_letimer.h"
#include "bsp.h"

/**************************************************************************//**
 * @brief GPIO initialization
 *****************************************************************************/
void initGPIO(void)
{
  // Enable GPIO and clock
  CMU_ClockEnable(cmuClock_GPIO, true);

  // Configure PC10 (Expansion Header 16) as output
  GPIO_PinModeSet(gpioPortC, 10, gpioModePushPull, 0);
}

/**************************************************************************//**
 * @brief TIMER initialization
 *****************************************************************************/
void initLETIMER(void)
{
  LETIMER_Init_TypeDef letimerInit = LETIMER_INIT_DEFAULT;

  // Enable clock to the LE modules interface
  CMU_ClockEnable(cmuClock_HFLE, true);

  // Select LFXO for the LETIMER
  CMU_ClockSelectSet(cmuClock_LFA, cmuSelect_LFXO);
  CMU_ClockEnable(cmuClock_LETIMER0, true);

  // Reload COMP0 on underflow, pulse output, and run in repeat mode
  letimerInit.comp0Top = true;
  letimerInit.ufoa0 = letimerRepeatOneshot;
  letimerInit.repMode = letimerRepeatFree;

  // Need REP0 != 0 to pulse on underflow
  LETIMER_RepeatSet(LETIMER0, 0, 1);

  // Compare on wake-up interval count (1 kHz)
  LETIMER_CompareSet(LETIMER0, 0, 32);

  // Enable LETIMER0 output0 on PC10 (Route 15)
  LETIMER0->ROUTEPEN |=  LETIMER_ROUTEPEN_OUT0PEN;
  LETIMER0->ROUTELOC0 |= LETIMER_ROUTELOC0_OUT0LOC_LOC15;


  // Initialize and enable LETIMER
  LETIMER_Init(LETIMER0, &letimerInit );
}

/**************************************************************************//**
 * @brief  Main function
 *****************************************************************************/
int main(void)
{
  // Chip errata
  CHIP_Init();

  // Initializations
  initGPIO();
  initLETIMER();

  while (1)
  {
    EMU_EnterEM2(true);
  }
}
