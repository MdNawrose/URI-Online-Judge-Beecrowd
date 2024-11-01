#include<stdio.h>
int main()
{
    double n,i,a=0,b=0,x,avg;
    for(i=1;; i++)
    {
        b++;
        scanf("%lf",&n);
        a+=n;

        if(n<0)
        {
            a=a-n;
            break;
        }
    }
    x=b-1;
    avg=((a*1.00)/x);
    printf("%.2lf\n",avg);
    return 0;

}
