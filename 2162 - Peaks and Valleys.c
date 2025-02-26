#include <stdio.h>

int main(void)
{
    int n, i, x=1;

    scanf("%i", &n);

    int arr[n];

    for (i=0; i<n; ++i)
        scanf("%i", &arr[i]);

    if (arr[1]>arr[0])
    {
        for (i=0; i<n-1 && x; ++i)
        {
            if (i%2==0)
            {
                if (arr[i+1]<=arr[i])
                    x=0;
            }

            else
            {
                if (arr[i+1]>=arr[i])
                    x=0;
            }
        }
    }

    else if (arr[1]<arr[0])
    {
        for (i=0; i<n-1 && x; ++i)
        {
            if (i%2!=0)
            {
                if (arr[i+1]<=arr[i])
                    x=0;
            }

            else
            {
                if (arr[i+1]>=arr[i])
                    x=0;
            }
        }
    }

    else
        x=0;


    printf("%i\n", x);
}
