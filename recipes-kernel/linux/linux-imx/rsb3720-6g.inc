require common/watchdog_advantech.inc
require common/rtc-s35390a.inc

SRC_URI += " \
    file://rsb3720.dtsi;subdir=arch/arm64/boot/dts/freescale \
    file://rsb3720.dts;subdir=arch/arm64/boot/dts/freescale \
"

do_configure:prepend() {
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/rsb3720.dts"* \
       "${S}/arch/arm64/boot/dts/freescale/"

    echo 'dtb-$(CONFIG_ARCH_MXC) += rsb3720.dtb' >> ${S}/arch/arm64/boot/dts/freescale/Makefile
    watchdog_advantech_patch
}
