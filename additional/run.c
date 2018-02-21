#include"HEAP.h"
#include<stdio.h>

int main() {
    Heap H = init_heap(10);
    int i = extract_max(H);
    printf("%d", i);
    return 0;
}
