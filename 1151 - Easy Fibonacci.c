#include<stdio.h>
int main()
{
    int i,f1=0,f2=1,next,n;
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        if(i<=1)
        {
            next=i;
        }
        else
        {
            next=f1+f2;
            f1=f2;
            f2=next;
        }
        printf("%d ",next);
    }
    printf("%d\n",next+f1);
    return 0;
}
