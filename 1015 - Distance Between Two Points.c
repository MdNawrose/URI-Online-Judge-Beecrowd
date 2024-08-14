#include <math.h>  
#include <stdio.h>
int main()
{
   double a,b,c,d,e,f,i,squareRoot;
   scanf("%lf",&a);
   scanf("%lf",&b);
   scanf("%lf",&c);
   scanf("%lf",&d);
   e=(c-a)*(c-a);
   f=(d-b)*(d-b);
   i=e+f;
   squareRoot=sqrt(i);
   printf("%0.4lf\n",squareRoot,i);
   return 0;
}
