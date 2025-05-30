#include <stdio.h>

int main(void)
{
    char a, b, c;

    while (scanf(" %c %c %c", &a, &b, &c) != EOF)
    {
        printf("A = %c, B = %c, C = %c\n", a, b, c);
        printf("A = %c, B = %c, C = %c\n", b, c, a);
        printf("A = %c, B = %c, C = %c\n", c, a, b);
    }

    return 0;
}
