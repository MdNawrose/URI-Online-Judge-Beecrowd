#include <stdio.h>
#include <math.h>

int main(void)

{
    int i, j, n;

    while (scanf("%i", &n) != EOF)
    {
        j=log(n)/log(2);
        printf("%i\n", j);
    }

    return 0;
}
