#include <stdio.h>

int main(void)
{
    int i, j, n, sum=0;

    while (1)
    {
        scanf("%d", &n);

        if (n==0)
            break;

        for (i=0; i<n; ++i)
        {
            scanf("%d", &j);

            if (j%2==0)
                sum=j*2-2;

            else
                sum=j*2-1;

            printf("%d\n", sum);
        }
    }

    return 0;
}
