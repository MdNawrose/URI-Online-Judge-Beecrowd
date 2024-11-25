#include<stdio.h>
int main()
{
    int n,i,odd[5],even[5],j=0,k=0,l,m,count1=0,loop1,loop2,count2=0;;
    for(i=0; i<15; i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            even[j]=n;
            count1++;

            if(j==4)
            {
                for(l=0; l<5; l++)
                {
                    printf("par[%d] = %d\n",l,even[l]);
                }
                j=0;
                count1=0;
            }
            else
            {
                j++;
            }
        }

        else
        {
            odd[k]=n;
            count2++;
            if(k==4)
            {
                for(m=0; m<5; m++)
                {
                    printf("impar[%d] = %d\n",m,odd[m]);
                }
                k=0;
                count2=0;
            }
            else
            {
                k++;
            }
        }
    }
    for(loop2=0; loop2<count2; loop2++)
    {
        printf("impar[%d] = %d\n",loop2,odd[loop2]);
    }
    for(loop1=0; loop1<count1; loop1++)
    {
        printf("par[%d] = %d\n",loop1,even[loop1]);
    }
    return 0;
}