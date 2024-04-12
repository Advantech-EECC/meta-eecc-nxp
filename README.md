Advantech BSP for NXP based boards
==================================
This reference BSP adds minimalistic changes to the NXP layers to support Advantech boards. Note that some boards may have only limited features with this BSP. However, more features can be added in another layer on top of this layer.

Supported Boards 
================
The following boards are supported by this layer:
 * ROM-2620 (`rom2620-ed91`)

Supported Linux Features
========
ROM-2620
--------
|Device |Status|Comment| 
|-------|------|-------| 
|SDHC0  |  ✅ | eMMC |
|SDHC2 |  ✅  | SD Card |
|Ethernet|  ✅  |  |
|USB A|  ⚠️ | Not Configured |
|USB B| ✅ | Device Mode |
|MIPI-DSI| ✅ | G070VW01 panel via LVDS bridge |
|MIPI-CSI| ⚠️ |  |
|LPUART4 | ✅ | COM-A |
|LPUART5 | ✅ | COM-D Linux Console |
|LPUART6 | ✅ | COM-C |
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