#include <stdio.h>

int main(void)

{
    int a, b, i, n, count;

    while (scanf("%i %i %i", &n, &a, &b) != EOF)
    {
        int arr[n];

        count=0;

        for (i=0; i<n; ++i)
            scanf("%i", &arr[i]);

        for (i=0; i<n; ++i)
        {
            if (arr[i]>=a && arr[i]<=b)
                ++count;
        }

        printf("%i\n", count);
    }

    return 0;
}
