#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

int main(void)

{
    int a, b, i, j, x, y, z=0, c=1;


    while (scanf("%d %d", &a, &b) != EOF)
    {
        struct date d[b];

        z=-1;
        c=1;

        for (i=0; i<b; ++i)
        {
            scanf("%d/%d/%d", &d[i].day, &d[i].month, &d[i].year);

            y=0;

            for (j=0; j<a; ++j)
            {
                scanf("%d", &x);

                if (x==1)
                    ++y;
            }

            if (y==a && c)
            {
                z=i;
                c=0;
            }
        }

        if (z>=0)
            printf("%d/%d/%d\n", d[z].day, d[z].month, d[z].year);

        else
            printf("Pizza antes de FdI\n");
    }

    return 0;
}
