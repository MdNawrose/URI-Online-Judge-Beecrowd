#include<stdio.h>
int main()
{
    int N,i,x,y,a;

    scanf("%d",&N);

    for(a=1; a<=N; a++)
    {
        x=a*a;
        y=a*a*a;
        printf("%d %d %d\n",a,x,y);
        printf("%d %d %d\n",a,x+1,y+1);
    }


    return 0;
}
