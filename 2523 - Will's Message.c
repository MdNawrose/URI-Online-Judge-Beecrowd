#include <stdio.h>

int main(void)

{
    int i, j, n, x;
   char str[10000], str1[10000];

    while (scanf("%s %i", str, &x) != EOF)
    {

    int a[x];

    for (i=0; i<x; ++i)
        scanf("%i", &a[i]);

    for (j=0; j<x; ++j)
    {
        for (i=0; str[i]!=0; ++i)
        {
            if (a[j]-1==i)
            {
                if (j==x-1)
                    printf("%c\n", str[i]);

                else
                    printf("%c", str[i]);
            }
        }
    }
    }

    return 0;
}
