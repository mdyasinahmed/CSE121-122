#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A, B, C;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    printf("0.1%lf", (((A*2)+(B*3)+(C*5))/(2+4+5)));

    return 0;
}
