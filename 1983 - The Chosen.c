#include <stdio.h>

struct in
{
    int id;
    double score;
};

int main(void)
{
    int i, n, x;
    double max;

    scanf("%i", &n);

    struct in info[n];

    for (i=0; i<n; ++i)
        scanf("%i %lf", &info[i].id, &info[i].score);

    max=info[0].score;

    for (i=0; i<n; ++i)
    {
        if (info[i].score>max)
        {
            max=info[i].score;
            x=i;
        }
    }

    if (max<8.0)
        printf("Minimum note not reached\n");

    else
        printf("%i\n", info[x].id);

    return 0;
}
