// connectivity problem using weighted tries and simple path compression

#include <stdio.h>
const int N = 1000;

int find(int id[], int number)
{
    int i;
    for (i = number; id[i] != i; i = id[i])
        id[i] = id[id[i]];
    return i;
}

int main() 
{
    int i, j, p, q, id[N], sz[N];
    for (i = 0; i < N; i++)
        { id[i] = i; sz[i] = 1; }
    
    while (scanf("%d-%d", &p, &q) == 2)
    {
        i = find(id, p);
        j = find(id, q);
        if (i == j) continue;

        printf("\t%d-%d\n", p, q);

        if (sz[i] <= sz[j])
            { id[i] = j; sz[j] += sz[i];}
        else
            { id[j] = i; sz[i] += sz[j];}
    }
}







