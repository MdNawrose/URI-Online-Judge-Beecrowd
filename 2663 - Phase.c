#include <stdio.h>

int main(void)

{
    int a, b, i, j, temp, x, y;

    scanf("%i %i", &a, &b);
    y=b;

    int arr[a];

    for (i=0; i<a; ++i)
        scanf("%d", &arr[i]);

    for (i=0; i<a-1; ++i)
    {
        for (j=i+1; j<a; ++j)
        {
            if (arr[j]>arr[i])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for (i=b; i<a; ++i)
    {
        if (arr[b-1]==arr[i])
            ++y;
    }

    printf("%d\n", y);

    return 0;
}
