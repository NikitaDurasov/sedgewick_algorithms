#include "COMPLEX.h"

Complex COMPLEXinit(float Re, float Im) {
    Complex t;
    t.Re = Re; t.Im = Im;
    return t;
}

float Re(Complex z) {
    return z.Re;
}

float Im(Complex z) {
    return z.Im;
}

Complex COMPLEXmul(Complex a, Complex b) {
    Complex t;
    t.Re = a.Re*b.Re - a.Im*b.Im;
    t.Im = a.Im*b.Re + a.Re*b.Im;
    return t;
}

