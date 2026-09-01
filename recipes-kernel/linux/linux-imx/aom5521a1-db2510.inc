SRC_URI += " \
    file://${KERNEL_DEVICETREE_BASENAME}.dts;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-auog101uan02.dts;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lvds0-auo.dts;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lvds0-auog070vw01-v1.dts;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lvds1-auo.dts;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lvds1-auog070vw01-v1.dts;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-lvds-dual.dts;subdir=arch/arm64/boot/dts/freescale \
    file://${KERNEL_DEVICETREE_BASENAME}-m2-sdio.dts;subdir=arch/arm64/boot/dts/freescale \
    file://rtl8211f-leds.patch \
"

do_configure:prepend() {
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/${KERNEL_DEVICETREE_BASENAME}"*\.dts* \
       "${S}/arch/arm64/boot/dts/freescale/"

    (   echo 'dtb-$(CONFIG_ARCH_MXC) += ${KERNEL_DEVICETREE_BASENAME}.dtb'
        echo 'dtb-$(CONFIG_ARCH_MXC) += ${KERNEL_DEVICETREE_BASENAME}-auog101uan02.dtb'
        echo 'dtb-$(CONFIG_ARCH_MXC) += ${KERNEL_DEVICETREE_BASENAME}-lvds0-auo.dtb'
        echo 'dtb-$(CONFIG_ARCH_MXC) += ${KERNEL_DEVICETREE_BASENAME}-lvds0-auog070vw01-v1.dtb'
        echo 'dtb-$(CONFIG_ARCH_MXC) += ${KERNEL_DEVICETREE_BASENAME}-lvds1-auo.dtb'
        echo 'dtb-$(CONFIG_ARCH_MXC) += ${KERNEL_DEVICETREE_BASENAME}-lvds1-auog070vw01-v1.dtb'
        echo 'dtb-$(CONFIG_ARCH_MXC) += ${KERNEL_DEVICETREE_BASENAME}-m2-sdio.dtb'
    ) >> ${S}/arch/arm64/boot/dts/freescale/Makefile
}
