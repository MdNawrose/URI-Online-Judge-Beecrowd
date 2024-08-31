#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    if(n%2==0)
    {
        for(i=2; i<=n; i=i+2)
        {
             printf("%d^2 = %d\n",i,i*i);
        }
    }
    else
    {
        for(i=2; i=n; i=i+2)
        {
            printf("%d^2 = %d\n",i,i*i);
        }
    }

    return 0;

}
