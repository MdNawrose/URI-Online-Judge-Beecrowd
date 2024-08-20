#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d %d %d",&a,&b,&c);
    d=(((a+b)+(abs(a-b)))/2);
    e=(((d+c)+(abs(d-c)))/2);

    if(a==e)
    {
        f=(((b+c)+(abs(b-c)))/2);

        if(f==b)
        {
            printf("%d\n",c);
            printf("%d\n",b);
            printf("%d\n",e);
        }
            else
        {
            printf("%d\n",b);
            printf("%d\n",c);
            printf("%d\n",e);
        }


    }
    else if(b==e)
    {
        g=(((a+c)+(abs(a-c)))/2);

         if(g==a)
        {
            printf("%d\n",c);
            printf("%d\n",a);
            printf("%d\n",e);
        }
            else
        {
            printf("%d\n",a);
            printf("%d\n",c);
            printf("%d\n",e);
        }
    }
    else
    {
        h=(((a+b)+(abs(a-b)))/2);

         if(h==a)
        {
            printf("%d\n",b);
            printf("%d\n",a);
            printf("%d\n",e);

        }
            else
        {
            printf("%d\n",a);
            printf("%d\n",b);
            printf("%d\n",e);
        }
    }
    printf("\n%d\n%d\n%d\n",a,b,c);


    return 0;
}
