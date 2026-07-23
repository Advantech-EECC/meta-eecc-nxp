FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append:aom5521a1-db2510 = " \
                    file://0001-aom5521a1-initial-support-lf-6.12.49.patch \
                    file://0002-Restore-i.MX95-A0-A1-Rev-A-silicon-support.patch \
"
