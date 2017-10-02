mbed compile -v --profile .\debug_nano.json

;arm-none-eabi-objcopy -S -O binary .\BUILD\NRF51_DONGLE\GCC_ARM\01_led_button.elf .\BUILD\NRF51_DONGLE\GCC_ARM\01_led_button.bin
