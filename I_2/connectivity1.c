#include <stdio.h>
const int N = 10;

void print(int id[])
{
    int i;
    for (i = 0; i < N; i++)
        printf("%d", id[i]);
}

int main() 
{
    int p, q, i, t, id[N];
    for (i = 0; i < N; i++) id[i] = i;
    while (scanf("%d-%d", &p, &q) == 2)
    {
        if (id[p] == id[q]) continue;
        for (t = id[p], i = 0; i < N; i++)
            if (id[i] == t) id[i] = id[q];
        printf("\t%d-%d\n", p, q);
    }
    return 0;
}

