input_capture_polled

This project demonstrates the use of the WTIMER module for polled
input capture. The Compare/Capture channel interrupt flag is
polled until Push Button PB0 is pressed, at which point the 
captured wtimer value is stored and LED0 is turned on.

How To Test:
1. Build the project and download to the Starter Kit
2. Press PB0, LED0 will turn on, and the CC value 
is recorded.

Peripherals Used:
WTIMER0 - HFPERclk
PRS	   - GPIO

Board:  Silicon Labs EFM32PG1 Starter Kit (SLSTK3401A)
Device: EFM32PG1B200F256GM48
HFRCO  - 19 MHz
PF4 - LED0
PF6 - Push Button PB0

Board:  Silicon Labs EFM32PG12 Starter Kit (SLSTK3402A)
Device: EFM32PG12B500F1024GL125
HFRCO  - 19 MHz
PF4 - LED0
PF6 - Push Button PB0

Board:  Silicon Labs EFR32BG1P Starter Kit (BRD4100A)
Device: EFR32BG1P232F256GM48
HFRCO  - 19 MHz
PF4 - LED0
PF6 - Push Button PB0

Board:  Silicon Labs EFR32BG12P Starter Kit (BRD4103A)
Device: EFR32BG12P332F1024GL125
HFRCO  - 19 MHz
PF4 - LED0
PF6 - Push Button PB0

Board:  Silicon Labs EFR32FG1P Starter Kit (BRD4250A)
Device: EFR32FG1P133F256GM48
HFRCO  - 19 MHz
PF4 - LED0
PF6 - Push Button PB0

Board:  Silicon Labs EFR32FG12P Starter Kit (BRD4253A)
Device: EFR32FG12P433F1024GL125
HFRCO  - 19 MHz
PF4 - LED0
PF6 - Push Button PB0

Board:  Silicon Labs EFR32MG1P Starter Kit (BRD4151A)
Device: EFR32MG1P232F256GM48
HFRCO  - 19 MHz
PF4 - LED0
PF6 - Push Button PB0

Board:  Silicon Labs EFR32MG12P Starter Kit (BRD4161A)
Device: EFR32MG1P432F1024GL125
HFRCO  - 19 MHz
PF4 - LED0
PF6 - Push Button PB0

Board:  Silicon Labs EFM32ZG Starter Kit (STK3200)
Device: EFM32ZG222F32
HFRCO  - 14 MHz
PC10 - LED0
PC9 - Push Button PB0

Board:  Silicon Labs EFM32HG Starter Kit (SLSTK3400A)
Device: EFM32HG322F64
HFRCO  - 14 MHz
PF4 - LED0
PC9 - Push Button PB0

Board:  Silicon Labs EFM32WG Starter Kit (STK3800)
Device: EFM32WG990F256
HFRCO  - 14 MHz
PE2 - LED0
PB9 - PB0

Board:  Silicon Labs EFM32GG Starter Kit (STK3700)
Device: EFM32GG990F1024
HFRCO  - 14 MHz
PE2 - LED0
PB9 - Push Button PB0

Board:  Silicon Labs EFM32LG Starter Kit (STK3600)
Device: EFM32LG990F256
HFRCO  - 14 MHz
PE2 - LED0
PB9 - Push Button PB0

Board:  Silicon Labs EFM32G Starter Kit (Gxxx_STK)
Device: EFM32G890F128
HFRCO  - 14 MHz
PC0 - LED0
PB9 - Push Button PB0