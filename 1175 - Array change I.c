#include<stdio.h>
int main()
{
    int i,N[20];
    for(i=0; i<20; i++)
    {
        scanf("%d",&N[i]);
    }
    for( i=0; i<20; i++)
    {

        printf("N[%d] = %d\n",i,N[19-i]);
    }

    return 0;
}
