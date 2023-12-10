FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

SRC_URI += " \
    file://lpddr4_timing_rom2620a1_2G.c;subdir=git/board/freescale/imx8ulp_evk \
"

do_configure:prepend() {
    sed -i "/^CONFIG_DEFAULT_FDT_FILE=/c\CONFIG_DEFAULT_FDT_FILE=\"rom2620-ed91.dtb\"" ${S}/configs/imx8ulp_evk_defconfig
    sed -i 's/lpddr4_timing.o/lpddr4_timing_rom2620a1_2G.o/g' ${S}/board/freescale/imx8ulp_evk/Makefile
}

do_compile:prepend() {
    sed -i 's/MX8ULP_PAD_PTF14__LPUART5_TX[[:space:]]*0x3/MX8ULP_PAD_PTE6__LPUART5_TX 0x1/g' ${S}/arch/arm/dts/imx8ulp-evk.dts
    sed -i 's/MX8ULP_PAD_PTF15__LPUART5_RX[[:space:]]*0x3/MX8ULP_PAD_PTE7__LPUART5_RX 0x1/g' ${S}/arch/arm/dts/imx8ulp-evk.dts

    sed '/upower_pmic_i2c_write(0x14, 0x39);/d' ${S}/board/freescale/imx8ulp_evk/spl.c
    sed '/upower_pmic_i2c_write(0x21, 0x39);/d' ${S}/board/freescale/imx8ulp_evk/spl.c
    sed '/upower_pmic_i2c_write(0x2d, 0x2);/d' ${S}/board/freescale/imx8ulp_evk/spl.c
    # Only to disable is_recovery_key_pressing function
    sed -i 's/CONFIG_TARGET_IMX8ULP_EVK/CONFIG_TARGET_IMX8ULP_EVK_DUMMY/g' ${S}/board/freescale/imx8ulp_evk/imx8ulp_evk.c
    # To disable "set_apd_gpiox_op_range" calls
    sed -i 's/CONFIG_IMX8ULP_FIXED_OP_RANGE/CONFIG_IMX8ULP_FIXED_OP_RANGE_DUMMY/g' ${S}/board/freescale/imx8ulp_evk/spl.c
}
