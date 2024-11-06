#include<stdio.h>
int main()
{
    int n,x,y,i,p,a,b,s;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        s=0;
        p=0;

        scanf("%d %d",&x,&y);

        if(x%2==0)
        {
            p=(((y*2)+x)-1);
            for(a=x+1; a<=p; a=a+2)
            {

                s+=a;

            }

        }
        else if(x%2!=0)
        {
            p=(((y*2)+x)-2);

            for(a=x; a<=p; a=a+2)
            {
                s+=a;

            }

        }
        printf("%d\n",s);
    }
    return 0;
}
