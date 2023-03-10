/* This file was generated by lv6 version v6.106.1. */
/*  lv6 script.lus -node Main -2c -cc */
/* on linux the 19/01/2023 at 01:23:55 */
#include "script_Main.h"
//// Defining step functions
// Memory initialisation for Lustre_arrow_2_ctx
void Lustre_arrow_2_ctx_reset(Lustre_arrow_2_ctx_type* ctx){  ctx->_memory = _true;
}
// Memory allocation for Lustre_arrow_2_ctx
Lustre_arrow_2_ctx_type* Lustre_arrow_2_ctx_new_ctx(){

   Lustre_arrow_2_ctx_type* ctx = (Lustre_arrow_2_ctx_type*)calloc(1, sizeof(Lustre_arrow_2_ctx_type));
   // ctx->client_data = cdata;
   Lustre_arrow_2_ctx_reset(ctx);
  return ctx;
}
// Step function(s) for Lustre_arrow_2_ctx
void Lustre_arrow_2_step(_boolean i1,_boolean i2,_boolean *out,Lustre_arrow_2_ctx_type* ctx){  *out = ((ctx->_memory)? i1 : i2);
  ctx->_memory = _false;

} // End of Lustre_arrow_2_step

// Memory initialisation for Lustre_arrow_ctx
void Lustre_arrow_ctx_reset(Lustre_arrow_ctx_type* ctx){  ctx->_memory = _true;
}
// Memory allocation for Lustre_arrow_ctx
Lustre_arrow_ctx_type* Lustre_arrow_ctx_new_ctx(){

   Lustre_arrow_ctx_type* ctx = (Lustre_arrow_ctx_type*)calloc(1, sizeof(Lustre_arrow_ctx_type));
   // ctx->client_data = cdata;
   Lustre_arrow_ctx_reset(ctx);
  return ctx;
}
// Step function(s) for Lustre_arrow_ctx
void Lustre_arrow_step(_integer i1,_integer i2,_integer *out,Lustre_arrow_ctx_type* ctx){  *out = ((ctx->_memory)? i1 : i2);
  ctx->_memory = _false;

} // End of Lustre_arrow_step

// Memory initialisation for Lustre_pre_ctx
void Lustre_pre_ctx_reset(Lustre_pre_ctx_type* ctx){
}
// Memory allocation for Lustre_pre_ctx
Lustre_pre_ctx_type* Lustre_pre_ctx_new_ctx(){

   Lustre_pre_ctx_type* ctx = (Lustre_pre_ctx_type*)calloc(1, sizeof(Lustre_pre_ctx_type));
   // ctx->client_data = cdata;
   Lustre_pre_ctx_reset(ctx);
  return ctx;
}
// Step function(s) for Lustre_pre_ctx
void Lustre_pre_get(_boolean *out,Lustre_pre_ctx_type* ctx){
  *out = ctx->_memory;

} // End of Lustre_pre_get

void Lustre_pre_set(_boolean i1,Lustre_pre_ctx_type* ctx){
  ctx->_memory = i1;

} // End of Lustre_pre_set

// Memory initialisation for Lustre_pre_2_ctx
void Lustre_pre_2_ctx_reset(Lustre_pre_2_ctx_type* ctx){
}
// Memory allocation for Lustre_pre_2_ctx
Lustre_pre_2_ctx_type* Lustre_pre_2_ctx_new_ctx(){

   Lustre_pre_2_ctx_type* ctx = (Lustre_pre_2_ctx_type*)calloc(1, sizeof(Lustre_pre_2_ctx_type));
   // ctx->client_data = cdata;
   Lustre_pre_2_ctx_reset(ctx);
  return ctx;
}
// Step function(s) for Lustre_pre_2_ctx
void Lustre_pre_2_get(_integer *out,Lustre_pre_2_ctx_type* ctx){
  *out = ctx->_memory;

} // End of Lustre_pre_2_get

void Lustre_pre_2_set(_integer i1,Lustre_pre_2_ctx_type* ctx){
  ctx->_memory = i1;

} // End of Lustre_pre_2_set

