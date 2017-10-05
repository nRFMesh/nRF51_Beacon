
;arm-none-eabi-objcopy -S -O binary .\BUILD\NRF51_DONGLE\GCC_ARM\01_led_button.elf .\BUILD\NRF51_DONGLE\GCC_ARM\01_led_button.bin

JLink.exe -device NRF51422_XXAC -If SWD -Speed 4000
loadfile .\BUILD\NRF51_DONGLE_16K\GCC_ARM\02_led_blink_rtc_softdevice.hex
savebin .\BUILD\NRF51_DONGLE\GCC_ARM\target_hex_load.bin,0x00000000, 0x40000


JLink.exe -device NRF51822_XXAA -If SWD -Speed 4000

;loadfile .\BUILD\NRF51_DONGLE\GCC_ARM\01_led_button.bin,0x0001B000
;loadfile .\BUILD\NRF51_DONGLE\GCC_ARM\01_led_button.hex
;loadfile .\mbed-os\features\FEATURE_BLE\targets\TARGET_NORDIC\TARGET_MCU_NRF51822\bootloader\s130_nrf51_1.0.0_bootloader.hex



;savebin .\BUILD\NRF51_BEACON_UN\GCC_ARM\target_hex_load.bin,0x00000000, 0x40000
;loadfile .\mbed-os\features\FEATURE_BLE\targets\TARGET_NORDIC\TARGET_MCU_NRF51822\bootloader\s130_nrf51_1.0.0_bootloader.hex
; bootloader => 0x3C000

;erase
