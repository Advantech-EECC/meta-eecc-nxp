FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:${THISDIR}/${PN}/${MACHINE}:"

include recipes-bsp/u-boot/u-boot-imx/${MACHINE}.inc

