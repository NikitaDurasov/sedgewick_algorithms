#include <stdlib.h>
#include <stdio.h>

int heads()
{
    return rand() < RAND_MAX / 2;
}

int main(int argc, char *argv[])
{
    int i, j, cnt, temp;
    int N = atoi(argv[1]), M = atoi(argv[2]);
    int *f = malloc((N+1)*sizeof(int));

    for (i = 0; i <= N; i++) f[i] = 0;
    for (j = 0; j < M; j++, f[cnt]++)
    {
        for (cnt = 0, i = 0; i < N; i++)
        {
            if (heads()) cnt++;
        }
    }

    for (j = 0; j <= N; j++)
    {
        printf("%d - %d - ", j, f[j]);
        for (i = 0; i < f[j]; i+=10) printf("*");
        printf("\n");
    }

    return 0;
}
