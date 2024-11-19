#include<stdio.h>

int main()
{
    long long int n,t,j,f1=0,f2=1,next,i;
    scanf("%lld",&t);
    for(j=1; j<=t; j++)
    {
        scanf("%lld",&n);
        f1=0,f2=1;
        next=f1+f2;
        if(n==0)
        {
            printf("Fib(0) = 0\n");
        }
        else
        {
            for(i=0; i<=n-3; i++)
            {
                f1=f2;
                f2=next;
                next=f1+f2;
            }
            printf("Fib(%lld) = %lld\n",n,next);
        }
    }
    return 0;
}
