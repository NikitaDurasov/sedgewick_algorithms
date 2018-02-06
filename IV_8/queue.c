#include <stdlib.h>
#include "QUEUE.h"

typedef struct QUEUEnode* link; 
struct QUEUEnode { int item; link next; };
struct queue { link head; link tail; int size; };

link NEW(int item) {
    link x = malloc(sizeof(struct queue));
    x->item = item; x->next = x;
    return x;
}

Q QUEUEinit(int maxN) {
    Q q = malloc(sizeof(*q));
    q->head = NULL; q->tail = NULL;
    q->size = maxN;
    return q;
}

int QUEUEempty(Q q) {
    return q->head == NULL;
}

void QUEUEput(Q q, int item) {
    if (q->head == NULL) {
        q->tail = NEW(item);
        q->head = q->tail; return; }

    q->tail->next = NEW(item);
    q->tail = q->tail->next;
}

int QUEUEget(Q q) {
    int Item = q->head->item;
    link t = q->head->next;
    free(q->head); 
    if (q->head == t)
        t = NULL;
    q->head = t;
    return Item;
}




