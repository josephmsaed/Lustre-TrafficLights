/* This file was generated by lv6 version v6.106.1. */
/*  lv6 script.lus -node Car_TL -2c -cc */
/* on linux the 19/01/2023 at 01:22:32 */
#include "script_Car_TL.h"
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
void Lustre_pre_2_get(_boolean *out,Lustre_pre_2_ctx_type* ctx){
  *out = ctx->_memory;

} // End of Lustre_pre_2_get

void Lustre_pre_2_set(_boolean i1,Lustre_pre_2_ctx_type* ctx){
  ctx->_memory = i1;

} // End of Lustre_pre_2_set

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
void Lustre_pre_get(_integer *out,Lustre_pre_ctx_type* ctx){
  *out = ctx->_memory;

} // End of Lustre_pre_get

void Lustre_pre_set(_integer i1,Lustre_pre_ctx_type* ctx){
  ctx->_memory = i1;

} // End of Lustre_pre_set

// Memory initialisation for script_Car_TL_ctx
void script_Car_TL_ctx_reset(script_Car_TL_ctx_type* ctx){
  int _i;

    Lustre_pre_ctx_reset(&ctx->Lustre_pre_ctx_tab[0]);
    Lustre_pre_ctx_reset(&ctx->Lustre_pre_ctx_tab[1]);
    Lustre_pre_ctx_reset(&ctx->Lustre_pre_ctx_tab[2]);
    Lustre_pre_2_ctx_reset(&ctx->Lustre_pre_2_ctx_tab[0]);
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

  Lustre_pre_2_get(&_split_3,&ctx->Lustre_pre_2_ctx_tab[0]); 
  Lustre_pre_get(&_split_4,&ctx->Lustre_pre_ctx_tab[2]); 
  _split_5 = _split_4 <= 4;
   if (_split_5 == _true) {
     _split_6 = 4;
   } else {
     _split_6 = 5;
   }
  Lustre_pre_get(&_split_10,&ctx->Lustre_pre_ctx_tab[0]); 
  _split_11 = _split_10 + 1;
  Lustre_pre_get(&_split_7,&ctx->Lustre_pre_ctx_tab[1]); 
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
  Lustre_pre_set(counter,&ctx->Lustre_pre_ctx_tab[0]); 
  Lustre_pre_set(counter,&ctx->Lustre_pre_ctx_tab[1]); 
  Lustre_pre_set(counter,&ctx->Lustre_pre_ctx_tab[2]); 
  Lustre_pre_2_set(button,&ctx->Lustre_pre_2_ctx_tab[0]); 
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

