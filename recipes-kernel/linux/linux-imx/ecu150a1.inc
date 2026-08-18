require drivers/watchdog_advantech.inc

SRC_URI += " \
    file://ecu150a1.dts;subdir=git/arch/arm64/boot/dts/freescale \
    file://usb_wdm.cfg \
    file://fintek-f81603.cfg \
    file://rtl8169.cfg \
    file://tpm.cfg \
"

# Hontek RTC driver is needed for the ECU150A1 board, but it is not yet upstreamed. 
# The patch adds support for the HT1382 RTC chip used on the board.
SRC_URI += " \
    file://drivers/rtc/rtc-ht1382.c \
    file://drivers/rtc/rtc-ht1382.patch \
    file://drivers/rtc/rtc-ht1382.cfg \
"

DELTA_KERNEL_DEFCONFIG += " \
        usb_wdm.cfg \
        fintek-f81603.cfg \
        rtl8169.cfg \
        drivers/rtc/rtc-ht1382.cfg \
        kernel_config.cfg \
        tpm.cfg \
"

do_configure:prepend() {
    echo 'dtb-$(CONFIG_ARCH_MXC) += ecu150a1.dtb' >> ${S}/arch/arm64/boot/dts/freescale/Makefile
    watchdog_advantech_patch
}

do_configure:append() {
	cp "${WORKDIR}/drivers/rtc/rtc-ht1382.c" "${S}/drivers/rtc/"
}