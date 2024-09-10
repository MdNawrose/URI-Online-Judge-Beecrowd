#include<stdio.h>
int main()
{
    int x,p;
    for(x=1; x<=1000; x++)
    {
        scanf("%d",&p);


        if(p!=2002)
        {

            printf("Senha Invalida\n");
        }
        else if(p==2002)break;


    }
    printf("Acesso Permitido\n");


    return 0;
}
