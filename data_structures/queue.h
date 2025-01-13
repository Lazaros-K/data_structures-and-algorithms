#ifndef QUEUE_STRUCT
#define QUEUE_STRUCT

#include <stdbool.h>
#include <stdlib.h>

typedef struct qu_ {
    int* head;
    int length;
    int size;
} qu;

bool qu_init(qu* queue, int n);

  //---------------------//
 //      FUNCTIONS      //
//---------------------//

inline static int qu_length(qu q) { return q.length; }
inline static int qu_size(qu q) { return q.size; }
inline static bool qu_empty(qu q) { return q.length == 0; }
inline static int qu_peek(qu q) { return (qu_empty(q)) ? false : q.head[0] ; }

void qu_print(qu queue);

  //---------------------//
 //   AFFECT STRUCTURE  //
//---------------------//

bool qu_enqueue(qu* queue, int data);

bool qu_dequeue(qu* queue);

#endif