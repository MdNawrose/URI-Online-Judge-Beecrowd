#include<stdio.h>
int main()
{
    int a=0,i,x,y;


    scanf("%d %d",&x,&y);
    if(x==y)
    {
        printf("0\n");
    }
    else if(x>y)
    {
        if(x%2==0&&y%2==0)
        {
            for(i=y+1; i<x; i=i+2)
            {
                a=a+i;
            }
            printf("%d\n",a);
        }
        if(x%2!=0&&y%2==0)
        {
            for(i=y+1; i<x; i=i+2)
            {
                a=a+i;
            }
            printf("%d\n",a);
        }


        if(x%2!=0&&y%2!=0)
        {
            for(i=y+2; i<x; i=i+2)
            {
                a=a+i;
            }
            printf("%d\n",a);
        }
         if(x%2==0&&y%2!=0)
        {
            for(i=y+2; i<x; i=i+2)
            {
                a=a+i;
            }
            printf("%d\n",a);
        }


    }

   else if(y>x)
    {
        if(x%2==0&&y%2==0)
        {
            for(i=x+1; i<y; i=i+2)
            {
                a=a+i;
            }
            printf("%d\n",a);
        }
        else if(x%2!=0&&y%2==0)
        {
            for(i=x+2; i<y; i=i+2)
            {
                a=a+i;
            }
            printf("%d\n",a);
        }


        else if(x%2!=0&&y%2!=0)
        {
            for(i=x+2; i<y; i=i+2)
            {
                a=a+i;
            }
            printf("%d\n",a);
        }
         else if(x%2==0&&y%2!=0)
        {
            for(i=x+1; i<y; i=i+2)
            {
                a=a+i;
            }
            printf("%d\n",a);
        }
    }
    return 0;
}
