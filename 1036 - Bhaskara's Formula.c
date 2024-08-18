#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,d,e,f;
    scanf("%f %f %f",&a,&b,&c);
    f=(b*b)-(4*a*c);
    if(f<0)printf("Impossivel calcular\n");
    else if(a==0)printf("Impossivel calcular\n");
     else
     {
         d=(-b+sqrt((b*b)-4*a*c))/(2*a);
         e=(-b-sqrt((b*b)-4*a*c))/(2*a);
         printf("R1 = %0.5f\n",d);
         printf("R2 = %0.5f\n",e);
     }

    return 0;
}
