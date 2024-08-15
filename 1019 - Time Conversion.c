#include<stdio.h>
int main()
{
    int N,h,m,s;
    scanf("%d",&N);
    h=(N/3600);
    m=((N/60)-(h*60));
    s=(N-((h*60*60)+(m*60)));
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
