#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days, y, m , d;
    scanf("%d", &days);

    printf("%d ano(s)\n", y = days / 365);
    printf("%d mes(es)\n", m = (days - (y*365)) / 30);
    printf("%d dia(s)\n", d = (days - (y*365) - (m*30)));

    return 0;
}
