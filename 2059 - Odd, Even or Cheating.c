#include <stdio.h>

int main(void)

{
    int a, b, c, d, e, sum, x;

    scanf("%i %i %i %i %i", &a, &b, &c, &d, &e);

    sum=b+c;

    if (sum%2==0)
        x=1;

    else
        x=0;

    if (d==0 && e==0)
    {
        if (x==a)
            printf("Jogador 1 ganha!\n");

        else
            printf("Jogador 2 ganha!\n");
    }

    else if (d==0 && e==1)
        printf("Jogador 1 ganha!\n");

    else if (d==1 && e==0)
        printf("Jogador 1 ganha!\n");

    else if (d==1 && e==1)
        printf("Jogador 2 ganha!\n");

    return 0;
}
