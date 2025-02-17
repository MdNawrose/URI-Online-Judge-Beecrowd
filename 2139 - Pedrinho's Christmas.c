#include <stdio.h>

int main(void)
{
    int days[12]={31, 29, 31, 30, 31 ,30, 31, 31, 30, 31, 30, 31};
    int i, m, d, x, y;

    while (scanf("%i %i", &m, &d) != EOF)
    {
        if (m==12)
            x=25-d;

        else
        {
            x=days[m-1]-d;

            for (i=m; i<11; ++i)
                x+=days[i];

            x+=25;
        }

        if (x==0)
            printf("E natal!\n");

        else if (x==1)
            printf("E vespera de natal!\n");

        else if (x<0)
            printf("Ja passou!\n");

        else
            printf("Faltam %i dias para o natal!\n", x);
    }

    return 0;
}
