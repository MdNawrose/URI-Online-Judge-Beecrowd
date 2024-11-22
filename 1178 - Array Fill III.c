#include<stdio.h>
int main()
{
    double x;
    int n[100],i;
    scanf("%lf",&x);
    for(i=0; i<100; i++)
    {
        n[i]=x;
        printf("N[%d] = %.4lf\n",i,x);
        x=x/2;
    }
    return 0;
}
