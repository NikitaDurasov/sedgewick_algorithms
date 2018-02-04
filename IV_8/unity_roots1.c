#include <stdio.h>
#include <math.h>
#include "COMPLEX1.h"

const float PI = 3.141592625;

int main(int argc, char* argv[])
{
    int i, j, N = atoi(argv[1]);
    Complex t, x;
    printf("%dth roots of unity\n", N);

    for (i = 0; i<N; i++) {
        float r = 2.0 * Pi * i/N;
        t = COMPLEXinit(cos(r), sin(r));
        printf
