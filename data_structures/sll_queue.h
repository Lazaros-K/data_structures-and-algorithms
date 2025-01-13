#ifndef SLL_QUEUE_STRUCT
#define SLL_QUEUE_STRUCT

#include <stdio.h>
#include <stdbool.h>
#include "sll_plus.h"

/**
 * Single Linked List Plus based Queue object
 * @head = pointer to first element
 * @tail = pointer to last element
 * @length = the number of elements
 */
typedef sllp sllqu;

/* Initialize sll */
inline static void sllqu_init(sllqu* qu) { sllp_init(qu); }

  //---------------------//
 //      FUNCTIONS      //
//---------------------//

inline static int sllqu_length(sllqu qu) { return qu.length; }

inline static bool sllqu_empty(sllqu qu) { return qu.length == 0; }

inline static int sllqu_peek(sllqu qu) { return (sllqu_empty(qu)) ? false : qu.head->data ; }

static void sllqu_print(sllqu qu) {
  if(sllqu_empty(qu)) { printf("> (0)\n"); return;}
  printf("> %d ..(%d)\n",sllqu_peek(qu),qu.length);
}

  //---------------------//
 //   AFFECT STRUCTURE  //
//---------------------//

inline static bool sllqu_enqueue(sllqu* qu, int data) { return sllp_add_node_tail(qu,data); }

inline static bool sllqu_dequeue(sllqu* qu) { return sllp_remove_node_head(qu); }








#endif