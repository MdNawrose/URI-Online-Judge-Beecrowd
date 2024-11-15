#include<stdio.h>

int main()
{
    int V,i,N[10];
    scanf("%d",&V);
    for(i=0;i<10;i++)
    {
        N[i]=V;
        printf("N[%d] = %d\n",i,V);
        V=2*V;
    }
    return 0;
}
