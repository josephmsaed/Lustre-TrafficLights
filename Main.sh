if [ -z ${C_COMPILER} ]; then C_COMPILER=gcc; fi
$C_COMPILER -o Main.exec \
	lustre_consts.c script_Main.c  script_Main_loop.c

