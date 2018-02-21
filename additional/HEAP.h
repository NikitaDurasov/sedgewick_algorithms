typedef struct heap *Heap;
int RIGHT_CHILD(Heap heap, int i);
int LEFT_CHILD(Heap heap, int i);
void HEAPIFY(Heap heap, int i);
int PARENT(Heap heap, int i);
Heap init_heap(int lenght);
int extract_max(Heap heap);


