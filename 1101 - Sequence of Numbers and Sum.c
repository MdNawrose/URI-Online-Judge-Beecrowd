#include<stdio.h>
#include<stdio.h>
int main()
{
    int a=0,b=0,i,m,n,p;
    for(p=1; p<=1000; p++)
    {
        scanf("%d%d",&m,&n);
        a=0;
        b=0;
        if(m<=0||n<=0)break;


        else if(m>n)
        {
            for(i=n; i<=m; i++)
            {
                a=a+i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",a);

        }

        else if(n>m)
        {
            for(i=m; i<=n; i++)
            {
                b=b+i;
                printf("%d ",i);
            }
            printf("Sum=%d\n",b);
        }
            else
            {
                printf("Sum=0\n");

            }

    }


    return 0;
}
