SRC_URI += " \
    file://imx95-aom5521-a1-auog101uan02.dts;subdir=git/arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lvds-dual.dts;subdir=git/arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lvds0-auo.dts;subdir=git/arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lvds0-auog070vw01-v1.dts;subdir=git/arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lvds1-auo.dts;subdir=git/arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lvds1-auog070vw01-v1.dts;subdir=git/arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-m2-sdio.dts;subdir=git/arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1.dts;subdir=git/arch/arm64/boot/dts/freescale \
    file://rtl8211f-leds.patch \
"

do_configure:prepend() {
    echo 'dtb-$(CONFIG_ARCH_MXC) += imx95-aom5521-a1.dtb' >> ${S}/arch/arm64/boot/dts/freescale/Makefile
}
