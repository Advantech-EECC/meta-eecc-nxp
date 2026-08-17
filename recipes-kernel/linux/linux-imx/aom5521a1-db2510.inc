SRC_URI += " \
    file://imx95-aom5521-a1-auog101uan02.dts;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lvds-dual.dts;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lvds0-auo.dts;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lvds0-auog070vw01-v1.dts;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lvds1-auo.dts;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-lvds1-auog070vw01-v1.dts;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1-m2-sdio.dts;subdir=arch/arm64/boot/dts/freescale \
    file://imx95-aom5521-a1.dts;subdir=arch/arm64/boot/dts/freescale \
    file://rtl8211f-leds.patch \
"

do_configure:prepend() {
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1.dts" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-auog101uan02.dts" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-lvds-dual.dts" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-lvds0-auo.dts" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-lvds0-auog070vw01-v1.dts" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-lvds1-auo.dts" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-lvds1-auog070vw01-v1.dts" "${S}/arch/arm64/boot/dts/freescale/"
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/imx95-aom5521-a1-m2-sdio.dts" "${S}/arch/arm64/boot/dts/freescale/"

    echo 'dtb-$(CONFIG_ARCH_MXC) += imx95-aom5521-a1.dtb' >> ${S}/arch/arm64/boot/dts/freescale/Makefile
    echo 'dtb-$(CONFIG_ARCH_MXC) += imx95-aom5521-a1-auog101uan02.dtb' >> ${S}/arch/arm64/boot/dts/freescale/Makefile
    echo 'dtb-$(CONFIG_ARCH_MXC) += imx95-aom5521-a1-lvds-dual.dtb' >> ${S}/arch/arm64/boot/dts/freescale/Makefile
    echo 'dtb-$(CONFIG_ARCH_MXC) += imx95-aom5521-a1-lvds0-auo.dtb' >> ${S}/arch/arm64/boot/dts/freescale/Makefile
    echo 'dtb-$(CONFIG_ARCH_MXC) += imx95-aom5521-a1-lvds0-auog070vw01-v1.dtb' >> ${S}/arch/arm64/boot/dts/freescale/Makefile
    echo 'dtb-$(CONFIG_ARCH_MXC) += imx95-aom5521-a1-lvds1-auo.dtb' >> ${S}/arch/arm64/boot/dts/freescale/Makefile
    echo 'dtb-$(CONFIG_ARCH_MXC) += imx95-aom5521-a1-lvds1-auog070vw01-v1.dtb' >> ${S}/arch/arm64/boot/dts/freescale/Makefile
    echo 'dtb-$(CONFIG_ARCH_MXC) += imx95-aom5521-a1-m2-sdio.dtb' >> ${S}/arch/arm64/boot/dts/freescale/Makefile
}
