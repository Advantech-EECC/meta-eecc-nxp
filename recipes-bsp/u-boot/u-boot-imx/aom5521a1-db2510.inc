SRC_URI += " \
    file://0001-aom5521a1-update-imx95_evk.h.patch \
"

do_configure:prepend() {

    # Point to custom device tree
    sed -i "/^CONFIG_DEFAULT_FDT_FILE=/c\CONFIG_DEFAULT_FDT_FILE=\"imx95-aom5521-a2.dtb\"" \
        ${S}/configs/imx95_19x19_evk_defconfig

    # Adjust SPI flash speed for AOM-5521 hardware
    sed -i "/^CONFIG_SF_DEFAULT_SPEED=/c\CONFIG_SF_DEFAULT_SPEED=40000000" \
        ${S}/configs/imx95_19x19_evk_defconfig

    sed -i "/^CONFIG_RTC_EMULATION=/c\# CONFIG_RTC_EMULATION is not set" \
        ${S}/configs/imx95_19x19_evk_defconfig

    sed -i "/^CONFIG_SUPPORT_EMMC_RPMB=y/c\# CONFIG_SUPPORT_EMMC_RPMB is not set" \
        ${S}/configs/imx95_19x19_evk_defconfig

    # Disable USB TCPC (not present on AOM-5521)
    sed -i "/^CONFIG_USB_TCPC=y/c\# CONFIG_USB_TCPC is not set" \
        ${S}/configs/imx95_19x19_evk_defconfig

    # Simplify boot command (no sr_ir_v2_cmd on this board)
    sed -i '/^CONFIG_BOOTCOMMAND=/c\CONFIG_BOOTCOMMAND="bootflow scan -l; run bsp_bootcmd"' \
        ${S}/configs/imx95_19x19_evk_defconfig

    # Add Winbond SPI flash support
    echo "CONFIG_SPI_FLASH_WINBOND=y" >> ${S}/configs/imx95_19x19_evk_defconfig
}
