#include<stdio.h>
int main()
{
    int t,n[1000],i,k=0;
    scanf("%d",&t);
    if(t>=2&&t<=50)
    {


        for(i=0; i<1000; i++)

        {
            if(k==t)
                k=0;

                n[i]=k;
                printf("N[%d] = %d\n",i,k);
                k++;


        }
    }
        return 0;
    }
