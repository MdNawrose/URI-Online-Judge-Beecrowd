#include<stdio.h>
int main()
{
    double a,t,avg;
    int i,c=0;
    for(i=1;i<=6;i++)
    {
        scanf("%lf",&a);
        if(a>0)
        {
            c=c+1;
            t=t+a;
        }
    }
    avg=t/c,
    printf("%d valores positivos\n",c);
    printf("%.1lf\n",avg);
     return 0;
}
