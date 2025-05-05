#include <stdio.h>

int main(void)

{
    int a, b, c, x;

    scanf("%i %i %i", &a, &b, &c);

    x=b+c;

    if (x>a)
        printf("Deixa para amanha!\n");

    else
        printf("Farei hoje!\n");

    return 0;
}
