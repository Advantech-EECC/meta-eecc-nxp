# Skip unit/test-bap because it fails to link in this Wrynose configuration.

do_compile_ptest() {
    oe_runmake -o unit/test-bap buildtests
}

do_install_ptest:append() {
    rm -f ${D}${PTEST_PATH}/unit/test-bap
}
