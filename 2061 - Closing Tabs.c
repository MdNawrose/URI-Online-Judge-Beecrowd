#include <stdio.h>
#include <string.h>

int main(void)

{
    int i, j, a, b, n, x, sum;
    char str[7];

    scanf("%i %i", &a, &n);
    sum=a;

    for (i=0; i<n; ++i)
    {
        scanf("%s", str);

        x=strcmp(str, "fechou");

        if (x==0)
            sum++;

        else
            sum--;
    }

    printf("%i\n", sum);

    return 0;
}
