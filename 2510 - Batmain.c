#include <stdio.h>

int main(void)
{
    int n, i;
    char str[100];

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        fflush(stdin);
        fgets(str, 100, stdin);
        printf("Y\n");
    }

    return 0;
}
