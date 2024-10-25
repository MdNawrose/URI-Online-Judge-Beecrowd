#include<stdio.h>
int main()
{
    int x,y,i,a=0;
    scanf("%d%d",&x,&y);
    for(i=1;i<=y;i++)
    {
        a++;

        if(a==x)
        {
            printf("%d",i);
        }
        else{printf("%d ",i);}
        if(a==x)
        {
            a=0;
            printf("\n");
        }

    }
    return 0;
}
