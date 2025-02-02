#include <stdio.h>

int main(void)

{
    int i, j, n, a, b;
    double sum=0.0;

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        scanf("%i %i", &a, &b);

        switch (a)
        {
        case 1001:
            sum+=b*1.5;
            break;

        case 1002:
            sum+=b*2.5;
            break;

        case 1003:
            sum+=b*3.5;
            break;

        case 1004:
            sum+=b*4.5;
            break;

        case 1005:
            sum+=b*5.5;
            break;
        }
    }

    printf("%.2lf\n", sum);

    return 0;
}