// Memory initialisation for script_Car_TL_ctx
void script_Car_TL_ctx_reset(script_Car_TL_ctx_type* ctx){
  int _i;

    Lustre_pre_2_ctx_reset(&ctx->Lustre_pre_2_ctx_tab[0]);
    Lustre_pre_2_ctx_reset(&ctx->Lustre_pre_2_ctx_tab[1]);
    Lustre_pre_2_ctx_reset(&ctx->Lustre_pre_2_ctx_tab[2]);
    Lustre_pre_ctx_reset(&ctx->Lustre_pre_ctx_tab[0]);
    Lustre_arrow_ctx_reset(&ctx->Lustre_arrow_ctx_tab[0]);
    Lustre_arrow_2_ctx_reset(&ctx->Lustre_arrow_2_ctx_tab[0]);
    Lustre_arrow_2_ctx_reset(&ctx->Lustre_arrow_2_ctx_tab[1]);
    Lustre_arrow_2_ctx_reset(&ctx->Lustre_arrow_2_ctx_tab[2]);
}
// Memory allocation for script_Car_TL_ctx
script_Car_TL_ctx_type* script_Car_TL_ctx_new_ctx(){

   script_Car_TL_ctx_type* ctx = (script_Car_TL_ctx_type*)calloc(1, sizeof(script_Car_TL_ctx_type));
   // ctx->client_data = cdata;
   script_Car_TL_ctx_reset(ctx);
  return ctx;
}
// Step function(s) for script_Car_TL_ctx
void script_Car_TL_step(_boolean button,_boolean clear_to_green,_integer id,_boolean *red,_boolean *green,_boolean *yellow,script_Car_TL_ctx_type* ctx){   _boolean _split_19;
   _boolean _split_18;
   _boolean _split_17;
   _boolean _split_16;
   _boolean _split_15;
   _boolean _split_14;
   _integer _split_13;
   _integer _split_12;
   _integer _split_11;
   _integer _split_10;
   _boolean _split_9;
   _boolean _split_8;
   _integer _split_7;
   _integer _split_6;
   _boolean _split_5;
   _integer _split_4;
   _boolean _split_3;
   _integer _split_2;
   _boolean _split_1;
   _integer counter;

  Lustre_pre_get(&_split_3,&ctx->Lustre_pre_ctx_tab[0]); 
  Lustre_pre_2_get(&_split_4,&ctx->Lustre_pre_2_ctx_tab[2]); 
  _split_5 = _split_4 <= 4;
   if (_split_5 == _true) {
     _split_6 = 4;
   } else {
     _split_6 = 5;
   }
  Lustre_pre_2_get(&_split_10,&ctx->Lustre_pre_2_ctx_tab[0]); 
  _split_11 = _split_10 + 1;
  Lustre_pre_2_get(&_split_7,&ctx->Lustre_pre_2_ctx_tab[1]); 
  _split_8 = _split_7 >= 9;
  _split_9 = clear_to_green & _split_8;
   if (_split_9 == _true) {
     _split_12 = 0;
   } else {
     _split_12 = _split_11;
   }
   if (_split_3 == _true) {
     _split_13 = _split_6;
   } else {
     _split_13 = _split_12;
   }
  _split_1 = id == 0;
   if (_split_1 == _true) {
     _split_2 = 0;
   } else {
     _split_2 = 5;
   }
  Lustre_arrow_step(_split_2,_split_13,&counter,&ctx->Lustre_arrow_ctx_tab[0]); 
  Lustre_pre_2_set(counter,&ctx->Lustre_pre_2_ctx_tab[0]); 
  Lustre_pre_2_set(counter,&ctx->Lustre_pre_2_ctx_tab[1]); 
  Lustre_pre_2_set(counter,&ctx->Lustre_pre_2_ctx_tab[2]); 
  Lustre_pre_set(button,&ctx->Lustre_pre_ctx_tab[0]); 
  _split_16 = counter > 4;
  _split_14 = id == 0;
  _split_15 = ! _split_14;
  Lustre_arrow_2_step(_split_15,_split_16,red,&ctx->Lustre_arrow_2_ctx_tab[0]); 
  _split_18 = counter < 4;
  _split_17 = id == 0;
  Lustre_arrow_2_step(_split_17,_split_18,green,&ctx->Lustre_arrow_2_ctx_tab[1]); 
  _split_19 = counter == 4;
  Lustre_arrow_2_step(_false,_split_19,yellow,&ctx->Lustre_arrow_2_ctx_tab[2]); 

} // End of script_Car_TL_step

