#include <stdio.h>

int main(void)

{
    int n, m, l, i, j, c1, c2, at, x, y;

    while (scanf("%i %i %i", &n, &m, &l) != EOF)
    {

    int am[m][n], al[l][n];

    for (i=0; i<m; ++i)
    {
        for (j=0; j<n; ++j)
            scanf("%i", &am[i][j]);
    }

    for (i=0; i<l; ++i)
    {
        for (j=0; j<n; ++j)
            scanf("%i", &al[i][j]);
    }

    scanf("%i %i %i", &c1, &c2, &at);

    x=am[c1-1][at-1];
    y=al[c2-1][at-1];

    if (x>y)
        printf("Marcos\n");

    else if (y>x)
        printf("Leonardo\n");

    else
        printf("Empate\n");
    }

    return 0;
}
