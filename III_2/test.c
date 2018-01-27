#include "num.h"
#include <stdio.h>

int main()
{
    point a, b;
    a.x = 1.0, a.y = 2.0;
    b.x = 4.0, b.y = 5.0;

    printf("%f", distance(a,b));

}