// Memory initialisation for script_Main_ctx
void script_Main_ctx_reset(script_Main_ctx_type* ctx){
  int _i;

    script_Pedestrian_TL_ctx_reset(&ctx->script_Pedestrian_TL_ctx_tab[0]);
    script_Pedestrian_TL_ctx_reset(&ctx->script_Pedestrian_TL_ctx_tab[1]);
    script_Car_TL_ctx_reset(&ctx->script_Car_TL_ctx_tab[0]);
    script_Car_TL_ctx_reset(&ctx->script_Car_TL_ctx_tab[1]);  for (_i=0 ; _i<4 ; _i+=1){
    Lustre_pre_2_ctx_reset(&ctx->Lustre_pre_2_ctx_tab[_i]);
 }
    Lustre_pre_ctx_reset(&ctx->Lustre_pre_ctx_tab[0]);
    Lustre_pre_ctx_reset(&ctx->Lustre_pre_ctx_tab[1]);
}
// Memory allocation for script_Main_ctx
script_Main_ctx_type* script_Main_ctx_new_ctx(){

   script_Main_ctx_type* ctx = (script_Main_ctx_type*)calloc(1, sizeof(script_Main_ctx_type));
   // ctx->client_data = cdata;
   script_Main_ctx_reset(ctx);
  return ctx;
}
// Step function(s) for script_Main_ctx
void script_Main_step(_boolean NS_button,_boolean EW_button,_integer *NS_Cars,_integer *EW_Cars,_integer *NS_Ped,_integer *EW_Ped,script_Main_ctx_type* ctx){   _integer _split_31;
   _integer _split_30;
   _integer _split_29;
   _integer _split_28;
   _integer _split_27;
   _integer _split_26;
   _integer _split_25;
   _integer _split_24;
   _integer _split_23;
   _integer _split_22;
   _boolean _split_21;
   _boolean _split_20;
   _boolean P_NS_R;
   _boolean P_NS_G;
   _boolean P_EW_R;
   _boolean P_EW_G;
   _boolean NS_R;
   _boolean NS_Y;
   _boolean NS_G;
   _boolean EW_R;
   _boolean EW_Y;
   _boolean EW_G;
   _integer id0;
   _integer id1;

  id0 = 0;
  id1 = 1;
  Lustre_pre_get(&_split_20,&ctx->Lustre_pre_ctx_tab[0]); 
  Lustre_pre_get(&_split_21,&ctx->Lustre_pre_ctx_tab[1]); 
  script_Car_TL_step(EW_button,_split_21,id1,&EW_R,&EW_G,&EW_Y,&ctx->script_Car_TL_ctx_tab[1]); 
  Lustre_pre_set(EW_R,&ctx->Lustre_pre_ctx_tab[0]); 
  script_Car_TL_step(NS_button,_split_20,id0,&NS_R,&NS_G,&NS_Y,&ctx->script_Car_TL_ctx_tab[0]); 
  Lustre_pre_set(NS_R,&ctx->Lustre_pre_ctx_tab[1]); 
  script_Pedestrian_TL_step(NS_button,&P_NS_R,&P_NS_G,&ctx->script_Pedestrian_TL_ctx_tab[0]); 
  script_Pedestrian_TL_step(EW_button,&P_EW_R,&P_EW_G,&ctx->script_Pedestrian_TL_ctx_tab[1]); 
  Lustre_pre_2_get(&_split_22,&ctx->Lustre_pre_2_ctx_tab[0]); 
   if (NS_G == _true) {
     _split_23 = 2;
   } else {
     _split_23 = _split_22;
   }
   if (NS_Y == _true) {
     _split_24 = 1;
   } else {
     _split_24 = _split_23;
   }
   if (NS_R == _true) {
     *NS_Cars = 0;
   } else {
     *NS_Cars = _split_24;
   }
  Lustre_pre_2_set(*NS_Cars,&ctx->Lustre_pre_2_ctx_tab[0]); 
  Lustre_pre_2_get(&_split_25,&ctx->Lustre_pre_2_ctx_tab[1]); 
   if (EW_G == _true) {
     _split_26 = 2;
   } else {
     _split_26 = _split_25;
   }
   if (EW_Y == _true) {
     _split_27 = 1;
   } else {
     _split_27 = _split_26;
   }
   if (EW_R == _true) {
     *EW_Cars = 0;
   } else {
     *EW_Cars = _split_27;
   }
  Lustre_pre_2_set(*EW_Cars,&ctx->Lustre_pre_2_ctx_tab[1]); 
  Lustre_pre_2_get(&_split_28,&ctx->Lustre_pre_2_ctx_tab[2]); 
   if (P_NS_G == _true) {
     _split_29 = 2;
   } else {
     _split_29 = _split_28;
   }
   if (P_NS_R == _true) {
     *NS_Ped = 0;
   } else {
     *NS_Ped = _split_29;
   }
  Lustre_pre_2_set(*NS_Ped,&ctx->Lustre_pre_2_ctx_tab[2]); 
  Lustre_pre_2_get(&_split_30,&ctx->Lustre_pre_2_ctx_tab[3]); 
   if (P_EW_G == _true) {
     _split_31 = 2;
   } else {
     _split_31 = _split_30;
   }
   if (P_EW_R == _true) {
     *EW_Ped = 0;
   } else {
     *EW_Ped = _split_31;
   }
  Lustre_pre_2_set(*EW_Ped,&ctx->Lustre_pre_2_ctx_tab[3]); 

} // End of script_Main_step

