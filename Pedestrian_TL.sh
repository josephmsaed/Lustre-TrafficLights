if [ -z ${C_COMPILER} ]; then C_COMPILER=gcc; fi
$C_COMPILER -o Pedestrian_TL.exec \
	lustre_consts.c script_Pedestrian_TL.c  script_Pedestrian_TL_loop.c

