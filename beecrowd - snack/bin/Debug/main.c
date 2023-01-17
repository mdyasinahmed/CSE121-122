#include <stdio.h>

int main()
{
    int X, Y;
    float p1 = 4.00, p2 = 4.50, p3 = 5.00, p4 = 2.00, p5 = 1.50;
    scanf("%d %d", &X, &Y);

    if(X==1) printf("Total: R$ %.2f\n", (p1*Y));
    else if(X==2) printf("Total: R$ %.2f\n", (p2*Y));
    else if(X==3) printf("Total: R$ %.2f\n", (p3*Y));
    else if(X==4) printf("Total: R$ %.2f\n", (p4*Y));
    else if(X==5) printf("Total: R$ %.2f\n", (p5*Y));

    return 0;
}
