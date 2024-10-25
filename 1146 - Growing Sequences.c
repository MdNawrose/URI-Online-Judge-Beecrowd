#include<stdio.h>
int main()
{
    int n,i,w;
    while(1)
    {
        scanf("%d",&n);
        if (n==0)break;
        else
        {
            for(w=1; w<n; w++)
            {
                printf("%d ",w);
            }
            printf("%d",n);
            printf("\n");

        }
    }

    return 0;
}
