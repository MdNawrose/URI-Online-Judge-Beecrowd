#include <stdio.h>

int main(void)
{
    int i, j, n, x, y, z;
    while (scanf("%i", &n) != EOF)
    {
        x=n/3;
        for (i=1; i<=n; ++i)
        {
            for (j=1; j<=n; ++j)
            {
                y=i;
                z=j;

                if (n-i+1<y)
                    y=n-i+1;
                if (n-j+1<z)
                    z=n-j+1;
                if (y>x && z>x)
                {
                    if (i==j && i+j==n+1)
                        printf("4");
                    else
                        printf("1");
                }
                else
                {
                    if (i==j)
                        printf("2");
                    else if (i+j==n+1)
                        printf("3");
                    else
                        printf("0");
                }
            }
            printf("\n");
        }
        printf("\n");
    }
}
