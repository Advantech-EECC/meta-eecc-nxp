DESCRIPTION = "OPTEE OS"

FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append:rom5720-db5901 = " file://0001-optee-rom5720.patch "
