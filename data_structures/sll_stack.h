#ifndef SLL_STACK_STRUCT
#define SLL_STACK_STRUCT

#include <stdio.h>
#include <stdbool.h>
#include "single_linked_list.h"

/**
 * Stack object
 * @top = pointer to top element
 * @length = the number of elements
 */
typedef struct {
  sllnode* top;
  int length;
} sllst;

/* Initialize sll */
inline static void sllst_init(sllst* st) {
  st->length = 0;
  st->top = NULL;
}

  //---------------------//
 //      FUNCTIONS      //
//---------------------//

inline static int sllst_size(sllst st) {
  return st.length;
}

inline static bool sllst_empty(sllst st) {
  return st.length == 0;
}

inline static int sllst_peek(sllst st) {
  return (sllst_empty(st)) ? false : st.top->data;
}

inline static void sllst_print(sllst st) {
  printf("> %d |(%d)\n",sllst_peek(st),st.length);
}

  //---------------------//
 //   AFFECT STRUCTURE  //
//---------------------//

inline static sllst* sllst_push(sllst* st, int data) {
  sll_add_node_head(&(st->top))->data = data;
  (st->length) ++;
  return st;
}

inline static sllst* sllst_pop(sllst* st) {
  sll_remove_node_head(&(st->top));
  (st->length) --;
  return st;
}








#endif