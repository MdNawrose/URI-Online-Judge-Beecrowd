#include<stdio.h>
int main()
{
    int n,a,w,i,q,s=0;
    scanf("%d %d",&a,&n);
    if(n<=0)
    {
        for(i=1;; i++)
        {
            scanf("%d",&n);
            if(n>0)break;
        }
    }
     q=n+a;
    for(w=a; w<q; w++)
    {
      s=s+w;
    }
    printf("%d\n",s);


    return 0;
}
