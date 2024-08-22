#include<stdio.h>
#include<math.h>

int main()
{
    int s,e,duration;
    scanf("%d %d",&s,&e);
    duration=(e-s);
    if(duration<0)
    {
        duration=24+(e-s);
        printf("O JOGO DUROU %d HORA(S)\n",duration);
    }
    else if(s==e)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n",duration);
    }

    return 0;
}
