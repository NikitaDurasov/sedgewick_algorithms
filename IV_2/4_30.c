#include <stdio.h>
#include <stdlib.h>
#include <sys/queue.h>

const int N = 10000;

TAILQ_HEAD(tailhead, entry) head;

struct entry {
  char ch;
  TAILQ_ENTRY(entry) entries;
};

void add_to_queue(char ch) {
  struct entry *elem;
  elem = malloc(sizeof(struct entry));
  if (elem) {
    elem->ch = ch;
  }
  TAILQ_INSERT_HEAD(&head, elem, entries);
}

int main()
{
    int i;
    char s[N];
    TAILQ_INIT(&head);

    scanf("%s", s);

    for (i = 0; s[i] != 0; i++)
    {
        if (s[i] != '*')
            add_to_queue(s[i]);
        else {
            struct entry *temp = TAILQ_FIRST(&head);
            printf("%c\n", temp->ch);
            TAILQ_REMOVE(&head, temp, entries);
        }
    }
}



    
