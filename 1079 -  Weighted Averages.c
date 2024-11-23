#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double a,b,c,i,avg;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        avg=(a*(2.00/10))+(b*(3.00/10))+(c*(5.00/10));
        printf("%.1lf\n",avg);
    }
    return 0;

}
