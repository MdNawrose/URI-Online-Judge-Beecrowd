#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int a1, b1, c1, a2, b2, c2, x, y, z, sum=0;

    scanf("%i %i %i %i %i %i", &a1, &b1, &c1, &a2, &b2, &c2);

    x=a1-a2;
    y=b1-b2;
    z=c1-c2;

    if (x<0)
        sum+=abs(x);

    if (y<0)
        sum+=abs(y);

    if (z<0)
        sum+=abs(z);

    printf("%i\n", sum);

    return 0;
}
