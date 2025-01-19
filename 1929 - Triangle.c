#include <stdio.h>

int main(void)

{
    int i, j, temp, a[4];

    for (i=0; i<4; ++i)
        scanf("%i", &a[i]);

    for (i=0; i<3; ++i)
    {
        for (j=i+1; j<4; ++j)
        {
            if (a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    if (a[2]<a[0]+a[1] || a[3]<a[1]+a[2])
        printf("S\n");

    else
        printf("N\n");

    return 0;
}
