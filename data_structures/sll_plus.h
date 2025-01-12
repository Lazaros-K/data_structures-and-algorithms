#ifndef SINGLE_LINKED_LIST_PLUS_STRUCT
#define SINGLE_LINKED_LIST_PLUS_STRUCT

#include <stdio.h>
#include <stdbool.h>
#include "single_linked_list.h"

/**
 * Single linked list plus object
 * @head = pointer to first element
 * @tail = pointer to last element
 * @length = the number of elements
 */
typedef struct {
  sllnode* head;
  sllnode* tail;
  int length; 
} sllp;

/* Initialize sllp*/
inline static void sllp_init(sllp* list) {
  list->head = NULL;
  list->tail = NULL;
  list->length = 0;
}

  //---------------------//
 //      FUNCTIONS      //
//---------------------//

inline static bool sllp_empty(sllp list) { return sll_empty(list.head); }

inline static int sllp_length(sllp list) { return list.length; }

inline static void sllp_print(sllp list) { sll_print(list.head); }

inline static int sllp_search(sllp list,int data) { sll_search(list.head,data); }


  //---------------------//
 //        INDEX        //
//---------------------//

inline static int sllp_head(sllp list) { return list.head->data; }

inline static int sllp_tail(sllp list) { return list.tail->data; }

int sllp_i(sllp list,int index);


  //---------------------//
 //   AFFECT STRUCTURE  //
//---------------------//

bool sllp_add_node_tail(sllp* list, int data);

bool sllp_add_node_head(sllp* list, int data);

bool sllp_add_node(sllp* list,int index, int data);



bool sllp_remove_node_tail(sllp* list);

bool sllp_remove_node_head(sllp* list);

bool sllp_remove_node(sllp* list,int index);





#endif