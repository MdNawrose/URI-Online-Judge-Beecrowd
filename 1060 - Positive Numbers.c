#include<stdio.h>
int main()
{
    double a;
    int i,c=0,t;
    for(i=1;i<=6;i++)
    {
        scanf("%lf",&a);
        if(a>0)
        {
            c=c+1;
        }
    }
    printf("%d valores positivos\n",c);
    return 0;
}
