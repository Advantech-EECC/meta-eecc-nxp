require common/watchdog_advantech.inc
require common/rtc-s35390a.inc
require common/tpm-st33htpm.inc
require common/usb-hub-usb251xb-i2c.inc

SRC_URI += " \
	file://${MACHINE}.dts;subdir=arch/arm64/boot/dts/freescale \
"

do_configure:prepend() {
	cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/${MACHINE}.dts" \
	   "${S}/arch/arm64/boot/dts/freescale/"

	echo "dtb-\$(CONFIG_ARCH_MXC) += ${MACHINE}.dtb" \
				>> ${S}/arch/arm64/boot/dts/freescale/Makefile

	watchdog_advantech_patch
}
