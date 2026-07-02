SRC_URI += " \
    file://lpddr4_timing_rsb3720a2_6G.c;subdir=board/nxp/imx8mp_evk \
    file://rsb3720-u-boot.dtsi;subdir=arch/arm/dts \
    file://rsb3720.dts;subdir=dts/upstream/src/arm64/freescale \
    file://001-change-uart-mapping.patch \
"

do_configure:prepend() {
	cp "${UNPACKDIR}/board/nxp/imx8mp_evk/lpddr4_timing_rsb3720a2_6G.c" \
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

	sed -i "/^CONFIG_DEFAULT_FDT_FILE=/c\CONFIG_DEFAULT_FDT_FILE=\"rsb3720.dtb\"" ${S}/configs/imx8mp_evk_defconfig
	sed -i 's/lpddr4_timing.o/lpddr4_timing_rsb3720a2_6G.o/g' ${S}/board/nxp/imx8mp_evk/Makefile
}
