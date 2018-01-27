#include <stdlib.h>
#include <stdio.h>

typedef struct node* link;
struct node {int item; link next;};

int main(int argc, char *argv[])
{
    int i, N = atoi(argv[1]), M = atoi(argv[2]);
    link t = malloc(sizeof *t), x = t;
    t->item = 0; t->next = t;

    for (i = 1; i < N; i++)
    {
        x = (x->next = malloc(sizeof *x));
        x->item = i; x->next = t;
    }

    printf("Game starts with player number %d\n", x->item);

    while (x != x->next)

    {
        for (i = 1; i < M; i++) x = x->next;
        printf("Player %d  is dead\n", x->next->item);
        x->next = x->next->next;
    }

    printf("%d", x->item);

    return 0;
}
