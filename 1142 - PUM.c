#include<stdio.h>
int main()
{
    int n,i,p,s=0,temp=0;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {

        for(p=s+1; p<=s+3; p++)
        {
            printf("%d ",p);

        }
        printf("PUM\n");
        temp=s;
        s=p;
        p=temp;

    }

    return 0;
}
