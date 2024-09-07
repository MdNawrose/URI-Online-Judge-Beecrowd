#include<stdio.h>
int main()
{
    int j,i;
    i=-2;
    for(j=60;j>=0;j=j-5)
    {
        i=i+3;
     printf("I=%d J=%d\n",i,j);
    }

    return 0;
}
