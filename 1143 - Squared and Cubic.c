#include<stdio.h>
int main()
{
    int n,i,a,b;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        a=i*i;
        b=i*i*i;
        printf("%d %d %d\n",i,a,b);
    }

    return 0;
}
