#include<stdio.h>
int main()
{

    double M[12][12],s=0.0;
    int l,i,j,k;
    char t[2];
    scanf("%d",&l);
    scanf("%s",&t);

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }
    for(j=0; j<12; j++)
    {
         s+=M[j][l];

    }

    if(t[0]=='S')
    {
        printf("%.1lf\n",s);
    }
    else if(t[0]=='M')
    {
        s=s/(12.00);

        printf("%.1lf\n",s);
    }
    return 0;
}
