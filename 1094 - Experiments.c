#include<stdio.h>
int main()
{
    int n,x,i,a=0,b=0,c=0,t;
    double p,q,w;
    char m[2];
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%s",&x,&m);
        if(m[0]=='C')
        {
            a=a+x;
        }
        if(m[0]=='R')
        {
            b=b+x;
        }
        if(m[0]=='S')
        {
            c=c+x;
        }
    }

    t=(a+b+c);

    p=((a/(t*1.00))*100.00);
    q=((b/(t*1.00))*100.00);
    w=((c/(t*1.00))*100.00);
    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n",a);
    printf("Total de ratos: %d\n",b);
    printf("Total de sapos: %d\n",c);
    printf("Percentual de coelhos: %.2lf %%\n",p);
    printf("Percentual de ratos: %.2lf %%\n",q);
    printf("Percentual de sapos: %.2lf %%\n",w);
    return 0;
}
