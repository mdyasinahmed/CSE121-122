#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n = 3.14159;
    double R;
    scanf("%lf", &R);

    double A;
    A = (R*R*n);
    printf("%.4lf\n",A);

    return 0;
}
