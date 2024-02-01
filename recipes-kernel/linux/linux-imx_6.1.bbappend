FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

SRC_URI += " \
    file://rom2620-ed91.dts;subdir=git/arch/arm64/boot/dts/freescale \
    file://01-add-missing-pinmux-configs-from-acl.patch \
    file://02-add-missing-clock-parameters-in-driver-acl.patch \
"

do_configure:prepend() {
    echo 'dtb-$(CONFIG_ARCH_MXC) += rom2620-ed91.dtb' >> ${S}/arch/arm64/boot/dts/freescale/Makefile
}
