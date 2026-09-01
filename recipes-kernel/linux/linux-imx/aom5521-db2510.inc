SRC_URI += " \
    file://${KERNEL_DEVICETREE_BASENAME}.dts;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-auog101uan02.dts;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-sof.dts;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-difference.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lpspi4.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-flexspi1.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-enet-tg.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lvds1-auog070vw01.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-can.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-rtc-rx8900.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lt9611uxc.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-pcie1-m2.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lpi2c7.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-pcie0.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lvds0-auog070vw01.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-wdt-msp430.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-cam-ov5640.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-usbotg.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lpuart5.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lpuart6.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-usb3.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lvds-dual-auog215hvn01.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-gpio.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-i2c-eeprom.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lpi2c3.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lpi2c2.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lpi2c8.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-gpiokey.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-flexspi1-nor-flash.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lpuart5-m2.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-st33htpm.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-dsi-auog101uan02.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-difference.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-sound-sgtl5000.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lpspi4-nor-flash.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-enet.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-sdio-m2.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-gpioexp.dtsi;subdir=arch/arm64/boot/dts/freescale \
"

do_configure:prepend() {
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/${KERNEL_DEVICETREE_BASENAME}"*\.dts* \
       "${S}/arch/arm64/boot/dts/freescale/"

    (   echo 'dtb-$(CONFIG_ARCH_MXC) += ${KERNEL_DEVICETREE_BASENAME}.dtb'
        echo 'dtb-$(CONFIG_ARCH_MXC) += ${KERNEL_DEVICETREE_BASENAME}-auog101uan02.dtb'
        echo 'dtb-$(CONFIG_ARCH_MXC) += ${KERNEL_DEVICETREE_BASENAME}-sof.dtb'
    ) >> ${S}/arch/arm64/boot/dts/freescale/Makefile
}
