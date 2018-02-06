#include <stdio.h>
#include "QUEUE.h"

int main() {
    Q queue = QUEUEinit(10);
    printf("%i\n", QUEUEempty(queue));
    QUEUEput(queue, 1);
    QUEUEput(queue, 2);
    QUEUEput(queue, 3);
    QUEUEput(queue, 4);
    printf("%i\n", QUEUEempty(queue));
    printf("%d\n", QUEUEget(queue));
    printf("%d\n", QUEUEget(queue));
    printf("%d\n", QUEUEget(queue));
    printf("%d\n", QUEUEget(queue));
    printf("%i\n", QUEUEempty(queue));
}

