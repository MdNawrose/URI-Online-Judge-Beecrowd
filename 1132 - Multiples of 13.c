#include<stdio.h>
int main()
{
    int x,y,i,w=0;
    scanf("%d%d",&x,&y);
    if(x<y)
    {
        for(i=x; i<=y; i++)
        {
            if(i%13!=0)
            {
                w=w+i;
            }
        }
    }
    else if(x>y)
    {
        for(i=y; i<=x; i++)
        {
            if(i%13!=0)
            {
                w=w+i;
            }

        }
    }
    printf("%d\n",w);
    return 0;
}
