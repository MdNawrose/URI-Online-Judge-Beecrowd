#include <stdio.h>
#include <math.h>

int main(void)

{
    int i, j, a, b, n, x;
    double y;

    while (scanf("%i", &n) != EOF)
    {
        x=0;

        for (i=0; i<n; ++i)
        {
            scanf("%i", &a);

            if (a==1)
                ++x;
        }

        y=(2*n)/3.0;
        b=ceil(y);

        if (x>=b)
            printf("impeachment\n");

        else
            printf("acusacao arquivada\n");
    }

    return 0;
}
