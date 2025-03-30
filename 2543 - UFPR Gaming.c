#include <stdio.h>

int main(void)

{
    int i, j, n, id, count, g, ID;

    while (scanf("%i %i", &n, &id) != EOF)
    {
        count=0;

        for (i=0; i<n; ++i)
        {
            scanf("%i %i", &ID, &g);

            if (ID==id && g==0)
                ++count;
        }

        printf("%i\n", count);
    }

    return 0;
}
