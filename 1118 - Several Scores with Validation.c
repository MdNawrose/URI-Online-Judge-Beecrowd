#include<stdio.h>
int main()
{
    int n,i,x,m,s,u;
    double a,b,g,k,l,t;
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







    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&x);
    if(x<1||x>2)
    {
        for(m=1; m<1000; m++)
        {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d",&x);
            if(x==1)
            {
                scanf("%lf",&k);
    if(k>10||k<0)
    {
        for(u=1; u<1000; u++)
        {
            printf("nota invalida\n");
            scanf("%lf",&k);
            if(k<=10&&k>=0)break;
        }
    }
    scanf("%lf",&l);

    if(l>10||l<0)
    {
        for(s=1; s<1000; s++)
        {
            printf("nota invalida\n");
            scanf("%lf",&l);
            if(l<=10&&l>=0)break;
        }
    }
    t=(k+l)/2.0;
    printf("media = %.2lf\n",t);
            }
            if(x==2)break;
        }
    }
    return 0;
}