// Memory initialisation for script_Pedestrian_TL_ctx
void script_Pedestrian_TL_ctx_reset(script_Pedestrian_TL_ctx_type* ctx){
  int _i;

    Lustre_pre_2_ctx_reset(&ctx->Lustre_pre_2_ctx_tab[0]);
    Lustre_pre_2_ctx_reset(&ctx->Lustre_pre_2_ctx_tab[1]);
    Lustre_pre_2_ctx_reset(&ctx->Lustre_pre_2_ctx_tab[2]);
    Lustre_pre_ctx_reset(&ctx->Lustre_pre_ctx_tab[0]);
    Lustre_arrow_ctx_reset(&ctx->Lustre_arrow_ctx_tab[0]);
    Lustre_arrow_2_ctx_reset(&ctx->Lustre_arrow_2_ctx_tab[0]);
    Lustre_arrow_2_ctx_reset(&ctx->Lustre_arrow_2_ctx_tab[1]);
}
// Memory allocation for script_Pedestrian_TL_ctx
script_Pedestrian_TL_ctx_type* script_Pedestrian_TL_ctx_new_ctx(){

   script_Pedestrian_TL_ctx_type* ctx = (script_Pedestrian_TL_ctx_type*)calloc(1, sizeof(script_Pedestrian_TL_ctx_type));
   // ctx->client_data = cdata;
   script_Pedestrian_TL_ctx_reset(ctx);
  return ctx;
}
// Step function(s) for script_Pedestrian_TL_ctx
void script_Pedestrian_TL_step(_boolean button,_boolean *red,_boolean *green,script_Pedestrian_TL_ctx_type* ctx){   _boolean _split_43;
   _boolean _split_42;
   _integer _split_41;
   _integer _split_40;
   _integer _split_39;
   _boolean _split_38;
   _boolean _split_37;
   _boolean _split_36;
   _integer _split_35;
   _boolean _split_34;
   _integer _split_33;
   _boolean _split_32;
   _integer counter;

  Lustre_pre_get(&_split_32,&ctx->Lustre_pre_ctx_tab[0]); 
  Lustre_pre_2_get(&_split_33,&ctx->Lustre_pre_2_ctx_tab[2]); 
  _split_34 = _split_33 > 0;
  Lustre_pre_2_get(&_split_35,&ctx->Lustre_pre_2_ctx_tab[1]); 
  _split_36 = _split_35 <= 5;
  _split_37 = _split_34 & _split_36;
  _split_38 = _split_32 | _split_37;
  Lustre_pre_2_get(&_split_39,&ctx->Lustre_pre_2_ctx_tab[0]); 
  _split_40 = _split_39 + 1;
   if (_split_38 == _true) {
     _split_41 = _split_40;
   } else {
     _split_41 = 0;
   }
  Lustre_arrow_step(0,_split_41,&counter,&ctx->Lustre_arrow_ctx_tab[0]); 
  Lustre_pre_2_set(counter,&ctx->Lustre_pre_2_ctx_tab[0]); 
  Lustre_pre_2_set(counter,&ctx->Lustre_pre_2_ctx_tab[1]); 
  Lustre_pre_2_set(counter,&ctx->Lustre_pre_2_ctx_tab[2]); 
  Lustre_pre_set(button,&ctx->Lustre_pre_ctx_tab[0]); 
  _split_42 = counter < 2;
  Lustre_arrow_2_step(_true,_split_42,red,&ctx->Lustre_arrow_2_ctx_tab[0]); 
  _split_43 = counter >= 2;
  Lustre_arrow_2_step(_false,_split_43,green,&ctx->Lustre_arrow_2_ctx_tab[1]); 

} // End of script_Pedestrian_TL_step

