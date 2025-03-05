#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int ara[n+1][n+1];
    for(i=0; i<=n; i++)
        for(j=0; j<=n; j++)
            scanf("%d", &ara[i][j]);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(ara[i][j]+ara[i][j+1]+ara[i+1][j]+ara[i+1][j+1] < 2)
                printf("U");
            else printf("S");
        }
        printf("\n");
    }

    return 0;
}
