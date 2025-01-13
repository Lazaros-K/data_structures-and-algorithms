#include <stdio.h>
#include <stdlib.h>
#include "single_linked_list.h"
#include "sll_node.h"


  //---------------------//
 //      FUNCTIONS      //
//---------------------//

void sll_print(sll list) {
    printf(">");
    sllnode* ptr = list;
    while(ptr != NULL) {
        printf(" %d", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

int sll_search(sll list,int data) {
    sllnode *node = list;
    if (sll_empty(list)) { return -1; }
    
    int i = 0;
    while(true) {
        if (data == node->data)
        {
            return i;
        }
        if (node->next == NULL) {
            break;
        }
        node = node->next;
        i ++;
    }

    return -1;
}

  //---------------------//
 //        INDEX        //
//---------------------//

inline sllnode* sll_head(sll list) {
    return list;
}

sllnode* sll_tail(sll list) {
    if (sll_empty(list)) { return NULL; }
    while(list->next != NULL) {
        list = list->next;
    }
    return list;
}


  //---------------------//
 //      ADD NODES      //
//---------------------//

sllnode* sll_add_node_tail(sll* list) {
    if(*list == NULL) {
        return *list = sllnode_init(sllnode_create());
    }
    sllnode* tail = sll_tail(*list);
    return sllnode_add_next(tail);
}

sllnode* sll_add_node_head(sll* list) {
    if(*list == NULL) {
        return *list = sllnode_init(sllnode_create());
    }
    sllnode* newnode = sllnode_create();
    newnode->next = (*list);
    (*list) = newnode;
    return newnode;
}

sllnode* sll_add_node(sll* list, int index) {
    if (*list == NULL) { return NULL; }
    sllnode* nodeptr = sll_get_node(*list,index);
    return sllnode_add_next(nodeptr);
}


  //---------------------//
 //     REMOVE NODES    //
//---------------------//

sllnode* sll_remove_node_tail(sll* list) {
    if(sll_empty(*list)) {return NULL; }
    
    if((*list)->next == NULL) {
        
        free(*list);
        (*list) = NULL;
        return (*list);
    }

    sllnode* ptr = *list;
    while(ptr->next->next != NULL) {
        ptr = ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;

    return ptr;
}

sllnode* sll_remove_node_head(sll* list) {
    if(sll_empty(*list)) {return NULL; }
    
    sllnode* tmp = (*list)->next;
    free(*list);
    (*list) = tmp;

    return *list;
}

sllnode* sll_remove_node(sll* list,int index) {

    if(index == 0) {
        return sll_remove_node_head(list);
    }

    sllnode* nodeptr = sll_get_node(*list,index-1);
    if(nodeptr == NULL) {
        return NULL;
    }
    
    sllnode_remove_next(nodeptr);
}