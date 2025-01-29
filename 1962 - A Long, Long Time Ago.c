#include <stdio.h>
#include <stdlib.h>

int main(void)

{
    int n, i;
    long long int y, x, z;

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        scanf("%lld", &y);

        x=2015-y;

        if (x>0)
            printf("%lld D.C.\n", x);

        else
        {
            z=abs(x)+1;
            printf("%lld A.C.\n", z);
        }
    }

    return 0;
}
