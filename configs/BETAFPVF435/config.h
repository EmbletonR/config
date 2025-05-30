/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define FC_TARGET_MCU                       AT32F435G

#define BOARD_NAME                          BETAFPVF435
#define MANUFACTURER_ID                     BEFH

#define USE_ACC
#define USE_ACC_SPI_ICM42688P

#define USE_BARO
#define USE_BARO_SPI_BMP280

#define USE_GYRO
#define USE_GYRO_SPI_ICM42688P

#define USE_FLASH
#define USE_FLASH_W25Q128FV

#define USE_MAX7456

#define BEEPER_PIN           PB4
#define MOTOR1_PIN           PB0
#define MOTOR2_PIN           PB1
#define MOTOR3_PIN           PA3
#define MOTOR4_PIN           PA2
#define MOTOR5_PIN           PC8
#define MOTOR6_PIN           PA8
#define RX_PPM_PIN           PB8
#define SONAR_TRIGGER_PIN    PC9
#define SONAR_ECHO_PIN       PA8
#define LED_STRIP_PIN        PB6
#define UART1_TX_PIN         PA9
#define UART3_TX_PIN         PB10
#define UART4_TX_PIN         PA0
#define UART6_TX_PIN         PC6
#define UART1_RX_PIN         PA10
#define UART3_RX_PIN         PB11
#define UART4_RX_PIN         PA1
#define UART5_RX_PIN         PD2
#define UART6_RX_PIN         PC7
#define INVERTER_PIN_UART3   PC9
#define INVERTER_PIN_UART6   PC8
#define LED0_PIN             PB5
#define SPI1_SCK_PIN         PA5
#define SPI2_SCK_PIN         PB13
#define SPI3_SCK_PIN         PC10
#define SPI1_SDI_PIN         PA6
#define SPI2_SDI_PIN         PB14
#define SPI3_SDI_PIN         PC11
#define SPI1_SDO_PIN         PA7
#define SPI2_SDO_PIN         PB15
#define SPI3_SDO_PIN         PC12
#define ESCSERIAL_PIN        PB8
#define ADC_VBAT_PIN         PC2
#define ADC_RSSI_PIN         PC0
#define ADC_CURR_PIN         PC1
#define BARO_CS_PIN          PB3
#define SDCARD_SPI_CS_PIN    PB12
#define SDCARD_DETECT_PIN    PB7
#define FLASH_CS_PIN         PB12
#define MAX7456_SPI_CS_PIN   PA15
#define GYRO_1_EXTI_PIN      PC4
#define GYRO_1_CS_PIN        PA4
#define USB_DETECT_PIN       PC5

#define TIMER_PIN_MAPPING                   TIMER_PIN_MAP( 0, PB0, 2,  1 ) \
                                            TIMER_PIN_MAP( 1, PB1, 2,  2 ) \
                                            TIMER_PIN_MAP( 2, PA3, 1,  7 ) \
                                            TIMER_PIN_MAP( 3, PA2, 1,  6 ) \
                                            TIMER_PIN_MAP( 4, PC8, 2,  4 ) \
                                            TIMER_PIN_MAP( 5, PA8, 1,  5 ) \
                                            TIMER_PIN_MAP( 6, PB6, 1,  0 )

#define ADC_INSTANCE ADC1
#define ADC1_DMA_OPT 11

#define SERIALRX_UART		SERIAL_PORT_USART3

#define DEFAULT_BLACKBOX_DEVICE     BLACKBOX_DEVICE_FLASH
#define DEFAULT_DSHOT_BURST DSHOT_DMAR_ON
#define DEFAULT_CURRENT_METER_SOURCE CURRENT_METER_ADC
#define DEFAULT_VOLTAGE_METER_SOURCE VOLTAGE_METER_ADC
#define BEEPER_INVERTED
#define SYSTEM_HSE_MHZ 8

#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW270_DEG
#define FLASH_SPI_INSTANCE SPI2
#define MAX7456_SPI_INSTANCE SPI3
#define BARO_SPI_INSTANCE SPI3

