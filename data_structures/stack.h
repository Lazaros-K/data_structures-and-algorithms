#ifndef STACK_STRUCT
#define STACK_STRUCT

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * Stack object
 * @top = pointer to top element
 * @length = the number of elements
 */
typedef struct {
  int* top;
  int length;
  int* data;
  int size;
} st;

bool st_init(st* st,int n);

  //---------------------//
 //      FUNCTIONS      //
//---------------------//

inline static int st_size(st st) { return st.size; }

inline static int st_length(st st) { return st.length; }

inline static bool st_empty(st st) { return st.length == 0; }

inline static int st_peek(st st) { return (st_empty(st)) ? false : *st.top; }

void st_print(st st);

  //---------------------//
 //   AFFECT STRUCTURE  //
//---------------------//

bool st_push(st* st, int data);

bool st_pop(st* st);







#endif