#ifndef SLL_STACK_STRUCT
#define SLL_STACK_STRUCT

#include <stdio.h>
#include <stdbool.h>
#include "single_linked_list.h"

/**
 * Single Linked List based Stack object
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

inline static int sllst_length(sllst st) {
  return st.length;
}

inline static bool sllst_empty(sllst st) {
  return st.length == 0;
}

inline static int sllst_peek(sllst st) {
  return (sllst_empty(st)) ? false : st.top->data;
}

static void sllst_print(sllst st) {
    if(st.length <= 0 ) { printf("> |(0)"); return; }
    else { printf("> %d |(%d)\n", st.top[0], st.length); }
}

  //---------------------//
 //   AFFECT STRUCTURE  //
//---------------------//

inline static bool sllst_push(sllst* st, int data) {
  sllnode* node = sll_add_node_head(&(st->top));
  if(node == NULL) { return false; }
  (st->length) ++;
  return true;
}

inline static bool sllst_pop(sllst* st) {
  if(st->length <= 0) { return false; }
  sllnode* node = sll_remove_node_head(&(st->top));
  if(node == NULL) { return false; }
  (st->length) --;
  return true;
}








#endif