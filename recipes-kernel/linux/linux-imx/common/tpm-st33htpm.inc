SRC_URI += " file://tcg-tis-i2c.cfg "

DELTA_KERNEL_DEFCONFIG:append = " tcg-tis-i2c.cfg"
