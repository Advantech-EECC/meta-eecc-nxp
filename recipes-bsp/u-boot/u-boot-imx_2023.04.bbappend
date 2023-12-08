UBOOT_SRC = "git://github.com/ADVANTECH-Corp/uboot-imx.git;protocol=https"
SRCBRANCH = "adv_v2023.04_6.1.22-2.0.0"

SRC_URI = "\
    ${UBOOT_SRC};branch=${SRCBRANCH} \
    "
SRCREV = "8b76e2b8846acb4aaa9d68aeb8358732e2802904"

do_configure:prepend() {
    sed -i "/^CONFIG_DEFAULT_FDT_FILE=/c\CONFIG_DEFAULT_FDT_FILE=\"rom2620-ed91.dtb\"" ${S}/configs/imx8ulp_rom2620a1_2G_defconfig
}
