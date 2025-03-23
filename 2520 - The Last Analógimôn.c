#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j, a, b, x, y, p, q, z=0;

    while (scanf("%d %d", &a, &b) != EOF)
    {
        int arr[a][b];

        for (i=0; i<a; ++i)
        {
            for (j=0; j<b; ++j)
            {
                scanf("%d", &arr[i][j]);

                if (arr[i][j]==1)
                {
                    x=i;
                    y=j;
                }

                if (arr[i][j]==2)
                {
                    p=i;
                    q=j;
                }
            }
        }

        z=abs(x-p)+abs(y-q);

        printf("%d\n", z);
    }

    return 0;
}
