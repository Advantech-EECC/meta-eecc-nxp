FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

SRC_URI += " \
    file://lpddr4_timing_rom2620a1_2G.c;subdir=git/board/freescale/imx8ulp_evk \
    file://0001-modify-dts.patch \
"

do_configure:prepend() {
    sed -i "/^CONFIG_DEFAULT_FDT_FILE=/c\CONFIG_DEFAULT_FDT_FILE=\"rom2620-ed91.dtb\"" ${S}/configs/imx8ulp_evk_defconfig
    sed -i 's/lpddr4_timing.o/lpddr4_timing_rom2620a1_2G.o/g' ${S}/board/freescale/imx8ulp_evk/Makefile
}

do_compile:prepend() {
    sed -i '/upower_pmic_i2c_write(0x14, 0x39);/d' ${S}/board/freescale/imx8ulp_evk/spl.c
    sed -i '/upower_pmic_i2c_write(0x21, 0x39);/d' ${S}/board/freescale/imx8ulp_evk/spl.c
    sed -i '/upower_pmic_i2c_write(0x2d, 0x2);/d' ${S}/board/freescale/imx8ulp_evk/spl.c
    # Only to disable is_recovery_key_pressing function
    sed -i 's/CONFIG_TARGET_IMX8ULP_EVK/CONFIG_TARGET_IMX8ULP_EVK_DUMMY/g' ${S}/board/freescale/imx8ulp_evk/imx8ulp_evk.c
    # To disable "set_apd_gpiox_op_range" calls
    sed -i 's/CONFIG_IMX8ULP_FIXED_OP_RANGE/CONFIG_IMX8ULP_FIXED_OP_RANGE_DUMMY/g' ${S}/board/freescale/imx8ulp_evk/spl.c
}
