#include<stdio.h>
int main()
{
    int n,i,p,j,min=99999,count=0;
    scanf("%d",&n);
    int x[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }

    for(j=0; j<n; j++)
    {

        if(min>x[j])
        {

            min=x[j];
            p=j;

        }
    }

    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",p);
    return 0;
}
