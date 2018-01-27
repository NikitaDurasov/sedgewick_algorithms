// improve efficiency by using tries 

#include <stdio.h>
const int N = 10000;

int main()
{
    int p, q, i, j, id[N];
    for (i = 0; i < N; i++) id[i] = i;
    while (scanf("%d-%d", &p, &q) == 2)
    {
        for (i = p; i != id[i]; i = id[i]);    
        for (j = q; j != id[j]; j = id[j]);
        if (id[i] == id[j]) continue;
        id[i] = j;
        printf("\t%d-%d\n", p, q);    
    }

    return 0;
}
