SRC_URI += " \
	file://0001-minimal-differences.patch \
	file://lpddr4_timing_rom5720a1_2G.c;subdir=board/nxp/imx8mq_evk \
	file://lpddr4_timing_b0.c;subdir=board/nxp/imx8mq_evk \
"

do_configure:prepend() {
	cp -f "${UNPACKDIR}/board/nxp/imx8mq_evk/lpddr4_timing_rom5720a1_2G.c" \
		"${UNPACKDIR}/board/nxp/imx8mq_evk/lpddr4_timing_b0.c" \
		"${S}/board/nxp/imx8mq_evk/"
}
