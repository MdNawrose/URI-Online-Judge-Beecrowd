#include <stdio.h>

int main(void)

{
    int a, b, c, x, y;

    scanf("%i %i %i", &a, &b, &c);

    x=b-a;
    y=c-b;

    if (a>b && c>=b)
        printf(":)\n");

    else if (a<b && b>=c)
        printf(":(\n");

    else if (a<b && b<c && x>y)
        printf(":(\n");

    else if (a<b && b<c && x<y)
        printf(":)\n");

    else if (a<b && b<c && x==y)
        printf(":)\n");

    else if (a>b && b>c && x<y)
        printf(":)\n");

    else if (a>b && b>c && x>y)
        printf(":(\n");

    else if (a>b && b>c && x==y)
        printf(":(\n");

    else if (a==b && b<c)
        printf(":)\n");

    else if (a==b && b>c)
        printf(":(\n");

    else if (a==b && b==c)
        printf(":(\n");

    return 0;
}
