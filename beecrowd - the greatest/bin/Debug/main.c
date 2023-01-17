#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d", &a, &b, &c);

    d = (a+b+abs(a-b))/2;
    d = (d+c+abs(d-c))/2;

    printf("%d eh o maior", d);

    return 0;
}


/*
7 14 106

106 eh o maior

217 14 6

217 eh o maior
*/
