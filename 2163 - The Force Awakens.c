#include <stdio.h>

int main(void)

{
    int a, b, i, j, x=-1, y=-1;

    scanf("%i %i", &a, &b);

    int arr[a][b];

    for (i=0; i<a; ++i)
    {
        for (j=0; j<b; ++j)
            scanf("%i", &arr[i][j]);
    }

    for (i=0; i<a-1; ++i)
    {
        for (j=0; j<b-1; ++j)
        {
            if (arr[i][j]==42)
            {
                if (arr[i][j-1]==7 && arr[i][j+1]==7 && arr[i-1][j]==7 && arr[i+1][j]==7 && arr[i-1][j-1]==7 && arr[i-1][j+1]==7 && arr[i+1][j-1]==7 && arr[i+1][j+1]==7)
                {
                    x=i;
                    y=j;
                }
            }
        }
    }

    printf("%i %i\n", x+1, y+1);

    return 0;
}
