#ifndef QUEUE_STRUCT
#define QUEUE_STRUCT

#include <stdbool.h>
#include <stdlib.h>

typedef struct qu_ {
    int* data;
    int length;
    int size;
} qu;

static inline void qu_init(qu* queue, int n) {
    queue->data = (int*) malloc(sizeof(int) * n);
    queue->length = 0;
    queue->size = n;
}

  //---------------------//
 //      FUNCTIONS      //
//---------------------//

inline static int qu_length(qu q) { return q.length; }
inline static int qu_size(qu q) { return q.size; }
inline static bool qu_empty(qu q) { return q.length == 0; }
inline static int qu_peek(qu q) { return (qu_empty(q)) ? false : q.data[0] ; }

void qu_print(qu queue);

  //---------------------//
 //   AFFECT STRUCTURE  //
//---------------------//

bool qu_enqueue(qu* queue, int data);

bool qu_dequeue(qu* queue);

#endif