/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 10/01/2025 10:51:55
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated with a generator out of the
 *               STM32CubeMX project and its generated files (DO NOT EDIT!)
 ******************************************************************************/

#ifndef MX_DEVICE_H__
#define MX_DEVICE_H__

/* MX_Device.h version */
#define MX_DEVICE_VERSION                       0x01000000


/*------------------------------ I2C1           -----------------------------*/
#define MX_I2C1                                 1

/* Filter Settings */
#define MX_I2C1_ANF_ENABLE                      1
#define MX_I2C1_DNF                             0

/* Peripheral Clock Frequency */
#define MX_I2C1_PERIPH_CLOCK_FREQ               80000000

/* Pins */

/* I2C1_SCL */
#define MX_I2C1_SCL_Pin                         PB8
#define MX_I2C1_SCL_GPIO_Pin                    GPIO_PIN_8
#define MX_I2C1_SCL_GPIOx                       GPIOB
#define MX_I2C1_SCL_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C1_SCL_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C1_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SCL_GPIO_AF                     GPIO_AF4_I2C1

/* I2C1_SDA */
#define MX_I2C1_SDA_Pin                         PB9
#define MX_I2C1_SDA_GPIO_Pin                    GPIO_PIN_9
#define MX_I2C1_SDA_GPIOx                       GPIOB
#define MX_I2C1_SDA_GPIO_Mode                   GPIO_MODE_AF_OD
#define MX_I2C1_SDA_GPIO_PuPd                   GPIO_PULLUP
#define MX_I2C1_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SDA_GPIO_AF                     GPIO_AF4_I2C1

/*------------------------------ SPI1           -----------------------------*/
#define MX_SPI1                                 1

/* Peripheral Clock Frequency */
#define MX_SPI1_PERIPH_CLOCK_FREQ               80000000

/* Pins */

/* SPI1_MISO */
#define MX_SPI1_MISO_Pin                        PB4
#define MX_SPI1_MISO_GPIO_Pin                   GPIO_PIN_4
#define MX_SPI1_MISO_GPIOx                      GPIOB
#define MX_SPI1_MISO_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI1_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_MISO_GPIO_AF                    GPIO_AF5_SPI1

/* SPI1_MOSI */
#define MX_SPI1_MOSI_Pin                        PB5
#define MX_SPI1_MOSI_GPIO_Pin                   GPIO_PIN_5
#define MX_SPI1_MOSI_GPIOx                      GPIOB
#define MX_SPI1_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI1_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI1_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_MOSI_GPIO_AF                    GPIO_AF5_SPI1

/* SPI1_NSS */
#define MX_SPI1_NSS_Pin                         PA15
#define MX_SPI1_NSS_GPIO_Pin                    GPIO_PIN_15
#define MX_SPI1_NSS_GPIOx                       GPIOA
#define MX_SPI1_NSS_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SPI1_NSS_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI1_NSS_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_NSS_GPIO_AF                     GPIO_AF5_SPI1

/* SPI1_SCK */
#define MX_SPI1_SCK_Pin                         PA5
#define MX_SPI1_SCK_GPIO_Pin                    GPIO_PIN_5
#define MX_SPI1_SCK_GPIOx                       GPIOA
#define MX_SPI1_SCK_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SPI1_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI1_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI1_SCK_GPIO_AF                     GPIO_AF5_SPI1

/*------------------------------ SPI3           -----------------------------*/
#define MX_SPI3                                 1

/* Peripheral Clock Frequency */
#define MX_SPI3_PERIPH_CLOCK_FREQ               80000000

/* Pins */

/* SPI3_MISO */
#define MX_SPI3_MISO_Pin                        PC11
#define MX_SPI3_MISO_GPIO_Pin                   GPIO_PIN_11
#define MX_SPI3_MISO_GPIOx                      GPIOC
#define MX_SPI3_MISO_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI3_MISO_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI3_MISO_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI3_MISO_GPIO_AF                    GPIO_AF6_SPI3

/* SPI3_MOSI */
#define MX_SPI3_MOSI_Pin                        PC12
#define MX_SPI3_MOSI_GPIO_Pin                   GPIO_PIN_12
#define MX_SPI3_MOSI_GPIOx                      GPIOC
#define MX_SPI3_MOSI_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_SPI3_MOSI_GPIO_PuPd                  GPIO_NOPULL
#define MX_SPI3_MOSI_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI3_MOSI_GPIO_AF                    GPIO_AF6_SPI3

/* SPI3_NSS */
#define MX_SPI3_NSS_Pin                         PA4
#define MX_SPI3_NSS_GPIO_Pin                    GPIO_PIN_4
#define MX_SPI3_NSS_GPIOx                       GPIOA
#define MX_SPI3_NSS_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SPI3_NSS_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI3_NSS_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI3_NSS_GPIO_AF                     GPIO_AF6_SPI3

/* SPI3_SCK */
#define MX_SPI3_SCK_Pin                         PC10
#define MX_SPI3_SCK_GPIO_Pin                    GPIO_PIN_10
#define MX_SPI3_SCK_GPIOx                       GPIOC
#define MX_SPI3_SCK_GPIO_Mode                   GPIO_MODE_AF_PP
#define MX_SPI3_SCK_GPIO_PuPd                   GPIO_NOPULL
#define MX_SPI3_SCK_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_SPI3_SCK_GPIO_AF                     GPIO_AF6_SPI3

/*------------------------------ USART1         -----------------------------*/
#define MX_USART1                               1

/* Virtual mode */
#define MX_USART1_VM                            VM_ASYNC
#define MX_USART1_VM_ASYNC                      1

/* Pins */

