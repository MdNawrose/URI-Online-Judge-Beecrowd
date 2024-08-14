#include<stdio.h>
int main()
{
    double a,b,c,d,e,f,g,h,i;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&e);
    scanf("%lf",&f);
    h=b*c;
    g=e*f;
    i=h+g;
    printf("VALOR A PAGAR: R$ %0.2lf\n",i);
    return 0;
}
