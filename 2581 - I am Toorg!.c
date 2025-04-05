#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int i, j, n;
    char str[501], ch;

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        fflush(stdin);
        fgets(str, 501, stdin);

        printf("I am Toorg!\n");
    }

    return 0;
}
