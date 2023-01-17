#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name;
    scanf("%s", &name);

    double salary, sales;
    scanf("%lf", &salary);
    scanf("%lf", &sales);

    printf("TOTAL = R$ %.2lf\n", (salary+(sales*15/100)));
    return 0;
}
