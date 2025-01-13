
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "stack.h"

bool st_init(st* st,int n) {
  st->length = 0;
  st->data = (int*) malloc(sizeof(int)*n);
  if(st->data == NULL) {
    st->size = 0;
    st->top = NULL;
    return false;
  }
  st->top = st->data;
  st->size = n;
  return true;
}

  //---------------------//
 //      FUNCTIONS      //
//---------------------//

void st_print(st st) {
  if(st.length <= 0 ) { printf("> |(0)\n"); return; }
  else { printf("> %d |(%d)\n", st.top[0], st.length); }
}

  //---------------------//
 //   AFFECT STRUCTURE  //
//---------------------//

bool st_push(st* st, int data) {
  if((st->length+1) > st->size ) { return false; }

  (st->length)++;
  st->top = &(st->data[st->length-1]);
  *(st->top) = data;
  return true;
}

bool st_pop(st* st) {
  if(st->length <= 0) { return false; }
  
  (st->length)--;
  st->top = &(st->data[st->length-1]);
  return true;
}

