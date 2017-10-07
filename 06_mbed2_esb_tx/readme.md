# Env preparation
* copy esb directory from sdk, as it is still not a git module (under test)

# Encountred issues
* esb has sdk dependencies (nrf_error.h, nrf_assert.h, sdk_common.h, nrf_peripherals.h, sdk_config.h, nrf_gpio.h)
* esb dependencies already solved in mbed-os 5, not in mbed2-classic
* current blink beacon run only on mbed2, as mbed-os5 targets include sofdevices

# Solution
* required nRF_Beacon led with mbed-os 5 without softdevices
