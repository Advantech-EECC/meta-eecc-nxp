require common/watchdog_advantech.inc

SRC_URI += " \
    file://ecu150a1.dts;subdir=arch/arm64/boot/dts/freescale \
    file://usb_wdm.cfg \
    file://fintek-f81603.cfg \
    file://rtl8169.cfg \
"

# Hontek RTC driver is needed for the ECU150A1 board, but it is not yet upstreamed. 
# The patch adds support for the HT1382 RTC chip used on the board.
SRC_URI += " \
    file://drivers/rtc/rtc-ht1382.c \
    file://drivers/rtc/rtc-ht1382.patch \
    file://drivers/rtc/rtc-ht1382.cfg \
"

do_configure:prepend() {
    cp "${UNPACKDIR}/arch/arm64/boot/dts/freescale/ecu150a1.dts" "${S}/arch/arm64/boot/dts/freescale/"
	cp "${UNPACKDIR}/drivers/rtc/rtc-ht1382.c" "${S}/drivers/rtc/"

    echo 'dtb-$(CONFIG_ARCH_MXC) += ecu150a1.dtb' >> ${S}/arch/arm64/boot/dts/freescale/Makefile
    watchdog_advantech_patch
}