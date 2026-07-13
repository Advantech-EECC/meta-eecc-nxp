SRC_URI += " \
    file://watchdog_advantech.c;subdir=drivers/watchdog \
"

watchdog_advantech_patch() {
    grep -q watchdog_advantech.o "${S}/drivers/watchdog/Makefile" ||
    echo 'obj-y += watchdog_advantech.o' >>"${S}/drivers/watchdog/Makefile"

    cp "${UNPACKDIR}/drivers/watchdog/watchdog_advantech.c" "${S}/drivers/watchdog/"
}
