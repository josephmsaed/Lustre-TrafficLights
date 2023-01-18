/* This file was generated by lv6 version v6.106.1. */
/*  lv6 script.lus -node Main -2c -cc */
/* on linux the 18/01/2023 at 15:51:17 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lustre_consts.h"

// User typedef 
#ifndef _script_Main_TYPES
#define _script_Main_TYPES
// Memoryless soc ctx typedef 
// Memoryfull soc ctx typedef 
/* Lustre_pre_ctx */
typedef struct {
   /*Memory cell*/
   _integer _memory ;
} Lustre_pre_ctx_type;

/* Lustre_arrow_ctx */
typedef struct {
   /*Memory cell*/
   _boolean _memory ;
} Lustre_arrow_ctx_type;

/* Lustre_arrow_2_ctx */
typedef struct {
   /*Memory cell*/
   _boolean _memory ;
} Lustre_arrow_2_ctx_type;

/* script_Car_TL_ctx */
typedef struct {
   /*INSTANCES*/
   Lustre_pre_ctx_type Lustre_pre_ctx_tab[2];
   Lustre_arrow_ctx_type Lustre_arrow_ctx_tab[1];
   Lustre_arrow_2_ctx_type Lustre_arrow_2_ctx_tab[3];
} script_Car_TL_ctx_type;

/* script_Main_ctx */
typedef struct {
   /*INSTANCES*/
   script_Car_TL_ctx_type script_Car_TL_ctx_tab[2];
   Lustre_pre_ctx_type Lustre_pre_ctx_tab[2];
} script_Main_ctx_type;

#endif // end of  _script_Main_TYPES
void Lustre_arrow_2_ctx_reset(Lustre_arrow_2_ctx_type* ctx);
Lustre_arrow_2_ctx_type* Lustre_arrow_2_ctx_new_ctx();
void Lustre_arrow_2_step(_boolean ,_boolean ,_boolean *,Lustre_arrow_2_ctx_type*);

void Lustre_arrow_ctx_reset(Lustre_arrow_ctx_type* ctx);
Lustre_arrow_ctx_type* Lustre_arrow_ctx_new_ctx();
void Lustre_arrow_step(_integer ,_integer ,_integer *,Lustre_arrow_ctx_type*);

void Lustre_pre_ctx_reset(Lustre_pre_ctx_type* ctx);
Lustre_pre_ctx_type* Lustre_pre_ctx_new_ctx();
void Lustre_pre_get(_integer *,Lustre_pre_ctx_type*);

void Lustre_pre_set(_integer ,Lustre_pre_ctx_type*);

void script_Car_TL_ctx_reset(script_Car_TL_ctx_type* ctx);
script_Car_TL_ctx_type* script_Car_TL_ctx_new_ctx();
void script_Car_TL_step(_boolean ,_integer ,_boolean *,_boolean *,_boolean *,script_Car_TL_ctx_type*);

void script_Main_ctx_reset(script_Main_ctx_type* ctx);
script_Main_ctx_type* script_Main_ctx_new_ctx();
void script_Main_step(_boolean ,_boolean ,_integer *,_integer *,script_Main_ctx_type*);

/////////////////////////////////////////////////
