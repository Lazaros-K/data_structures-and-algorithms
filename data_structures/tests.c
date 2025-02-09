
#include <stdio.h>
#include <stdbool.h>
#include "single_linked_list.h"
#include "sll_stack.h"
#include "sll_queue.h"
#include "queue.h"
#include "stack.h"
#include "../tools/functions.h"
#include "../search_algorithms/search_algorithms.h"
#include "../sort_algorithms/sort_algorithms.h"

bool test_sll() {
    
    printf("quick show case of the single liked list (sll). \n");

    sll list;
    sll_init(&list);

    printf("lenght: %d\n", list);

    (*sll_add_node_tail(&list)).data = 7;
    (*sll_add_node_head(&list)).data = 8;
    (*sll_add_node_head(&list)).data = 7;
    (*sll_add_node_head(&list)).data = 9;

    printf("lenght: %d\n", sll_length(list));

    sll_print(list);
    
    (*sll_add_node(&list,2)).data = 88;
    sll_print(list);
    printf("lenght: %d\n", sll_length(list));

    sll_remove_node_head(&list);
    sll_print(list);
    sll_remove_node_head(&list);
    sll_print(list);
    sll_remove_node(&list,1);
    sll_print(list);

    printf("%d\n", sll_search(list,7));
    printf("%d\n", sll_search(list,9));

    return true;
}

bool tests_sllst() {
    
    sllst st;
    sllst_init(&st);

    printf("%d\n",sllst_empty(st));
    
    sllst_push(&st,78);

    sllst_print(st);
    printf("%d\n",sllst_peek(st));
    printf("%d\n",sllst_empty(st));
    
    sllst_push(&st,12);
    sllst_push(&st,2);
    sllst_push(&st,7);

    sllst_print(st);

    sllst_pop(&st);
    sllst_pop(&st);

    sllst_print(st);

    return true;
}

bool tests_sllqu() {
    sllqu x;
    sllqu_init(&x);
    sllqu_enqueue(&x, 25);
    sllqu_enqueue(&x, 10);
    sllqu_enqueue(&x, 7);
    sllqu_enqueue(&x, 33);
    sllqu_enqueue(&x, 78);
    
    printf("%d\n", sllqu_peek(x));
    printf("%d\n", sllqu_length(x));
    sllqu_dequeue(&x);
    sllqu_print(x);
    sllqu_dequeue(&x);
    sllqu_dequeue(&x);
    sllqu_dequeue(&x);
    sllqu_dequeue(&x);
    printf("%d\n", sllqu_empty(x));

    sllqu_enqueue(&x, 78);
    printf("empty: %d\n", sllqu_empty(x));
    sllqu_print(x);

    sllqu_dequeue(&x);
    sllqu_print(x);

    return true;
}

bool tests_shorting() {
    int arr[10] = {12,3,45,6,61,1,3,7,5,0};
    printarr(arr,10);

    quicksort(arr,0,9);

    printarr(arr,10);

    printf("%d",binary_search(arr,0,9,6));

    return true;
}

bool tests_queue() {
    
    qu queue;
    qu_init(&queue,5);

    qu_enqueue(&queue,19);
    qu_enqueue(&queue,89);
    qu_enqueue(&queue,1);
    qu_enqueue(&queue,99);

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",queue.head[i]);
    }
    
    
    printf("%d\n",qu_peek(queue));

    qu_print(queue);
    
    qu_dequeue(&queue);
    
    printf("%d\n",qu_peek(queue));

    qu_print(queue);
    
    qu_dequeue(&queue);
    qu_dequeue(&queue);
    qu_dequeue(&queue);

    qu_print(queue);

    qu queue2;
    qu_init(&queue2,10);
    qu_enqueue(&queue2,8);
    qu_enqueue(&queue2,7);
    qu_enqueue(&queue2,4);
    qu_enqueue(&queue2,19);
    qu_enqueue(&queue2,2);
    qu_enqueue(&queue2,5);

    quicksort(queue2.head,0,queue2.length-1);
    printarr(queue2.head,queue2.length);

    int n;
    printf("Select a number: ");
    scanf("%d",&n);
    printf("The index of %d is: %d\n",n,arr_binary_search(queue2.head,qu_length(queue),n));

    return true;
}

bool tests_stack() {
    
    st stack;
    st_init(&stack,6);

    st_push(&stack,29);
    st_push(&stack,9);
    st_push(&stack,12);
    st_push(&stack,9);
    st_push(&stack,20);
    st_push(&stack,1);
    st_push(&stack,2);

    printf("top: %d\n",st_peek(stack));
    st_print(stack);

    st_pop(&stack);
    st_pop(&stack);
    
    st_print(stack);
    
    st_pop(&stack);
    st_pop(&stack);
    st_pop(&stack);
    st_pop(&stack);

    st_print(stack);
    printf("top: %d\n",st_peek(stack));

    return true;
}