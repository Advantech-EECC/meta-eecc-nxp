SRC_URI += " \
    file://ecu150a1.dts \
    file://lpddr4_timing_1g.c \
    file://lpddr4_timing_2g.c \
    file://lpddr4_timing_4g.c \
    file://0002-board-spl-ddr-runtime-selection.patch \
"

do_configure:prepend() {
	cp "${UNPACKDIR}/lpddr4_timing_1g.c" \
		"${S}/board/freescale/imx8mq_evk/"
	cp "${UNPACKDIR}/lpddr4_timing_2g.c" \
		"${S}/board/freescale/imx8mq_evk/"
	cp "${UNPACKDIR}/lpddr4_timing_4g.c" \
		"${S}/board/freescale/imx8mq_evk/"

	cp "${UNPACKDIR}/ecu150a1.dts" \
		"${S}/dts/upstream/src/arm64/freescale/ecu150a1.dts"

	# Register ecu150a1.dtb with the upstream DTS build system
	echo "dtb-\$(CONFIG_ARCH_IMX8MQ) += ecu150a1.dtb" \
		>> "${S}/dts/upstream/src/arm64/freescale/Makefile"

	where=${S}/configs/imx8mq_wevk_defconfig
	tag=CONFIG_IMX8MQ_4GB_DDR_TIMING

	sed -i "/^$tag=/c# $tag is not set" "$where"

	sed -i '/^CONFIG_DEFAULT_DEVICE_TREE=/c\CONFIG_DEFAULT_DEVICE_TREE="freescale/ecu150a1"' "$where"

	if grep -q '^CONFIG_DEFAULT_FDT_FILE=' "$where"; then
		sed -i '/^CONFIG_DEFAULT_FDT_FILE=/c\CONFIG_DEFAULT_FDT_FILE="ecu150a1.dtb"' "$where"
	fi

	sed -i '/^CONFIG_USB_TCPC=/c\# CONFIG_USB_TCPC is not set' "$where"
	sed -i '/^CONFIG_SPL_MAX_SIZE=/c\CONFIG_SPL_MAX_SIZE=0x27000' "$where"

	if grep -q '^# CONFIG_MXC_UART is not set' "$where"; then
		sed -i '/^# CONFIG_MXC_UART is not set/c\CONFIG_MXC_UART=y' "$where"
	elif ! grep -q '^CONFIG_MXC_UART=y' "$where"; then
		echo 'CONFIG_MXC_UART=y' >> "$where"
	fi

	if grep -q '^# CONFIG_CMD_EXPORTENV is not set' "$where"; then
		sed -i '/^# CONFIG_CMD_EXPORTENV is not set/c\CONFIG_CMD_EXPORTENV=y' "$where"
	elif ! grep -q '^CONFIG_CMD_EXPORTENV=y' "$where"; then
		echo 'CONFIG_CMD_EXPORTENV=y' >> "$where"
	fi

	if grep -q '^# CONFIG_CMD_IMPORTENV is not set' "$where"; then
		sed -i '/^# CONFIG_CMD_IMPORTENV is not set/c\CONFIG_CMD_IMPORTENV=y' "$where"
	elif ! grep -q '^CONFIG_CMD_IMPORTENV=y' "$where"; then
		echo 'CONFIG_CMD_IMPORTENV=y' >> "$where"
	fi

	if grep -q '^CONFIG_BOOTDELAY=' "$where"; then
		sed -i '/^CONFIG_BOOTDELAY=/c\CONFIG_BOOTDELAY=1' "$where"
	else
		echo 'CONFIG_BOOTDELAY=1' >> "$where"
	fi

	where=${S}/include/configs/imx8mq_evk.h

	if ! grep -q 'TEE_LOAD_ADDR_4G' "$where"; then
		perl -0777 -i -pe 's/#include "imx_env.h"\n/#include "imx_env.h"\n\n#define ADV_IMX8_DDR_1G\t\t0x0\n#define ADV_IMX8_DDR_2G\t\t0x1\n#define ADV_IMX8_DDR_4G\t\t0x2\n\n#define TEE_LOAD_ADDR_1G\t0x7e000000\n#define TEE_LOAD_ADDR_2G\t0x7e000000\n#define TEE_LOAD_ADDR_4G\t0xfe000000\n/s' "$where"
	fi

	sed -i 's/fdtfile=imx8mq-evk.dtb/fdtfile=ecu150a1.dtb/g' "$where"
	sed -i 's/console=ttymxc0,115200/console=ttymxc0,115200 earlycon=ec_imx6q,0x30860000,115200/g' "$where"
	sed -i 's/loadimage=fatload /loadimage=load /g' "$where"
	sed -i 's/loadfdt=fatload /loadfdt=load /g' "$where"
	sed -i '/^#define PHYS_SDRAM_SIZE/,+2c\\#define PHYS_SDRAM_SIZE            SZ_4G /* max supported RAM size */' "$where"
}
