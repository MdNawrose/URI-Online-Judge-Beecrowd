#include <stdio.h>

int main()
{
    int tst, i, j;
    char name[1000];
    double dif, score;
    scanf("%d", &tst);
    for(i=1; i<=tst; i++)
    {
        double max = -10.00, min = 100.00, ans = 0.00;
        scanf("%s", name);
        scanf("%lf", &dif);
        for(j=1; j<=7; j++)
        {
            scanf("%lf", &score);
            if(score > max) max = score;
            if(score < min) min = score;
            ans += score;
        }
        ans -= (max+min);
        ans *= dif;
        printf("%s %.2lf\n", name, ans);
    }
    return 0;
}
