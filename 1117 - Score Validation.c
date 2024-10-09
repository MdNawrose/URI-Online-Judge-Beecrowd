#include<stdio.h>
int main()
{
    int n,i;
    double a,b,g;
    scanf("%lf",&a);
    if(a>10||a<0)
    {
        for(i=1; i<1000; i++)
        {
            printf("nota invalida\n");
            scanf("%lf",&a);
            if(a<=10&&a>=0)break;
        }
    }
    scanf("%lf",&b);

    if(b>10||b<0)
    {
        for(i=1; i<1000; i++)
        {
            printf("nota invalida\n");
            scanf("%lf",&b);
            if(b<=10&&b>=0)break;
        }
    }
    g=(a+b)/2.0;
    printf("media = %.2lf\n",g);
    return 0;
}
