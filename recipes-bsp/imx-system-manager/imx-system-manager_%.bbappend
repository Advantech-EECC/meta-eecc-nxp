FILESEXTRAPATHS:prepend := "${THISDIR}/files:"

SRC_URI:append:aom5521a1-db2510 = " \
    file://0002-Add-AOM5521-A0-A1-support.patch \
    file://0001-Restore-i.MX95-A0-A1-Rev-A-silicon-support-driver-SM.patch \
"
                    