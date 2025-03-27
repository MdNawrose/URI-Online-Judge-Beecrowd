#include <stdio.h>

int main(void)

{
    int i, j, x, y, a, b, temp;

    while (scanf("%i %i", &a, &b) != EOF)
    {
        int a1[a], a2[b];

        for (i=0; i<a; ++i)
            scanf("%i", &a1[i]);

        for (i=0; i<a-1; ++i)
        {
            for (j=i+1; j<a; ++j)
            {
                if (a1[j]>a1[i])
                {
                    temp=a1[i];
                    a1[i]=a1[j];
                    a1[j]=temp;
                }
            }
        }

        for (i=0; i<b; ++i)
            scanf("%i", &a2[i]);

        for (i=0; i<b; ++i)
            printf("%i\n", a1[a2[i]-1]);
    }

    return 0;
}
