/* This file was generated by lv6 version v6.106.1. */
/*  lv6 script.lus -node Car_TL -2c -cc */
/* on linux the 19/01/2023 at 01:22:32 */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "script_Car_TL.h" 
/* Print a promt ? ************************/
static int ISATTY;
/* MACROS DEFINITIONS ****************/
#ifndef TT
#define TT "1"
#endif
#ifndef FF
#define FF "0"
#endif
#ifndef BB
#define BB "bottom"
#endif
#ifdef CKCHECK
/* set this macro for testing output clocks */
#endif

void _read_pragma(script_Car_TL_ctx_type* ctx,char b[]) {

   if (!strcmp(b,"#quit")) exit(0);
   if (!strcmp(b,"#q")) exit(0);
   if (!strcmp(b,"#reset")) script_Car_TL_ctx_reset(ctx);

}
char* _get_string(script_Car_TL_ctx_type* ctx,char* n){
   static char b[10] = "dummy";
   return b;
}
/* Standard Input procedures **************/
_boolean _get_bool(script_Car_TL_ctx_type* ctx,char* n){
   char b[512];
   char c;
   _boolean r = 0;
   int s = 1;
   do {
      if(ISATTY) {
         if((s != 1)||(r == -1)) printf("\a");
         // printf("%s (1,t,T/0,f,F) ? ", n);
      }
      if(scanf("%s", b)==EOF) exit(0);
      r = -1;
      c=b[0];
      if(c == 'q') exit(0);
      if(c == '#') _read_pragma(ctx,b);
      if((c == '0') || (c == 'f') || (c == 'F')) r = 0;
      if((c == '1') || (c == 't') || (c == 'T')) r = 1;
   } while((s != 1) || (r == -1));
   return r;
}
_integer _get_int(script_Car_TL_ctx_type* ctx,char* n){
   char b[512];
   _integer r;
   int s = 1;
   do {
      if(ISATTY) {
         if(s != 1) printf("\a");
         //printf("%s (integer) ? ", n);
      }
      if(scanf("%s", b)==EOF) exit(0);
      if(*b == 'q') exit(0);
      if(*b == '#') {
         _read_pragma(ctx,b);
      } else {
        s = sscanf(b, "%d", &r);
      }
   } while(s != 1);
   return r;
}
#define REALFORMAT ((sizeof(_real)==8)?"%lf":"%f")
_real _get_real(script_Car_TL_ctx_type* ctx,char* n){
   char b[512];
   _real r;
   int s = 1;
   do {
      if(ISATTY) {
         if(s != 1) printf("\a");
         //printf("%s (real) ? ", n);
      }
      if(scanf("%s", b)==EOF) exit(0);
      if(*b == 'q') exit(0);
      if(*b == '#') {
         _read_pragma(ctx,b);
      } else {
         s = sscanf(b, REALFORMAT, &r);
      }
   } while(s != 1);
   return r;
}
/* Standard Output procedures **************/
void _put_bottom(char* n){
   if(ISATTY) printf("%s = ", n);
   printf("%s ", BB);
   if(ISATTY) printf("\n");
}
void _put_bool(char* n, _boolean _V){
   if(ISATTY) printf("%s = ", n);
   printf("%s ", (_V)? TT : FF);
   if(ISATTY) printf("\n");
}
void _put_int(char* n, _integer _V){
   if(ISATTY) printf("%s = ", n);
   printf("%d ", _V);
   if(ISATTY) printf("\n");
}
void _put_real(char* n, _real _V){
   if(ISATTY) printf("%s = ", n);
   printf("%f ", _V);
   if(ISATTY) printf("\n");
}
void _put_string(char* n, char* _V){
   if(ISATTY) printf("%s = ", n);
   printf("%s ", _V);
   if(ISATTY) printf("\n");
}

/* Output procedures **********************/
#ifdef CKCHECK
void %s_BOT_n(void* cdata){
   _put_bottom("n");
}
#endif

/* Main procedure *************************/
int main(){
  int _s = 0;
  _boolean button;
  _boolean clear_to_green;
  _integer id;
  _boolean red;
  _boolean green;
  _boolean yellow;
    script_Car_TL_ctx_type* ctx = script_Car_TL_ctx_new_ctx(NULL);

  printf("#inputs \"button\":bool \"clear_to_green\":bool \"id\":int\n");
  printf("#outputs \"red\":bool \"green\":bool \"yellow\":bool\n");

  /* Main loop */
  ISATTY = isatty(0);
  while(1){
    if (ISATTY) printf("#step %d \n", _s+1);
    else if(_s) printf("\n");
    fflush(stdout);
    ++_s;
    button = _get_bool(ctx,"button");
    clear_to_green = _get_bool(ctx,"clear_to_green");
    id = _get_int(ctx,"id");
    script_Car_TL_step(button,clear_to_green,id,&red,&green,&yellow,ctx);
    // printf("%d %d %d #outs %d %d %d\n",button,clear_to_green,id,red,green,yellow);
    printf("%d %d %d\n",red,green,yellow);
  }
  return 1;
   
}
