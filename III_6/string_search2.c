#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int N = 10000;

int main( int argc, char *argv[])
{
    int i, j;
    char t, a[N], *p = argv[1];

    for (i = 0; i < N-1; a[i] = t, i++)
        if ((t = getchar()) == EOF) break;

    a[i] = 0;

    for (i = 0; i < strlen(a); i++)
        if (strncmp(&a[i], p, strlen(p)) == 0)
            printf("%d ", i);

    printf("\n ");
}
