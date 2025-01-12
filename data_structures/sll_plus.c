#include <stdio.h>
#include <stdbool.h>
#include "single_linked_list.h"
#include "sll_plus.h"

  //---------------------//
 //      FUNCTIONS      //
//---------------------//



  //---------------------//
 //        INDEX        //
//---------------------//

int sllp_i(sllp list,int index) {
  if(sllp_empty(list)) { return 0; }
  if(index >= list.length-1) {
    if(index == list.length -1) { return sllp_tail(list); }
    return sllp_head(list);
  }

  sllnode* nodeptr = list.head;
  for (int i = 0; i < index; i++)
  {
    nodeptr = nodeptr->next;
  }
  return nodeptr->data;
}


  //---------------------//
 //   AFFECT STRUCTURE  //
//---------------------//

bool sllp_add_node_tail(sllp* list, int data) {
  sllnode* node;
  if(sllp_empty(*list)) { node = sll_add_node_head(&(list->head)); }
  else {node = sllnode_add_next(list->tail); }

  if(node == NULL) { return false; }
  list->tail = node;
  list->length ++;
  node->data = data;
  return true;
}

bool sllp_add_node_head(sllp* list, int data) {
  sllnode* node = sll_add_node_head(&(list->head));
  if(node == NULL) { return false; }
  node->data = data;
  list->length++;
  return true;
}

bool sllp_add_node(sllp* list,int index, int data) {
  sllnode* node;
  if(index == list->length-1) {
    node = sll_add_node_tail(&(list->head));
    if(node == NULL) { return false; }
    list->tail = node;
  }
  else {
    node = sll_add_node(&(list->head),index);
  }
  
  if(node == NULL) { return false; }
  node->data = data;
  list->length++;
  return true;
}








bool sllp_remove_node_tail(sllp* list) {
  if(list->length <= 0) { return false; }

  sllnode* node = sll_remove_node_tail(&(list->head));
  if(node == NULL) { return false; }
  list->length--;
  list->tail = node;
  return true;
}

bool sllp_remove_node_head(sllp* list) {
  if(list->length <= 0) { return false; }

  list->length--;
  return (sll_remove_node_head(&(list->head)) == NULL) ? false : true;
}

bool sllp_remove_node(sllp* list,int index) {  sllnode* node;
  if(list->length <= 0) { return false; }

  if(index == list->length-1) {
    node = sll_remove_node_tail(&(list->head));
    if(node == NULL) { return false; }
    list->tail = node;
    list->length--;
    return true;
  }
  
  node = sll_add_node(&(list->head),index);  
  if(node == NULL) { return false; }
  list->length--;
  return true;
}
