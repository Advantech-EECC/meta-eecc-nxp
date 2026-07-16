Advantech BSP for NXP based boards
==================================

This reference BSP adds minimalistic changes to the NXP layers to support Advantech boards. Note that some boards may have only limited features with this BSP. However, more features can be added in another layer on top of this layer.

For build instructions, check the [README.md in the Advantech fork of the NXP imx-manifest repository](https://github.com/Advantech-EECC/imx-manifest), which adds manifests including this layer.


Supported Boards
================

The following boards are supported by this layer:

 * ROM-2620 (`rom2620-ed91` NXP i.MX 8ULP)
 * ROM-2820 (`rom2820-ed93` NXP i.MX 93)
 * ROM-5722 (`rom5722-db2510` NXP i.MX 8M Plus)
 * RSB-3720 (`rsb3720` NXP i.MX 8M Plus)

Preliminary support:

 * ROM-5720 (`rom5720-db5901` NXP i.MX 8M)
 * ROM-5721 (`rom5721-db5901` NXP i.MX 8M Mini)


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
|USB-OTG | ⚠️  | Not tested (micro-USB connector) |
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
|NPU| ⚠️ | Not tested |
|NPU| ⚠️ | Not tested (i.MX 93 has built-in an Ethos™-U65 NPU) |
|CAN0| ✅ |  |
|CAN1| ✅ |  |
|GPIO  ⚠️ | Not tested |
|RTC0 | ✅ | External I2C RTC (rx8900) |
|RTC1 | ✅ | Internal RTC, supports timer wake events |
|Watchdog | ✅ | Internal watchdog |


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


ROM-5721 (on SOM-DB5901 carrier board)
--------

CQ: preliminary support

|Device |Status|Comment|
|-------|------|-------|
|SDHC0 |  ✅ | eMMC |
|SDHC2 |  ✅ | SD Card |
|ETH |  ✅ | 1Gbps |
|USB1 | ❌ | Pending |
|USB2 | ❌ | Pending |
|USB3 | ❌ | Pending |
|USB-OTG | ❌ |  |
|MIPI-LVDS | ❌ | (DSI to LVDS bridge) |
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
|PWM4 | ❌ | |
|QSPI0| ✅ | n25q256a (jedec,spi-nor) |
|GPIO | ⚠️ | Not tested |
|RTC | ✅ | Internal RTC, supports timer wake events |
|Watchdog | ✅ | Internal watchdog |


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

Additional limitations for this module + carrier:
- Suspend to RAM wakes up immediately


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

AOM-5521 (on SOM-DB2510 carrier board)
--------

|Device |Status|Comment|
|-------|------|-------|
|USDHC1 | ✅ | eMMC 5.1 tested (PASS) |
|USDHC2 | ✅ | SD Card tested (PASS) |
|ETH0 | ✅ | Ethernet tested (PASS) |
|ETH1 | ✅ | Ethernet with TSN tested (PASS) |
|USB1| ✅ | USB 3.2 Gen1 detected, plugged-device works |
|USB2| ✅ | USB 2.0 detected, plugged-device works |
|LPUART1 | ✅ | Console tested (PASS) |
|I2C | ✅ | Automated tests OK |
|CAN-FD| ✅⚠️ | Automated tests OK; external controller test is manual |
|GPIO| ⚠️ | Not tested |
|NPU| ✅ | 2 TOPS NPU tested (automated tests OK) |
|GPU| ⚠️ | Mali-G310 present; DRI/KMS (card1), OpenGL ES, Wayland, Xwayland tests ERROR |
|VPU| ⚠️ | 4K video processing (not tested) |
|HDMI| ⚠️ | Not tested |
|MIPI-DSI| ⚠️ | 4-lane (not tested) |
|LVDS| ⚠️ | Dual-channel (not tested) |
|PCIe| ✅ | 2x Gen 3.0 tested (automated tests OK) |
|M.2| ⚠️ | Not tested |
|mini PCIe| ⚠️ | Not tested |
|Secure Boot | ⚠️ | Not tested |

