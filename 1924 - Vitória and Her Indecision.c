#include <stdio.h>

int main(void)

{
    int i, n;
    char str[100];

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        fflush(stdin);

        fgets(str, 100, stdin);
    }

    printf("Ciencia da Computacao\n");

    return 0;
}
