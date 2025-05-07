#include <stdio.h>

int main(void)

{
    int n, sum=0, i, rem;

    for (i=1; i<=9; ++i)
    {
        scanf("%i", &n);
        sum+=n;
    }

    rem=sum%9;

    switch (rem)
    {
    case 0:
        printf("Rudolph\n");
        break;
    case 1:
        printf("Dasher\n");
        break;
    case 2:
        printf("Dancer\n");
        break;
    case 3:
        printf("Prancer\n");
        break;
    case 4:
        printf("Vixen\n");
        break;
    case 5:
        printf("Comet\n");
        break;
    case 6:
        printf("Cupid\n");
        break;
    case 7:
        printf("Donner\n");
        break;
    case 8:
        printf("Blitzen\n");
        break;
    }

    return 0;
}
