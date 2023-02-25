#include <stdio.h>

int main()
{
    int initialHour, initialMinute, finalHour, finalMinute, timeDifference, ifZero=0;
    scanf("%d %d %d %d", &initialHour, &initialMinute, &finalHour, &finalMinute);

    timeDifference = (((finalHour*60) + finalMinute) - ((initialHour*60) + initialMinute));
    
    printf("%d\n", timeDifference);

    if(timeDifference <= 0) ifZero = timeDifference+=24*60;

    printf("%d\n", timeDifference);
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (timeDifference/60), (timeDifference%60));
}