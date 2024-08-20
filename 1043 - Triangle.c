#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,t;
    scanf("%lf%lf%lf",&A,&B,&C);
    if(A+B>C&&B+C>A&&C+A>B)
    {
        printf("Perimetro = %.1lf\n",A+B+C);
    }

    else
    {
        t=(0.5*(A+B)*C);
        printf ("Area = %.1lf\n",t);
    }
    return 0;

}
