#include <stdio.h>

int main(void)

{
    int i, j, n;
    char str[10000];
    double x;

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        scanf("%s", str);
        j=0;
        while (str[j]!=0)
            ++j;

        x=j/100.0;

        printf("%.2lf\n", x);
    }

    return 0;
}
