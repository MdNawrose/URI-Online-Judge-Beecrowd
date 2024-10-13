#include<stdio.h>
int main()
{
    int a,n,b,x=0,y=0,z=0;

    for(n=1;; n++)
    {
        scanf("%d",&a);

        if(a==4)break;
        if(a<0||a>4)
        {
            scanf("%d",&a);
        }

        if(a==1)
        {
            x++;
        }
        else if(a==2)
        {
            y++;
        }
        else if(a==3)
        {
            z++;
        }

    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",x);
    printf("Gasolina: %d\n",y);
    printf("Diesel: %d\n",z);
    return 0;

}
