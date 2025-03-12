#include <stdio.h>

int main(void)
{
    int a, b, c;

    scanf("%i %i %i", &a, &b, &c);

    if (a==b || b==c || c==a)
        printf("S\n");
    else if (a+b==c || a+c==b || b+c==a)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
