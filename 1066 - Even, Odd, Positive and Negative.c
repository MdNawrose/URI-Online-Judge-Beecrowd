#include<stdio.h>
int main()
{
    int n,a=0,b=0,c=0,d=0,i;
    for(i=1; i<=5; i++)
    {
        scanf("%d",&n);
        if(n>0)
        {
            a=a+1;
        }
        if(n<0)
        {
            b=b+1;
        }
        if(n%2==0)
        {
            c=c+1;
        }
        if(n%2!=0)
        {
            d=d+1;
        }
    }
    printf("%d valor(es) par(es)\n",c);
    printf("%d valor(es) impar(es)\n",d);
    printf("%d valor(es) positivo(s)\n",a);
    printf("%d valor(es) negativo(s)\n",b);
    return 0;
}
