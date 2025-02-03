#include <stdio.h>

int main(void)

{
    int a, b, x, y, ans;

    while (scanf("%d:%d", &a, &b) != EOF)
    {
        if (a<7 || a==7 && b==0)
            ans=0;

        else
            ans=((a+1)-8)*60+b;

        printf("Atraso maximo: %d\n", ans);
    }

    return 0;
}
