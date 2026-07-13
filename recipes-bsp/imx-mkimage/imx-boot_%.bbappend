FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append:rom5720-db5901 = " file://0001-add-imx8mq-rom5720a1-2G-support.patch "
SRC_URI:append:rom2620-ed91 = " file://0001-rom2620-secure-boot.patch "
SRC_URI:append:rom5620-db5901 = " file://0001-rom5620-secure-boot.patch "

do_compile:prepend:rom2620-ed91() {
    export KERNEL_DTB="${MACHINE}.dtb"
    export UBOOT_DTB_NAME="${MACHINE}.dtb"
}

do_compile:prepend:rom2820-ed93() {
    export KERNEL_DTB="${MACHINE}.dtb"
    export UBOOT_DTB_NAME="${MACHINE}.dtb"
}

do_compile:prepend:rom5620-db5901() {
    export KERNEL_DTB="${MACHINE}.dtb"
    export UBOOT_DTB_NAME="${MACHINE}.dtb"
}
