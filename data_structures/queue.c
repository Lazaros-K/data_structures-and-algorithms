#include <stdio.h>
#include <stdbool.h>
#include "queue.h"


  //---------------------//
 //      FUNCTIONS      //
//---------------------//

void qu_print(qu queue) {
    if(queue.length <= 0 ) { printf("> ...(0)"); return; }
    else { printf("> %d ...(%d)\n", queue.data[0], queue.length); }
}

  //---------------------//
 //   AFFECT STRUCTURE  //
//---------------------//

bool qu_enqueue(qu* queue, int data) {
    if((queue->length+1) > queue->size ) { return false; }
    (queue->length)++;
    queue->data[queue->length-1] = data;
    return true;
}

bool qu_dequeue(qu* queue) {
    if((queue->length-1) < 0 ) { return false; }
    for (int i = 0; i < qu_length(*queue); i++) {
        (*queue).data[i] = (*queue).data[i+1];
    }
    (queue->length)--;
    return true;
}

