#include <stdio.h>

int main(void)

{
    int i, a, b, c, n;

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        scanf("%d %d %d", &a, &b, &c);

        printf("%02d:%02d - ", a, b);

        if (c==1)
            printf("A porta abriu!\n");

        else
            printf("A porta fechou!\n");
    }

    return 0;
}
