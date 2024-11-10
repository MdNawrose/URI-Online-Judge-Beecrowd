#include<stdio.h>
int main()
{
    int n,i,r,p=0,w;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&r);
        p=0;

        for(w=1; w<r; w++)
        {
            if(r%w==0)
            {
                p=p+w;
            }

        }
        if(p==r)
        {
            printf("%d eh perfeito\n",r);
        }
        else
        {
            printf("%d nao eh perfeito\n",r);
        }


    }
    return 0;
}
