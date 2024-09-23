#include<stdio.h>
int main()
{
    int a,b,c,d=0,e=0,f=0,y=0,i,p,g,w,x,up=0,dn=0;
    scanf("%d%d",&i,&g);
    c=1;
    if(i==g)
    {
        f=1; 
        up=0;
        dn=0;
    }
    else if(i>g)
    {
        up=1;
        f=0;
        dn=0;
    }
    else if(i<g)
    {
        up=0;
        f=0;
        dn=1;
    }
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d",&x);
    if(x==1)
    {
        for(w=1; w<1000; w++)
        {
            scanf("%d%d",&a,&b);
            printf("Novo grenal (1-sim 2-nao)\n");
            scanf("%d",&p);
            if(a==b)
            {
                y=y+f;
            }
            else if(a>b)
            {
                d=d+1;
            }
            else if(b>a)
            {
                e=e+1;
            }
            c=c+1;
            if(p==2)break;
        }
    }
    printf("%d grenais\n",c);
    printf("Inter:%d\n",d+up);
    printf("Gremio:%d\n",e+dn);
    printf("Empates:%d\n",y);

    if((d+up)>(e+dn))
    {
        printf("Inter venceu mais\n");

    }
    else if((d+up)==(e+dn))
    {
        printf("Não houve vencedor");
    }
    else
    {
        printf("Gremio venceu mais\n");
    }
    return 0;
}
