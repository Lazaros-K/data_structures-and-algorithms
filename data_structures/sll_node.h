#ifndef SLL_NODE_STRUCT
#define SLL_NODE_STRUCT

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * Single linked list node
 * @next = pointer to next
 * @data = int number
 */
typedef struct sllnode_ {
    struct sllnode_* next;
    int data;
} sllnode;

inline static sllnode* sllnode_init(sllnode* node) {
  node->next = NULL;
  return node;
}

  //---------------------//
 //      FUNCTIONS      //
//---------------------//

int sllnode_chain_length(sllnode node);

inline static sllnode* sllnode_create() {
  return (sllnode*) malloc(sizeof(sllnode));
}

sllnode* sllnode_next_i(sllnode* node,int index);

  //-----------------//
 //   AFFECT NODES  //
//-----------------//

sllnode* sllnode_add_next(sllnode* node);

sllnode* sllnode_remove_next(sllnode* node);







#endif