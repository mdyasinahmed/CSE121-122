#include<stdio.h>
int main()
{
    int  h , f , tw , te , fv , t , o , pf , ptf , pte , pfv , po ;
    double a ;
    scanf("%lf",&a);

    h = a / 100 ;
    a -=  (h*100) ;

    f = a / 50 ;
    a -=  (f*50) ;

    tw = a / 20 ;
    a -= (tw*20) ;

    te = a / 10 ;
    a -=  (te*10) ;

    fv = a / 5 ;
    a -=  (fv*5) ;

    t = a / 2 ;
    a -=  (t*2) ;

    o = a / 1 ;
    a -=  (o*1) ;

    pf = a / 0.50 ;
    a -=  (pf*0.50) ;

    ptf = a / 0.25 ;
    a -=  (ptf*0.25) ;

    pte = a / 0.10 ;
    a -=  (pte*0.10);

    pfv = a / 0.05 ;
    a -=  (pfv*0.05);

    po = a / 0.01 ;
    a -=  (po*0.01);

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01",h,f,tw,te,fv,t,o,pf,ptf,pte,pfv,po);
    return 0 ;
}
