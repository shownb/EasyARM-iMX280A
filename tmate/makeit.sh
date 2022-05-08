##build zimage


cp ../../linux-4.15.12/arch/arm/boot/zImage .
curl --upload-file ./imx28_ivt_uboot.sb https://transfer.sh/imx28_ivt_uboot.sb

#build rootfs
cd buildroot-2020.02.5
export FORCE_UNSAFE_CONFIGURE=1
make ARCH=arm freescale_imx28evk_defconfig
make
