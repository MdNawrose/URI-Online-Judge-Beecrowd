#include <stdio.h>

struct info

{
    char str[100];
    int at[3];
    int su[3];
};

int main(void)

{
    int i, j, n, x=0, y=0, z=0, a=0, b=0, c=0;
    float p, q, r;

    scanf("%i", &n);

    struct info volly[n];

    for (i=0; i<n; ++i)
    {
        scanf("%s", volly[i].str);

        for (j=0; j<3; ++j)
            scanf("%i", &volly[i].at[j]);

        for (j=0; j<3; ++j)
            scanf("%i", &volly[i].su[j]);
    }

    for (i=0; i<n; ++i)
    {
        for (j=0; j<3; ++j)
        {
            if (j==0)
            {
                x+=volly[i].at[j];
                a+=volly[i].su[j];
            }

            else if (j==1)
            {
                y+=volly[i].at[j];
                b+=volly[i].su[j];
            }

            else if (j==2)
            {
                z+=volly[i].at[j];
                c+=volly[i].su[j];
            }
        }
    }

    p=(a*100)/(float)x;
    q=(b*100)/(float)y;
    r=(c*100)/(float)z;

    printf("Pontos de Saque: %.2f %%.\nPontos de Bloqueio: %.2f %%.\nPontos de Ataque: %.2f %%.\n", p, q, r);

    return 0;
}
