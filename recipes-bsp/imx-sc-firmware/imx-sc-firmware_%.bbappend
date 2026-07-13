ADDON_FILES_DIR := "${THISDIR}/files"

SC_FIRMWARE_NAME = ""
SC_FIRMWARE_NAME:rom5620-db5901 = "mx8qx-rom5620-scfw-tcm.bin"

do_deploy:prepend () {
	[ "${SC_FIRMWARE_NAME}" = "" ] ||
		cp -a "${ADDON_FILES_DIR}/${SC_FIRMWARE_NAME}" "${S}/"
}
