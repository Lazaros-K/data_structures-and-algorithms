#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "sll_node.h"

  //---------------------//
 //      FUNCTIONS      //
//---------------------//

sllnode* sllnode_next_i(sllnode* node,int index) {
  for(int i = 0; i < index; i++) {
      if(node->next == NULL) {
        printf(" ! Index out of bounds\n");
        return NULL;
      }
      node = node->next;
  }
  return node;
}

int sllnode_chain_length(sllnode node) {
  int i = 0;
  while(node.next != NULL) {
    node = *(node.next);
    i++;
  }
  return i;
}

  //-----------------//
 //   AFFECT NODES  //
//-----------------//

sllnode* sllnode_add_next(sllnode* node) {
  sllnode* newnode = sllnode_create();
  if(newnode == NULL) return NULL;
  newnode->next = node->next;
  node->next = newnode;
  return newnode;
}

sllnode* sllnode_remove_next(sllnode* node) {
  sllnode* tmp = node->next->next;
  free(node->next);
  node->next = tmp;
  return node;
}