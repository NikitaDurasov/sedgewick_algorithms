#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct node* link;
typedef struct node {int item; link next;} node;

link create_list(int N)
{
    int i;
    link t = malloc(sizeof *t), x = t;
    t->item = rand(); t->next = NULL;

    for (i = 0; i < N; i++)
    {
        x = (x->next = malloc(sizeof *x));
        x->item = rand(); x->next = NULL;
    }

    return t;
}

void print_list(link t)
{
    while (t->next)
    {
        printf("%d ", t->item);
        t = t->next;
    }
    printf("\n");
}

link get_nth_item(int n, link t)
{
    int i;
    for (i = 0; i < n; i++)
        t = t->next;
    return t;
}

void insert_item(int item, link s)
{
    
    link n = malloc(sizeof *n);
    n->item = item;

    link t = s->next; s->next = n;
     n->next = t;
}

int main() 
{
    srand(time(NULL));
    link t = create_list(10);  
    print_list(t);
    insert_item(10, get_nth_item(5, t));
    print_list(t);
}

