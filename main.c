#include <stdio.h>
#include "sort_algorithms/sort_algorithms.h"
#include "search_algorithms/search_algorithms.h"
#include "tools/functions.h"
#include "data_structures/sll_plus.h"
#include "data_structures/tests.h"
#include "data_structures/queue.h"
#include "data_structures/stack.h"
#include "data_structures/sll_queue.h"



int main() {

    // test_sll();
    // tests_sllqu();
    // tests_sllst();
    // tests_shorting();
    // tests_queue();
    // tests_stack();

    int arr[9] = {8,3,2,15,1,5,6,7,17};
    selectionsort(arr,9);
    printarr(arr,9);

    return 0;
}