/* USART1_RX */
#define MX_USART1_RX_Pin                        PA10
#define MX_USART1_RX_GPIO_Pin                   GPIO_PIN_10
#define MX_USART1_RX_GPIOx                      GPIOA
#define MX_USART1_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_RX_GPIO_AF                    GPIO_AF7_USART1

/* USART1_TX */
#define MX_USART1_TX_Pin                        PA9
#define MX_USART1_TX_GPIO_Pin                   GPIO_PIN_9
#define MX_USART1_TX_GPIOx                      GPIOA
#define MX_USART1_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART1_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART1_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART1_TX_GPIO_AF                    GPIO_AF7_USART1

/*------------------------------ USART2         -----------------------------*/
#define MX_USART2                               1

/* Virtual mode */
#define MX_USART2_VM                            VM_ASYNC
#define MX_USART2_VM_ASYNC                      1

/* Pins */

/* USART2_CTS */
#define MX_USART2_CTS_Pin                       PA0
#define MX_USART2_CTS_GPIO_Pin                  GPIO_PIN_0
#define MX_USART2_CTS_GPIOx                     GPIOA
#define MX_USART2_CTS_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART2_CTS_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART2_CTS_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_CTS_GPIO_AF                   GPIO_AF7_USART2

/* USART2_RTS */
#define MX_USART2_RTS_Pin                       PA1
#define MX_USART2_RTS_GPIO_Pin                  GPIO_PIN_1
#define MX_USART2_RTS_GPIOx                     GPIOA
#define MX_USART2_RTS_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART2_RTS_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART2_RTS_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_RTS_GPIO_AF                   GPIO_AF7_USART2

/* USART2_RX */
#define MX_USART2_RX_Pin                        PA3
#define MX_USART2_RX_GPIO_Pin                   GPIO_PIN_3
#define MX_USART2_RX_GPIOx                      GPIOA
#define MX_USART2_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART2_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART2_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_RX_GPIO_AF                    GPIO_AF7_USART2

/* USART2_TX */
#define MX_USART2_TX_Pin                        PA2
#define MX_USART2_TX_GPIO_Pin                   GPIO_PIN_2
#define MX_USART2_TX_GPIOx                      GPIOA
#define MX_USART2_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART2_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART2_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART2_TX_GPIO_AF                    GPIO_AF7_USART2

/*------------------------------ USART3         -----------------------------*/
#define MX_USART3                               1

/* Virtual mode */
#define MX_USART3_VM                            VM_ASYNC
#define MX_USART3_VM_ASYNC                      1

/* Pins */

/* USART3_CTS */
#define MX_USART3_CTS_Pin                       PB13
#define MX_USART3_CTS_GPIO_Pin                  GPIO_PIN_13
#define MX_USART3_CTS_GPIOx                     GPIOB
#define MX_USART3_CTS_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART3_CTS_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART3_CTS_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_CTS_GPIO_AF                   GPIO_AF7_USART3

/* USART3_RTS */
#define MX_USART3_RTS_Pin                       PD2
#define MX_USART3_RTS_GPIO_Pin                  GPIO_PIN_2
#define MX_USART3_RTS_GPIOx                     GPIOD
#define MX_USART3_RTS_GPIO_Mode                 GPIO_MODE_AF_PP
#define MX_USART3_RTS_GPIO_PuPd                 GPIO_NOPULL
#define MX_USART3_RTS_GPIO_Speed                GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_RTS_GPIO_AF                   GPIO_AF7_USART3

/* USART3_RX */
#define MX_USART3_RX_Pin                        PC5
#define MX_USART3_RX_GPIO_Pin                   GPIO_PIN_5
#define MX_USART3_RX_GPIOx                      GPIOC
#define MX_USART3_RX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART3_RX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART3_RX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_RX_GPIO_AF                    GPIO_AF7_USART3

/* USART3_TX */
#define MX_USART3_TX_Pin                        PC4
#define MX_USART3_TX_GPIO_Pin                   GPIO_PIN_4
#define MX_USART3_TX_GPIOx                      GPIOC
#define MX_USART3_TX_GPIO_Mode                  GPIO_MODE_AF_PP
#define MX_USART3_TX_GPIO_PuPd                  GPIO_NOPULL
#define MX_USART3_TX_GPIO_Speed                 GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USART3_TX_GPIO_AF                    GPIO_AF7_USART3

/*------------------------------ USB            -----------------------------*/
#define MX_USB                                  1

/* Handle */
#define MX_USB_HANDLE                           hpcd_USB_FS

/* Pins */

/* USB_DM */
#define MX_USB_DM_Pin                           PA11
#define MX_USB_DM_GPIO_Pin                      GPIO_PIN_11
#define MX_USB_DM_GPIOx                         GPIOA
#define MX_USB_DM_GPIO_Mode                     GPIO_MODE_AF_PP
#define MX_USB_DM_GPIO_PuPd                     GPIO_NOPULL
#define MX_USB_DM_GPIO_Speed                    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_DM_GPIO_AF                       GPIO_AF10_USB_FS

/* USB_DP */
#define MX_USB_DP_Pin                           PA12
#define MX_USB_DP_GPIO_Pin                      GPIO_PIN_12
#define MX_USB_DP_GPIOx                         GPIOA
#define MX_USB_DP_GPIO_Mode                     GPIO_MODE_AF_PP
#define MX_USB_DP_GPIO_PuPd                     GPIO_NOPULL
#define MX_USB_DP_GPIO_Speed                    GPIO_SPEED_FREQ_VERY_HIGH
#define MX_USB_DP_GPIO_AF                       GPIO_AF10_USB_FS

#endif  /* MX_DEVICE_H__ */
