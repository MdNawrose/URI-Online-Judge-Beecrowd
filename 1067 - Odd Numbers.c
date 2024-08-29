#include<stdio.h>
#include<math.h>
int main()
{

    /*int x,i;
    scanf("%d",&x);
    for(i=1; i<x; i=i+2)
    {
        printf("%d\n",i);
    }

    return 0;*/
    int i,n;
    scanf("%d",&n);
    if(n%2==0)
        n=n-1;
    for(i=1;i<=n;i+=2)
        printf("%d\n",i);
    return 0;

}
