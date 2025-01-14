#include <stdio.h>
int main()
{
    int n,i,min,j,posi=1;
    scanf("%d", &n);
    int ara[n];
    for(i=0; i<n; i++)
        scanf("%d", &ara[i]);
    min = ara[0];
    for(j=0; j<n; ++j)
    {
        if(ara[j]< min)
        {
            min=ara[j];
            posi=j+1;
        }

    }
    printf("%d\n", posi);
    return 0;
}
