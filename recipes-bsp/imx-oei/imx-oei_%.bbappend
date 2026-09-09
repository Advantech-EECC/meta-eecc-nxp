FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append:aom5521a1-db2510 = " \
                    file://0001-Add-AOM5521A1-16G-8G-LPDDR5-board-ports-for-i.MX95.patch \
"
SRC_URI:append:aom5521a2-db2510 = " \
                    file://0001-oei-add-imx95-aom5521a2-8G-lpddr5.patch \
		    file://0002-Add-missing-includes.patch \
"

