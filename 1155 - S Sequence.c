#include<stdio.h>
int main()
{
    double s=0;
    int p;
    for(p=1;p<=100;p++)
    {
        s=(s+(1.00/p));
    }
    printf("%.2lf\n",s);
    return 0;
}
