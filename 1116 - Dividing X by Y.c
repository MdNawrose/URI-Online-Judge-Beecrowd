#include<stdio.h>
int main()
{
    int x,y,i,n;
    double c;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d%d",&x,&y);
        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
         c=(x/(y*1.00));
         printf("%.1lf\n",c);
        }

    }


    return 0;
}
