#include <stdio.h>

int main(void)

{
    float v, d, r, h, a, pi=3.14;

    while (scanf("%f %f", &v, &d) != EOF)
    {
        r=d/2.0;
        a=pi*r*r;
        h=v/a;

        printf("ALTURA = %.2f\nAREA = %.2f\n", h, a);
    }

    return 0;
}
