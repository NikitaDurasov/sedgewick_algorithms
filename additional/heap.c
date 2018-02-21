#include"HEAP.h"
#include<stdlib.h>

struct heap {
    int* elements;
    int lenght;
    int size;
};

int max(int a, int b) {
    if (a < b) {
        return b; 
    } else if (a > b) { 
        return a;
    } else {
        return a;
    }
}

int RIGHT_CHILD(Heap heap, int i) {
    return heap->elements[2*i + 1];
}

int LEFT_CHILD(Heap heap, int i) {
    return heap->elements[2*i];
}

int PARENT(Heap heap, int i) {
    return heap->elements[i / 2];
}

Heap init_heap(int lenght) {
    Heap heap = malloc(sizeof(*heap)); 
    heap->elements = malloc(sizeof(int) * lenght);
    heap->lenght = lenght;
    return heap;
}

void HEAPIFY(Heap heap, int i){
    int l = LEFT_CHILD(heap, i), r = RIGHT_CHILD(heap, i);
    int max_element = max(heap->elements[r], heap->elements[l]);
    int max_index = (heap->elements[r] == max_element) ? r : l;
    if (heap->elements[i] >= max_element) {
        return ; 
    } else {
        heap->elements[max_index] = heap->elements[i];    
        heap->elements[i] = max_element;
        HEAPIFY(heap, max_index);
    }
}

int extract_max(Heap heap) {
    int res = heap->elements[0];
    heap->elements[0] = heap->elements[heap->size];
    heap->elements[heap->size] = res;

    heap->size -= 1;

    HEAPIFY(heap, 0);
    return res;
}

