#include<stdio.h>
int main()
{

    int N,x,y,v,i,p;
    scanf("%d",&N);
    for(p=1; p<=N; p++)
    {
        scanf("%d",&x);
        if(x==1||x==2)
        {
            printf("%d eh primo\n",x);
        }
        else if(x>2)
        {
            for(i=2; i<x; i++)
            {
                y=x%i;
                if(y==0)
                {
                    v=1;
                    break;
                }

                else
                {
                    v=0;
                }
            }
            if(v==1)
            {
                printf("%d nao eh primo\n",x);
            }
            else if(v==0)
            {
                printf("%d eh primo\n",x);
            }

        }
    }
    return 0;
}
