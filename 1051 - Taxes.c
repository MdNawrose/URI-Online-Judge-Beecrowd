#include<stdio.h>

int main()
{
    double salary,x,y,a,b,c,t,tx;
    scanf("%lf",&salary);
    if(salary>=0&&salary<=2000.00)
    {
        printf("Isento\n");
    }
    else
    {
        x=salary-2000;
        if(x<=1000)
        {
            y=x*(8.00/100);
            printf("R$ %.2lf\n",y);
        }
        else if(x>1000&&x<=1500)
        {
            y=1000*(8.00/100);
            a=x-1000;
            b=a*(18.00/100);
            t=y+b;
            printf("R$ %.2lf\n",t);

        }
        else
        {
            y=1000*(8.00/100);
            b=1500*(18.00/100);
            a=x-2500;
            c=a*(28.00/100);
            tx=(y+b+c);
            printf("R$ %.2lf\n",tx);
        }

    }
    return 0;

}
