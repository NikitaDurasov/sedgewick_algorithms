#include <stdio.h>
#include <math.h>
#include "COMPLEX1.h"

const float PI =  3.141592625;

int main(int argc, char* argv[]) {

    int i, j, N = atoi(argv[1]);
    Complex t, x;
    printf("%dth roots of unity\n", N);

    for (i = 0; i < N; i++) {
        float r = 2.0 * PI * i/N;
        t = COMPLEXinit(cos(r), sin(r));
        printf("%2d: %6.3f + %6.3f i\n", i, Re(t), Im(t));

        for (x = t, j = 0; j < N-1; j++) 
            x = COMPLEXmul(t, x);
        printf("%6.3f + %6.3f i\n", Re(x), Im(x));
    }
}

