#include <stdlib.h>
#include <stdio.h>

typedef struct node* link;
struct node {int item; link next;} node;

link reverse(link x)
{
    link t, y = x, r = NULL;
    while (y != NULL)
    {
        t = y->next;
        y->next = r;
        r = y;
        y = t;
    }
    return r;
}

int main()
{
    int i, N = 10;
    link t = malloc(sizeof *t), x = t;
    t->item = 0; t->next = t;

    for (i = 1; i < N; i++)
    {
        x = (x->next = malloc(sizeof *x));
        x->item = i; x->next = t;
    }

    reverse(t);
}
