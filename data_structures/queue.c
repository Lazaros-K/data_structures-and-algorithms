#include <stdio.h>
#include <stdbool.h>
#include "queue.h"

bool qu_init(qu* queue, int n) {
  queue->length = 0;
  queue->head = (int*) malloc(sizeof(int) * n);
  if(queue->head == NULL) {
    queue->size = 0;
    return false;
  }
  queue->size = n;
}

  //---------------------//
 //      FUNCTIONS      //
//---------------------//

void qu_print(qu queue) {
    if(queue.length <= 0 ) { printf("> ...(0)\n"); return; }
    else { printf("> %d ...(%d)\n", queue.head[0], queue.length); }
}

  //---------------------//
 //   AFFECT STRUCTURE  //
//---------------------//

bool qu_enqueue(qu* queue, int data) {
    if((queue->length+1) > queue->size ) { return false; }
    (queue->length)++;
    queue->head[queue->length-1] = data;
    return true;
}

bool qu_dequeue(qu* queue) {
    if((queue->length-1) < 0 ) { return false; }
    for (int i = 0; i < qu_length(*queue); i++) {
        (*queue).head[i] = (*queue).head[i+1];
    }
    (queue->length)--;
    return true;
}

