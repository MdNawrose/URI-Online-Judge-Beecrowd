#include <stdio.h>

int main(void)

{
    int a, b, c, x;

    scanf("%i %i %i", &a, &b, &c);

    x=a+b+c;

    if (x<0)
        x=24+x;

    else if (x<24)
        x=x;

    else if (x==24)
        x=0;

    else if (x>24)
        x=x-24;

    printf("%i\n", x);

    return 0;
}
