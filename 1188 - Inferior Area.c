#include <stdio.h>

int main(void)

{
    int i, j, x, y=0;
    double arr[12][12], sum=0, res;
    char ch;

    scanf("%c", &ch);

    for (i=0; i<12; ++i)
    {
        for (j=0; j<12; ++j)
            scanf("%lf", &arr[i][j]);
    }

    for (i=0; i<12; ++i)
    {
        for (j=0; j<12; ++j)
        {
            if (i>j && i+j>11)
            {
                sum+=arr[i][j];
                ++y;
            }
        }
    }

    if (ch=='S')
        printf("%.1lf\n", sum);

    else if (ch=='M')
    {
        res=sum/(double)y;
        printf("%.1lf\n", res);
    }

    return 0;
}
