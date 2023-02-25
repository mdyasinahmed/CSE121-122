#include <stdio.h>

int main()
{
    int a, b, c, d, ddx;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    ddx = ((c*60 + d) - (a*60 + b));

    if(ddx <= 0) ddx+=24*60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (ddx/60), (ddx%60));
}