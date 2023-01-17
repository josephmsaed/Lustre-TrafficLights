if [ -z ${C_COMPILER} ]; then C_COMPILER=gcc; fi
$C_COMPILER -o Car_TL.exec \
	lustre_consts.c script_Car_TL.c  script_Car_TL_loop.c

