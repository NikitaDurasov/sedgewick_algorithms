#include <sys/queue.h>
#include <stdlib.h>
#include <stdio.h>

TAILQ_HEAD(tailhead, entry) head;

struct entry 
{
    char c;
    TAILQ_ENTRY(entry) entries;
} *n1, *n2, *n3, *n4, *np;

int main()
{
    TAILQ_INIT(&head);

    n1 = malloc(sizeof(struct entry));
    n1->c = 'A';
    TAILQ_INSERT_TAIL(&head, n1, entries);

    n2 = malloc(sizeof(struct entry));
    n2->c = 'B';
    TAILQ_INSERT_TAIL(&head, n2, entries);

    n3 = malloc(sizeof(struct entry));
    n3->c = 'C';
    TAILQ_INSERT_TAIL(&head, n3, entries);

    TAILQ_FOREACH(np, &head, entries)
    { 
        printf("%c\n", np->c);
        printf("%c\n", np->c);
        printf("%c\n", np->c);
        printf("---\n");
    }

    printf("%c", TAILQ_LAST(&head, tailhead)->c);
}


