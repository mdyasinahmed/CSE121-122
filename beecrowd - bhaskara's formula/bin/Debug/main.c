#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double A, B, C, R1, R2;
    scanf("%lf %lf %lf", &A, &B, &C);

    R1 = ((-B + sqrt(B * B - 4 * A* C)) / 2*A);

    printf("%.5lf", R1);


    return 0;
}
