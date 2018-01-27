#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "num.h"

typedef struct triangle
{
    point points[3];
} triangle;

float distance(point a, point b)
{
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    return sqrt(dx*dx + dy*dy);
}

float calculate_square(triangle tr)
{
    float a = distance(tr.points[0], tr.points[1]);
    float b = distance(tr.points[0], tr.points[2]);
    float c = distance(tr.points[1], tr.points[2]);
    float p = (a + b + c) / 2;
    return sqrt(p * (p-a) * (p-b) * (p-c));
}

point random_point()
{
    point a;
    a.x = 1.0 * rand() / RAND_MAX;
    a.y = 1.0 * rand() / RAND_MAX;
    return a;
}

triangle random_triangle()
{
    triangle tr;
    int i;
    for (i = 0; i < 3; i++)
        tr.points[i] = random_point();
    return tr;
}

int main() 
{
    int i;
    float average_square = 0, N = 200;
    for (i = 0; i < N; i++)
    {
        triangle temp = random_triangle();
        average_square += calculate_square(temp);
    }
    average_square /= N;
    printf("%f", average_square);

    return 0;
}



    

