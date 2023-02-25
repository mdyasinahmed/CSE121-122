#include <stdio.h>

int main()
{
    float s, Rg, s2;
    scanf("%f", &s);
    int R=0;

    if(s>= 0 && s<= 400.00)
    {
        R=15;
        Rg = ((s*((float)R))/100);
        s2 = s + Rg;
        printf("Novo salario: %.2f\n", s2);
        printf("Reajuste ganho: %.2f\n", Rg);
        printf("Em percentual: %d %%\n", R);
        
    }
    else if(s>= 400.01 && s<= 800.00)
    {
        R=12;
        Rg = ((s*((float)R))/100);
        s2 = s + Rg;
        printf("Novo salario: %.2f\n", s2);
        printf("Reajuste ganho: %.2f\n", Rg);
        printf("Em percentual: %d %%\n", R);
        
    }
    else if(s>= 800.01 && s<= 1200.00)
    {
        R=10;
        Rg = ((s*((float)R))/100);
        s2 = s + Rg;
        printf("Novo salario: %.2f\n", s2);
        printf("Reajuste ganho: %.2f\n", Rg);
        printf("Em percentual: %d %%\n", R);
        
    }
    else if(s>= 1200.01 && s<= 2000.00)
    {
        R=7;
        Rg = ((s*((float)R))/100);
        s2 = s + Rg;
        printf("Novo salario: %.2f\n", s2);
        printf("Reajuste ganho: %.2f\n", Rg);
        printf("Em percentual: %d %%\n", R);
        
    }
    else
    {
        R=4;
        Rg = ((s*((float)R))/100);
        s2 = s + Rg;
        printf("Novo salario: %.2f\n", s2);
        printf("Reajuste ganho: %.2f\n", Rg);
        printf("Em percentual: %d %%\n", R);
        
    }

    return 0;
}