#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A, B, C, pi = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);

    printf("TRIANGULO: %.3lf\n", ((1 * A * C) / 2));
    printf("CIRCULO: %.3lf\n", (pi * C * C));
    printf("TRAPEZIO: %.3lf\n", ((1 * (A + B) * C) / 2));
    printf("QUADRADO: %.3lf\n", (B * B));
    printf("RETANGULO: %.3lf\n", (A * B));

    return 0;
}

/*
3.0 4.0 5.2

TRIANGULO: 7.800
CIRCULO: 84.949
TRAPEZIO: 18.200
QUADRADO: 16.000
RETANGULO: 12.000

*/
