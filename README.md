Advantech BSP for NXP based boards
==================================

This reference BSP adds minimalistic changes to the NXP layers to support Advantech boards. Note that some boards may have only limited features with this BSP. However, more features can be added in another layer on top of this layer.

For build instructions, check the [README.md in the Advantech fork of the NXP imx-manifest repository](https://github.com/Advantech-EECC/imx-manifest), which adds manifests including this layer.


Supported Boards
================

The following boards are supported by this layer:

 * ROM-2620-CD-A1 1GB (MACHINE=`rom2620-ed91` NXP i.MX 8ULP)
 * ROM-2820-CD-A1 2GB (`rom2820-ed93` NXP i.MX 93)
 * ROM-5722-CQ-A1 6GB (`rom5722-db2510` NXP i.MX 8M Plus)
 * RSB-3720-CD/CQ-A1/A2 6GB A1,A2 (`rsb3720` `rsb3720-6g` NXP i.MX 8M Plus)
 * RSB-3720-CD/CQ-A2 4GB A2 (`rsb3720-4g` NXP i.MX 8M Plus)

Preliminary support:

 * AOM-5521 8GB (MACHINE=`aom5521a1-db2510` NXP i.MX 95)
 * ROM-5720-CD/CQ-A2 2GB (`rom5720-db5901` NXP i.MX 8M)
 * ROM-5721-CD-A1/A2 1GB (`rom5721-db5901-1g` NXP i.MX 8M Mini)
 * ROM-5721-CQ-A1/A2 2GB (`rom5721-db5901-2g` NXP i.MX 8M Mini)


Supported Linux Features
========

ROM-2620 (on ROM-ED91 carrier board)
--------

|Device |Status|Comment|
|-------|------|-------|
|SDHC0  |  ✅ | eMMC |
|SDHC2 |  ✅  | SD Card |
|Ethernet |  ✅  | 100Mbps |
|USB1-1| ✅ | USB 2.0 |
|USB1-2| ✅ | USB 2.0 |
|USB-OTG | ⚠️  | Not tested (micro-USB connector) |
|MIPI-DSI| ✅ | G070VW01 panel via LVDS bridge |
|MIPI-CSI| ⚠️ |  |
|LPUART4 | ✅⚠️ | COM-A (2-wire, 4-wire HWFC not tested) |
|LPUART5 | ✅ | COM-D Linux Console |
|LPUART6 | ✅ | COM-C (2-wire) |
|LPI2C0 | ❌ | On CAM connector |
|LPI2C6 | ✅ | Lontium LT9211 exists |
|LPI2C7 | ✅ |  |
|PWM 1 to 5| ❌ | Need to be accessed from M33 |
|LPUART1| ❌ | Need to be accessed from M33 |
|LPUART2| ❌ | Need to be accessed from M33 |
|FLEXSPI0| ❌ | Need to be accessed from M33 |
|LPSPI3| ❌ | Need to be accessed from M33 |
|CAN| ❌ | Need to be accessed from M33 |
|GPIO A,B,C| ❌ | Need to be accessed from M33 |
|RTC | ✅ | Internal RTC, supports timer wake events |
|Watchdog | ✅ | Internal watchdog |
|Secure Boot AHAB | ❌ | Not tested |

ROM-2820 (on ROM-ED93 carrier board)
--------

|Device |Status|Comment|
|-------|------|-------|
|SDHC0  |  ✅ | eMMC |
|SDHC2 |  ✅  | SD Card |
|ETH0 |  ✅  | 1Gbps |
|ETH1 |  ✅  | 1Gbps |
|USB1-1| ✅ | USB 2.0 |
|USB1-2| ✅ | USB 2.0 |
|USB-OTG | ❌ |  |
|MIPI-LVDS| ✅ | Tested with IDK-1107WR |
|MIPI-DSI| ✅⚠️ | Not tested |
|LPUART1 | ✅ | COM-E Linux Console |
|LPUART2 | ✅ | COM-C (2-wire) |
|LPUART3 | ✅ | COM-D (2-wire)|
|LPUART5 | ✅⚠️ | COM-A (2-wire, 4-wire HWFC not tested) |
|LPUART6 | ✅⚠️ | COM-B (2-wire, 4-wire HWFC not tested) |
|LPI2C0 | ✅ |  |
|LPI2C1 | ✅ |  |
|LPI2C2 | ✅ |  |
|LPI2C4 | ✅ |  |
|LPI2C7 | ✅ |  |
|PWM0 | ⚠️ | Not tested |
|PWM1 | ❌ |  |
|LPSPI3| ⚠️ | Not tested |
|NPU| ⚠️ | Not tested (i.MX 93 has built-in an Ethos™-U65 NPU) |
|CAN0| ✅ |  |
|CAN1| ✅ |  |
|GPIO  ⚠️ | Not tested |
|RTC0 | ✅ | External I2C RTC (rx8900) |
|RTC1 | ✅ | Internal RTC, supports timer wake events |
|Watchdog | ✅ | Internal watchdog |
|Secure Boot AHAB | ❌ | Not tested |


ROM-5720 (on SOM-DB5901 carrier board)
--------

MP: preliminary support
MQ: preliminary support, issues with suspend to RAM, external watchdog

|Device |Status|Comment|
|-------|------|-------|
|SDHC0 |  ✅ | eMMC |
|SDHC2 |  ✅ | SD Card |
|ETH0 |  ✅ | 1Gbps (Qualcomm AR8035-AL1B-R) |
|ETH1 |  ✅ | 1Gbps (PCI-E, RTL8119I-CG) |
|USB1 | ✅ | USB 3.0 |
|USB2 | ❌ | USB 2.0 |
|USB3 | ❌ | USB-C |
|USB-OTG | ❌ |  |
|HDMI |  ✅ |  |
|MIPI-LVDS | ❌ | (DSI to LVDS bridge) |
|UART1| ✅ | COM3 Linux Console (2-wire) |
|UART2| ✅ | COM2 (2-wire) |
|UART3| ✅ | COM0 (4-wire) |
|UART4| ✅ | COM1 (2-wire) |
|I2C1 | ⚠️  | Not tested |
|I2C2 | ⚠️  | Not tested |
|I2C3 | ⚠️  | Not tested |
|I2C4 | ⚠️  | Not tested |
|M.2 | ⚠️  | Not tested (M.2 key E connector) |
|PWM1 | ❌ |  |
|PWM2 | ❌ |  |
|PWM3 | ❌ |  |
|PWM4 | ❌ |  |
|QSPI0| ✅ | n25q256a (jedec,spi-nor) |
|GPIO | ⚠️ | Not tested |
|RTC0 | ✅ | External I2C RTC (rx8900) |
|RTC1 | ✅ | Internal RTC, supports timer wake events |
|TPM | ❌ | (st33htpm-i2c not yet upstreamed to tpm_tis_i2c.c) |
|Watchdog | ✅ | External I2C Advantech watchdog (MSP430-based) |
|Secure Boot HABv4 | ⚠️ | Not tested, likely to work (similar to ROM-5721) |


ROM-5721 (on SOM-DB5901 carrier board)
--------

CQ: preliminary support

|Device |Status|Comment|
|-------|------|-------|
|SDHC0 |  ✅ | eMMC |
|SDHC2 |  ✅ | SD Card |
|ETH |  ✅ | 1Gbps |
|USB1 | ⚠️ | Not tested |
|USB2 | ⚠️ | Not tested |
|USB3 | ⚠️ | Not tested |
|USB-OTG | ❌ |  |
|MIPI-LVDS | ✅ | AUO G070 and G215 |
|UART1| ✅ | COM3 Linux Console (2-wire) |
|UART2| ⚠️ | M.2 (4-wire) - Not tested |
|UART3| ❌ | Pending |
|UART4| ❌ | Pending |
|I2C1 | ⚠️  | Not tested |
|I2C2 | ⚠️  | Not tested |
|I2C3 | ⚠️  | Not tested |
|I2C4 | ⚠️  | Not tested |
|M.2 | ⚠️  | Not tested (M.2 key E connector) |
|PWM1 | ❌ | |
|PWM2 | ❌ | |
|PWM3 | ❌ | |
|PWM4 | ✅ | LVDS backlight |
|QSPI0| ✅ | n25q256a (jedec,spi-nor) |
|GPIO | ⚠️ | Not tested |
|RTC | ✅ | Internal RTC, supports timer wake events |
|RTC0 | ✅ | External I2C RTC (S35390) |
|RTC1 | ✅ | Internal RTC, supports timer wake events |
|TPM | ⚠️  | Not tested (st33htpm-i2c) |
|Watchdog0 | ✅ | Internal watchdog |
|Watchdog1 | ✅ | External I2C Advantech watchdog (MSP430-based) |
|Secure Boot HABv4 | ✅ | Tested (full chain of trust + locked boot loader) |

ROM-5722 (on SOM-DB2510 carrier board)
--------

|Device |Status|Comment|
|-------|------|-------|
|SDHC2  |  ✅ | eMMC |
|SDHC1 |  ✅  | SD Card |
|ETH0 |  ✅  | 1Gbps |
|ETH1 |  ✅  | 1Gbps |
|USB1|  ✅ | USB 2.0 |
|USB2| ✅ | USB 2.0  |
|USB-C| ✅ | USB 3.2 |
|USB-OTG | ⚠️  | Not tested (micro-USB connector) |
|HDMI| ✅ |  |
|MIPI-DSI| ❌ |  |
|MIPI-CSI| ❌ |  |
|UART1 | ✅⚠️ | COM3-A (2-wire, 4-wire HWFC not tested) |
|UART2 | ✅ | COM4-A, Linux console |
|UART3 | ✅⚠️ | COM3-B (2-wire, 4-wire HWFC not tested) |
|UART4 | ✅ | COM4-B (2-wire) |
|LPI2C0 | ⚠️  | Not tested |
|LPI2C1 | ⚠️  | Not tested |
|LPI2C2 | ⚠️  | Not tested |
|LPI2C3 | ⚠️  | Not tested |
|LPI2C4 | ⚠️  | Not tested |
|NPU| ⚠️ | Not tested (i.MX8M Plus has built-in a Vivante VIP8000Nano NPU) |
|PWM 2| ⚠️  | Not tested |
|PWM 3| ⚠️  | Not tested |
|GPIO| ✅ | Tested on SOM-DB2510 (CN9 connector) |
|PCI-E| ❌  | Pending |
|CAN0| ✅ |  |
|CAN1| ✅ |  |
|RTC0 | ✅ | External I2C RTC (S35390) |
|RTC1 | ✅ | Internal RTC, supports timer wake events |
|Watchdog0 | ✅ | Internal watchdog |
|Watchdog1 | ✅ | External I2C Advantech watchdog (MSP430-based) |
|Secure Boot HABv4 | ⚠️ | Not tested, likely to work (similar to ROM-5721) |


RSB-3720
--------

|Device |Status|Comment|
|-------|------|-------|
|SDHC2  |  ✅ | eMMC |
|SDHC1 |  ✅  | SD Card |
|ETH0 |  ✅  | 1Gbps |
|ETH1 |  ✅  | 1Gbps |
|USB1-1|  ✅ | USB 3.2 |
|USB1-2| ✅ | USB 2.0 |
|HDMI| ✅ |  |
|MIPI-DSI| ❌ |  |
|MIPI-CSI| ❌ |  |
|UART1 | ✅⚠️ | COM2, M2 connector (2-wire, 4-wire HWFC), not tested |
|UART2 | ✅ | COM3, via UIO expansion (2-wire) |
|UART3 | ✅⚠️  | COM1, Linux console (2-wire, 4-wire HWFC), HWFC not tested|
|UART4 | ✅ | COM4, via UIO expansion (2-wire) |
|LPI2C0 | ⚠️  | Not tested |
|LPI2C1 | ⚠️  | Not tested |
|LPI2C2 | ⚠️  | Not tested |
|LPI2C3 | ⚠️  | Not tested |
|LPI2C6 | ⚠️  | Not tested |
|NPU| ⚠️ | Not tested (i.MX8M Plus has built-in a Vivante VIP8000Nano NPU) |
|PWM 2| ⚠️  | Not tested |
|PWM 3| ⚠️  | Not tested |
|GPIO| ❌ |  |
|PCI-E| ⚠️  | Not tested |
|CAN0| ✅ |  |
|CAN1| ✅ |  |
|RTC0 | ✅ | External I2C RTC (S35390) |
|RTC1 | ✅ | Internal RTC, supports timer wake events |
|Watchdog0 | ✅ | Internal watchdog |
|Watchdog1 | ✅ | External I2C Advantech watchdog (MSP430-based) |
|Secure Boot HABv4 | ⚠️ | Not tested, likely to work (similar to ROM-5721) |

AOM-5521 (on SOM-DB2510 carrier board)
--------

|Device |Status|Comment|
|-------|------|-------|
|USDHC1 | ⚠️ | eMMC 5.1 (not tested) |
|USDHC2 | ⚠️ | SD Card (not tested) |
|ETH0 | ⚠️ | Ethernet (not tested) |
|ETH1 | ⚠️ | Ethernet with TSN (not tested) |
|USB1| ⚠️ | USB 3.2 Gen1 (not tested) |
|USB2| ⚠️ | USB 2.0 (not tested) |
|LPUART1 | ⚠️ | Console (not tested) |
|I2C | ⚠️ | Not tested |
|CAN-FD| ⚠️ | Not tested |
|GPIO| ⚠️ | Not tested |
|NPU| ⚠️ | 2 TOPS NPU (not tested) |
|GPU| ⚠️ | Mali-G310 (not tested) |
|VPU| ⚠️ | 4K video processing (not tested) |
|HDMI| ⚠️ | Not tested |
|MIPI-DSI| ⚠️ | 4-lane (not tested) |
|LVDS| ⚠️ | Dual-channel (not tested) |
|PCIe| ⚠️ | 2x Gen 3.0 (not tested) |
|M.2| ⚠️ | Not tested |
|mini PCIe| ⚠️ | Not tested |
|Secure Boot | ⚠️ | Not tested |

Note: This is preliminary support for AOM-5521. All features require testing and validation.
