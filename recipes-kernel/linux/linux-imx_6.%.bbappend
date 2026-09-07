FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

include recipes-kernel/linux/linux-imx/${MACHINE}.inc

LOCALVERSION = "-adv-modbsp"
