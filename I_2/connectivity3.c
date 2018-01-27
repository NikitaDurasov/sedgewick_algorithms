// imporove efficiency by weighted tries 

#include <stdio.h>
const int N  = 1000; 

int main()
{
    int p, q, i, j, id[N], sz[N];
    for (i = 0; i < N; i++) 
        { id[i] = i; sz[i] = 1; }
    while (scanf("%d-%d", &p, &q) == 2)
    {
        for (i = p; id[i] != i; i = id[i]);
        for (j = q; id[j] != j; j = id[j]);
        if (i == j) continue;
        
        printf("\t%d-%d\n", p, q);

        if (sz[i] <= sz[j]) 
            { id[i] = j; sz[j] += sz[i]; }
        else 
            { id[j] = i; sz[i] += sz[j]; }

    }
}

