#ifndef SINGLE_LINKED_LIST_STRUCT
#define SINGLE_LINKED_LIST_STRUCT

#include <stdio.h>
#include <stdbool.h>
#include "sll_node.h"

/**
 * Single linked list obeject
 * basicly a pointer to the first element
 */
typedef sllnode* sll;

/* Initialize sll */
inline static sll sll_init(sll* list) {
  (*list) = NULL;
  return *list;
}

  //---------------------//
 //      FUNCTIONS      //
//---------------------//

inline static bool sll_empty(sll list) {
    if(list == NULL) { return true; }
    return false;
}

inline static int sll_length(sll list) {
  sllnode_chain_length(*list);
};

void sll_print(sll list);

int sll_search(sll list,int data);


  //---------------------//
 //        INDEX        //
//---------------------//

sllnode* sll_head(sll list);

// returns last node (NULL if empty)
sllnode* sll_tail(sll nodeptr);

inline static sllnode* sll_get_node(sll list,int index) {
  if (sll_empty(list)) { return NULL; }
  return sllnode_next_i(list,index);
}

inline static int sll_i(sll list,int index) {
    return sllnode_next_i(list,index)->data;
}


  //---------------------//
 //   AFFECT STRUCTURE  //
//---------------------//

sllnode* sll_add_node_tail(sll* list);

sllnode* sll_add_node_head(sll* list);

sllnode* sll_add_node(sll* list,int index);

sllnode* sll_remove_node_tail(sll* list);

sllnode* sll_remove_node_head(sll* list);

sllnode* sll_remove_node(sll* list,int index);









#endif