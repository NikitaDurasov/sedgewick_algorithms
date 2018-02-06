#include <stdlib.h>

int **malloc2d(int r, int c)
{
    int i;
    int **t = malloc(r * sizeof(int *));
    for (i = 0; i < r; i++)
        t[i] = malloc(c * sizeof(int));
    return t;
}

int main()
{
    int M = 10, N = 10;
    int **a = malloc2d(M, N);

    return 0;
}

