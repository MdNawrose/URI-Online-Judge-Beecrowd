#include<stdio.h>
int main()
{
    double A,B,C,a,b,c,d,e;
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    a=0.5*A*C;
    b=3.14159*C*C;
    c=0.5*(A+B)*C;
    d=B*B;
    e=A*B;
    printf("TRIANGULO: %0.3lf\n""CIRCULO: %0.3lf\n""TRAPEZIO: %0.3lf\n""QUADRADO: %0.3lf\n""RETANGULO: %0.3lf\n",a,b,c,d,e);
    return 0;
}
