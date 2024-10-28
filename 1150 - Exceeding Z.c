#include<stdio.h>
int main()
{
    int x,y,i,z,q,j=0,s=0,b=0;
    scanf("%d",&x);
    scanf("%d",&z);
    if(x>=z)
    {
        for(i=1;; i++)
        {
            scanf("%d",&z);
            if(z>x)break;
        }
    }

    for(q=x; j<z; q++)
    {
        j=j+q;
        b++;
    }
    printf("%d\n",b);


    return 0;
}
