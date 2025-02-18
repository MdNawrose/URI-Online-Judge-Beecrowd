#include <stdio.h>

int main(void)

{
    int a, b, c;

    while (1)
    {
        scanf("%i %i", &a, &b);

        if (a==0 && b==0)
            break;

        c=b-a;

        if (c==7 || c==12 || c==15 || c==22 || c==25 || c==30 || c==52 || c== 55 || c==60 || c==70 || c==102 || c==105 || c==110 || c==120 || c==150 || c==4 || c==10 || c==20 || c==40 || c==100 || c==200)
            printf("possible\n");

        else
            printf("impossible\n");
    }

    return 0;
}
