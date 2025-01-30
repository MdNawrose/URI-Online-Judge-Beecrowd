#include <stdio.h>

int main(void)

{
    double a, b, x, y;

    scanf("%lf %lf", &a, &b);

    x=b-a;

    y=(x*100.0)/a;

    printf("%.2lf%%\n", y);

    return 0;
}
