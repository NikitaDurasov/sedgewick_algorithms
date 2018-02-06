#include <stdlib.h>
#include <stdio.h>
#include <string.h>

const int Nmax = 1000;
const int Mmax = 10000;

char buf[Mmax]; int M = 0;

int compare(void *i, void *j)
{
    return strcmp(*(char**)i, *(char **)j); 
}

int main()
{
    int i, N;
    char* a[Nmax];

    for (N = 0; N < Nmax; N++)
    {
        a[N] = &buf[M];
        if (scanf("%s", a[N]) == EOF) break;
        M += strlen(a[N])+1;
    }

    qsort(a, N, sizeof(char *), compare);

    printf("\n\n\nSorted array\n");

    for (i = 0; i < N; i++) printf("%s\n", a[i]);

    return 0;
}
