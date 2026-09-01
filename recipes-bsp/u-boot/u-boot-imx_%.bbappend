FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:${THISDIR}/${PN}/${MACHINE}:"

require recipes-bsp/u-boot/u-boot-imx/${MACHINE}.inc
