#include <stdio.h>
#include <stdlib.h>
#include "POLYNOMIALS.h"

int main(int argc, char *argv[]) {
    Poly t, x; int i, j;
    int N = atoi(argv[1]); 
    float p = atof(argv[2]);
    printf("Binomial coefficients\n");
    t = POLYadd(POLYterm(1, 1), POLYterm(1, 0));

    for (i = 0, x = t; i < N; i++) {
        x = POLYmult(x, t); 
        showPOLY(x);
    }

    printf("%f\n", POLYeval(x, p));
}
