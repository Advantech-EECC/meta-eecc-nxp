FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:${THISDIR}/${PN}/common:"

include recipes-kernel/linux/linux-imx/${MACHINE}.inc

LOCALVERSION = "-adv-modbsp"
