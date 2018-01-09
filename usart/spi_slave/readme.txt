spi_master

This example demonstrates USART as a SPI slave.
Data received on the MOSI pin is processed by an interrupt.
Another interrupt loads the TXDATA register to send data to the master each SPI frame on the MISO pin.

How To Test:
1. Build the project and download to the Starter Kit
2. Build spi_master project and download to a Starter Kit
3. Place breakpoint in slave's USART1_RX_IRQHandler() per comments
4. Run spi_slave 
5. Run spi_master 
6. After hitting the breakpoint, observe RxBuffer[] in IDE variables/expressions window. 
   RxBuffer[] should contain 0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09.

Peripherals Used:
HFRCO  - 19 MHz
USART1 - Synchronous (SPI) mode, CLK = 1 MHz


Board:  Silicon Labs EFM32MG1P Radio Board (BRD4151A) + 
        Wireless Starter Kit Mainboard
Device: EFM32MG1P232F256GM48
PC6 - USART1 MOSI - EXP Header Pin 4
PC7 - USART1 MISO - EXP Header Pin 6
PC8 - USART0 CLK  - EXP Header Pin 8
PC9 - USART0 CS   - EXP Header Pin 10

