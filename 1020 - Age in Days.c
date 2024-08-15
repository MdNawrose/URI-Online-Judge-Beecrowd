#include<stdio.h>
int main()
{
    int N,y=0,m=0,d=0,k,n;
    scanf("%d",&N);
    y=(N/365);
    n=N%365;
    m=n/30;
    k=(n-m*30);
    d=k;
    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);
    return 0;
}
