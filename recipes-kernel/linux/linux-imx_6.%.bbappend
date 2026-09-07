FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:${THISDIR}/${PN}/common:"

include recipes-kernel/linux/linux-imx/${MACHINE}.inc

SRC_URI:append = "${@ ' file://common/0001-Revert-serial-imx-Restore-original-RXTL-for-console.patch' if d.getVar('IS_CANONICAL_NXP_ADV') != '1' else '' }"

LOCALVERSION = "-adv-modbsp"
