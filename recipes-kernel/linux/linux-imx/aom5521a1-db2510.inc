SRC_URI += " \
    file://imx95-aom5521-a1.dts;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-difference.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lpspi4.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-flexspi1.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-enet-tg.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lvds1-auog070vw01.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-can.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-rtc-rx8900.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lt9611uxc.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-pcie1-m2.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lpi2c7.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-pcie0.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lvds0-auog070vw01.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-wdt-msp430.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-cam-ov5640.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-usbotg.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lpuart5.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lpuart6.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-usb3.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-usb2.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lvds-dual-auog215hvn01.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-gpio.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-i2c-eeprom.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lpi2c3.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lpi2c2.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lpi2c8.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-gpiokey.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-flexspi1-nor-flash.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lpuart5-m2.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-st33htpm.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-dsi-auog101uan02.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-difference.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-sound-sgtl5000.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lpspi4-nor-flash.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-enet.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-sdio-m2.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-gpioexp.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://rtl8211f-leds.patch \
"

do_configure:prepend() {
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1.dts" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-can.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-flexspi1.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-lpspi4.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-rtc-rx8900.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-lt9611uxc.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-pcie1-m2.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-lpi2c7.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-pcie0.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-lvds0-auog070vw01.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-wdt-msp430.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-cam-ov5640.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-usbotg.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-lpuart5.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-lpuart6.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-usb3.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-usb2.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-lvds-dual-auog215hvn01.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-gpio.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-i2c-eeprom.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-lpi2c3.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-lpi2c2.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-lpi2c8.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-gpiokey.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-flexspi1-nor-flash.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-lpuart5-m2.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-st33htpm.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-dsi-auog101uan02.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-difference.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-sound-sgtl5000.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-lpspi4-nor-flash.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-enet.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-enet-tg.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-sdio-m2.dtsi" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-gpioexp.dtsi" "${S}/arch/arm64/boot/dts/freescale/"

    echo 'dtb-$(CONFIG_ARCH_MXC) += imx95-aom5521-a1.dtb' >> ${S}/arch/arm64/boot/dts/freescale/Makefile
}
