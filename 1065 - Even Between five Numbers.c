#include<stdio.h>
int main()
{

    int a,b,c,d,e;
    int l,j,k,n,p,totale;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a%2==0)
    {
        l=1;
    }
    else
    {
        l=0;
    }

    if(b%2==0)
    {
        j=1;
    }
    else
    {
        j=0;
    }
    if(c%2==0)
    {
        k=1;
    }
    else
    {
        k=0;
    }
    if(d%2==0)
    {
        n=1;
    }
    else
    {
        n=0;
    }
    if(e%2==0)
    {
        p=1;
    }
    else
    {
        p=0;
    }
    totale=l+j+k+n+p;

    printf("%d valores pares\n",totale);
    return 0;
}
