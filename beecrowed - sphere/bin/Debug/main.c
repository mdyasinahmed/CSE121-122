#include <stdio.h>
#include <stdlib.h>

int main()
{
    double R, pi = 3.14159;
    scanf("%lf", &R);

    printf("VOLUME = %.3lf\n", ((4*pi*(R*R*R))/3));

    return 0;
}

/*
3

VOLUME = 113.097

15

VOLUME = 14137.155
*/
