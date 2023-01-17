#include <stdio.h>
#include <stdlib.h>

int main()
{
    int code_1, unit_1, code_2, unit_2;
    double price_1, price_2;

    scanf("%d %d %lf", &code_1, &unit_1, &price_1);
    scanf("%d %d %lf", &code_2, &unit_2, &price_2);

    printf("VALOR A PAGAR: R$ %.2lf\n", ((unit_1*price_1)+(unit_2*price_2)));


    return 0;
}
