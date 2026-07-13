SRC_URI += " \
	file://0001-minimal-differences.patch \
"

do_configure:prepend() {
	var=CONFIG_DEFAULT_FDT_FILE
	dtb=${MACHINE}.dtb
	defconfig=${S}/configs/imx8qxp_mek_defconfig

	grep -q "$var" "$defconfig" &&
		sed -i "/^$var=/c\$var=\"$dtb\"" "$defconfig" ||
		echo "$var=\"$dtb\"" >> "$defconfig"
}
