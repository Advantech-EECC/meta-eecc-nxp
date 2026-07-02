SRC_URI += " \
	file://0001-minimal-differences.patch \
	file://0002-rom5721-1g-dram.patch \
	file://lpddr4_timing_rom5721a1_1G.c;subdir=board/nxp/imx8mm_evk \
"

do_configure:prepend() {
	cp "${UNPACKDIR}/board/nxp/imx8mm_evk/lpddr4_timing_rom5721a1_1G.c" "${S}/board/nxp/imx8mm_evk/"

	sed -i "/^CONFIG_DEFAULT_FDT_FILE=/c\CONFIG_DEFAULT_FDT_FILE=\"rom5721-1g-db5901.dtb\"" ${S}/configs/imx8mm_evk_defconfig
}
