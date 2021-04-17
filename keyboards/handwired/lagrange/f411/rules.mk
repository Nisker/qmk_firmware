# MCU name
MCU = STM32F411

# Address of the bootloader in system memory
STM32_BOOTLOADER_ADDRESS = 0x1FFF0000

NKRO_ENABLE = yes            # USB Nkey Rollover
SPLIT_TRANSPORT = NotCustom	 # Set Transport back to serial
SERIAL_DRIVER = usart
KEYBOARD_SHARED_EP = yes
EEPROM_DRIVER = i2c