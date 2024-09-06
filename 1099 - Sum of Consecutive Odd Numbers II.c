#include<stdio.h>
int main()
{
    int n,x,y,a=0,i,p;
    scanf("%d", &n);
    for(p=1; p<=n; p++)
    {
        scanf("%d%d",&x,&y);
        if(x==y)
        {
            a=0;
            printf("%d\n",a);
        }
        else if(x>y)
        {
            for(i=y+1,a=0; i<x; i++)
            {
                if(i%2==1||i%2==-1)
                    a+=i;
            }
            printf("%d\n",a);

        }

        else
        {
            for(i=x+1,a=0; i<y; i++)
            {
                if(i%2==1||i%2==-1)
                {
                    a+=i;
                }
            }
            printf("%d\n",a);
        }
    }

    return 0;
}
