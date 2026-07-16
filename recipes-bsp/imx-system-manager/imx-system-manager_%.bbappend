FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append:aom5521-db2510 += "\
                file://0001-AOM5521-support.patch \
"
