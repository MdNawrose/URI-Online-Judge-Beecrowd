#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int a, b, i, x, flag=1;

    scanf("%i %i", &a, &b);

    int arr[b];

    for (i=0; i<b; ++i)
        scanf("%i", &arr[i]);

    for (i=0; i<b-1; ++i)
    {
        x=arr[i]-arr[i+1];

        if (abs(x)<=a)
            flag=1;

        else
        {
            flag=0;
            break;
        }
    }

    if (flag)
        printf("YOU WIN\n");

    else
        printf("GAME OVER\n");

    return 0;
}
