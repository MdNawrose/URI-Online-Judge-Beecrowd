#include <stdio.h>

int main(void)

{
    int a, b;

    scanf("%i %i", &a, &b);

    if (a==b)
        printf("%i\n", a);

    else
    {
        if (a>b)
            printf("%i\n", a);

        else
            printf("%i\n", b);
    }

    return 0;
}
