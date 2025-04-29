#include <stdio.h>

int main(void)
{
    int i, j, a, b, c, temp, x[3];

    scanf("%i %i %i", &a, &b, &c);

    x[0]=b*2+c*4;
    x[1]=a*2+c*2;
    x[2]=a*4+b*2;

    for (i=0; i<3-1; ++i)
    {
        for (j=i+1; j<3; ++j)
        {
            if (x[j]<x[i])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }

    printf("%i\n", x[0]);

    return 0;
}
