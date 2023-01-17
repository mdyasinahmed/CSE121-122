#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    scanf("%d", &num);

    float wh;
    scanf("%f", &wh);

    float aph;
    scanf("%f", &aph);

    printf("NUMBER = %d\nSALARY = U$ %.2f\n", num, (wh*aph));


    return 0;
}
