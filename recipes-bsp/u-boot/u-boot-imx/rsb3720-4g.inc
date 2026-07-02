SRC_URI += " \
    file://lpddr4_timing_rsb3720a2_4G.c;subdir=board/nxp/imx8mp_evk \
    file://rsb3720-u-boot.dtsi;subdir=arch/arm/dts \
    file://rsb3720.dts;subdir=dts/upstream/src/arm64/freescale \
    file://001-change-uart-mapping.patch \
"

do_configure:prepend() {
	cp "${UNPACKDIR}/board/nxp/imx8mp_evk/lpddr4_timing_rsb3720a2_4G.c" \
		   "${S}/board/nxp/imx8mp_evk/"
	cp "${UNPACKDIR}/arch/arm/dts/rsb3720-u-boot.dtsi" \
		   "${S}/arch/arm/dts/imx8mp-evk-u-boot.dtsi"
	cp "${UNPACKDIR}/dts/upstream/src/arm64/freescale/rsb3720.dts" \
		   "${S}/dts/upstream/src/arm64/freescale/imx8mp-evk.dts"

	for i in board/nxp/imx8mp_evk/imx8mp_evk.env
	do
		sed -i 's/console=ttymxc1,115200/console=ttymxc2,115200/g' \
				"${S}/$i"
		sed -i 's/ec_imx6q,0x30890000/ec_imx6q,0x30880000/g' \
				"${S}/$i"
	done

	RAM_SIZE=0x80000000 RAM2_SIZE=0x80000000 RAM2_OFFSET=0xc0000000

	sed -i "/^CONFIG_DEFAULT_FDT_FILE=/c\CONFIG_DEFAULT_FDT_FILE=\"rsb3720.dtb\"" ${S}/configs/imx8mp_evk_defconfig
	sed -i 's/lpddr4_timing.o/lpddr4_timing_rsb3720a2_4G.o/g' ${S}/board/nxp/imx8mp_evk/Makefile
	sed -i "/^#define[[:space:]]\+PHYS_SDRAM_SIZE[[:space:]]/c#define PHYS_SDRAM_SIZE ${RAM_SIZE}" "${S}/include/configs/imx8mp_evk.h"
	sed -i "/^#define[[:space:]]\+PHYS_SDRAM_2[[:space:]]\+/c#define PHYS_SDRAM_2 ${RAM2_OFFSET}" "${S}/include/configs/imx8mp_evk.h"
	sed -i "/^#define[[:space:]]\+PHYS_SDRAM_2_SIZE[[:space:]]\+/c#define PHYS_SDRAM_2_SIZE ${RAM2_SIZE}" "${S}/include/configs/imx8mp_evk.h"
}
