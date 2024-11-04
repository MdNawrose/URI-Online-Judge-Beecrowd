#include<stdio.h>
#include<math.h>
int main()
{
    double s,q,f,d=0;
    int p;
    for(p=3; p<=39; p=p+2)
    {
        d=d+1;
        f=pow(2,d);
        s=(s+((p*1.00)/f));
    }
    q=s+1;

    printf("%.2lf\n",q);
    return 0;
}
