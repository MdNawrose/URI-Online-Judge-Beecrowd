#include<stdio.h>
int main()
{
    int x,y,p;
    for(p=1; p<=1000; p++)
    {
        scanf("%d%d",&x,&y);

        if(x==y)break;


        else if(x>y)
        {

            printf("Decrescente\n");

        }

        else
        {

            printf("Crescente\n");
        }
        }


    return 0;
}