debug_lock

This project demonstrates the device's ability to lock the debug
interface by clearing bits in the lock bits page. The lower four
bits in the Debug Lock Word are cleared. After a device reset, no
debugging can be done until a device mass erase is completed, 
unlocking the device.

How To Test:
1. Build the project and and download to the Starter Kit. The Debug
	lock word will be cleared.
2. Disconnect the debugger from the device.
3. Edit the second line of test/test_M3-M4.bat to point to the install
	location of JLink.exe.
5. Run test/test_M3-M4.bat.
6. The output should display "Read DP register 3 = 0x26E60011" if the device
	is locked.
	
NOTE: This is the most reliable way to verify a debug lock. Many IDEs will
automatically unlock the device when attempting to flash, making it appear
as if the debug lock has failed.

7. To recover the device, open Simplicity Commander, connect to the device, 
	and select "Unlock Debug Access" under "Flash". This erases the entire
	device and unlocks the debug interface.
8. Run test/test_M3-M4.bat again. The final "Read DP register 3" should no
	longer output 0x26E60011, but should output 0x24770011.

Peripherals Used:
HFRCO  - 19 MHz

Board:  Silicon Labs EFM32BG1 Starter Kit (BRD4100A)
Device: EFR32BG1P232F256GM48

Board:  Silicon Labs EFM32BG12 Starter Kit (BRD4103A)
Device: EFR32BG12P332F1024GL125

Board:  Silicon Labs EFM32FG1 Starter Kit (BRD4250A)
Device: EFR32FG1P133F256GM48

Board:  Silicon Labs EFM32FG12 Starter Kit (BRD4253A)
Device: EFR32FG12P433F1024GL125

Board:  Silicon Labs EFM32MG1 Starter Kit (BRD4151A)
Device: EFR32MG1P232F256GM48

Board:  Silicon Labs EFM32MG12 Starter Kit (BRD4161A)
Device: EFR32MG12P432F1024GL125

Board:  Silicon Labs EFM32PG12 Starter Kit (SLSTK3402A)
Device: EFM32PG12B500F1024GL125

Board: Silicon Labs EFM32PG1B Starter Kit (SLSTK3401A)
Device: EFM32PG1B200F256GM48

