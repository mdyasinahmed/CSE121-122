#include <stdio.h>
#include <stdlib.h>

int main()
{
    double amount;
    int n, n100, n50, n20, n10, n5, n2, c1, c50, c25, c10, c5;
    scanf("%lf", &amount);

    n = amount * 100;
    n100 = n / 10000;
    n = n % 10000;

    n50 = n / 5000;
    n = n % 5000;

    n20 = n / 2000;
    n = n % 2000;

    n10 = n / 1000;
    n = n % 1000;

    n5 = n / 500;
    n = n % 500;

    n2 = n / 200;
    n = n % 200;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);

    c1= n / 100;
    n = n % 100;

    c50 = n / 50;
    n = n % 50;

    c25 = n / 25;
    n = n % 25;

    c10 = n / 10;
    n = n % 10;

    c5 = n / 5;
    n = n % 5;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", c1);
    printf("%d moeda(s) de R$ 0.50\n", c50);
    printf("%d moeda(s) de R$ 0.25\n", c25);
    printf("%d moeda(s) de R$ 0.10\n", c10);
    printf("%d moeda(s) de R$ 0.05\n", c5);
    printf("%d moeda(s) de R$ 0.01\n", n);



    return 0;
}
