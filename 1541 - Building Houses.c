#include <stdio.h>
#include <math.h>

int main(void)

{
    int a, b, c, area;

    while (1)
    {
        scanf("%i", &a);

        if (a==0)
            break;

        scanf("%i %i", &b, &c);

        area=((a*b)*100)/c;
        area=sqrt(area);

        printf("%i\n", area);
    }

    return 0;
}
