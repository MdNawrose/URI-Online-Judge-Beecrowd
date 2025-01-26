#include <stdio.h>
#include <math.h>

int f(int n)
{
    if (n/500)
        return 500;
    else if (n/100)
        return 100;
    else if (n/50)
        return 50;
    else if (n/10)
        return 10;
    else if (n/5)
        return 5;
    else
        return 1;
}

int main(void)
{
    int n, a, b, c, x, y, z, i, j, k, in;
    scanf("%i", &n);

    while (n)
    {
        a=f(n);
        switch(a)
        {
        case 500:
            x=f(n-500);
            if (x==100)
            {
            i=(n-500)/x;
            if (i>3)
            {
                printf("CM");
                n-=500+x*i;
            }
            else
            {
                printf("D");
                for (in=0; in<i; ++in)
                    printf("C");
                n-=500+x*i;
            }
            }
            else
            {
                printf("D");
                n-=500;
            }

            break;
        case 100:
            x=f(n-100);
            if (x==100)
            {
            i=(n-100)/x;
            if (i>2)
            {
                printf("CD");
                n-=100+x*i;
            }
            else
            {
                printf("C");
                for (in=0; in<i; ++in)
                    printf("C");
                n-=100+x*i;
            }}
            else
            {
                printf("C");
                n-=100;
            }
            break;
        case 50:
            x=f(n-50);
            if (x==10)
            {
            i=(n-50)/x;
            if (i>3)
            {
                printf("XC");
                n-=50+x*i;
            }
            else
            {
                printf("L");
                for (in=0; in<i; ++in)
                    printf("X");
                n-=50+x*i;
            }}
            else
            {
                printf("L");
                n-=50;
            }
            break;
        case 10:
            x=f(n-10);
            if (x==10)
            {
            i=(n-10)/x;
            if (i>2)
            {
                printf("XL");
                n-=10+x*i;
            }
            else
            {
                printf("X");
                for (in=0; in<i; ++in)
                    printf("X");
                n-=10+x*i;
            }}
            else
            {
                printf("X");
                n-=10;
            }
            break;
        case 5:
            x=f(n-5);
            i=(n-5)/x;
            if (i>3)
            {
                printf("IX");
                n-=5+x*i;
            }
            else
            {
                printf("V");
                for (in=0; in<i; ++in)
                    printf("I");
                n-=5+x*i;
            }
            break;
        case 1:
            x=f(n-1);
            i=(n-1)/x;
            if (i>2)
            {
                printf("IV");
                n-=1+x*i;
            }
            else
            {
                printf("I");
                for (in=0; in<i; ++in)
                    printf("I");
                n-=1+x*i;
            }
            break;
        }

    }
    printf("\n");

    return 0;
}
