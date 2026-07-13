FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:${THISDIR}/${PN}/common:"

require recipes-kernel/linux/linux-imx/${MACHINE}.inc

LOCALVERSION = "-adv-modbsp"
