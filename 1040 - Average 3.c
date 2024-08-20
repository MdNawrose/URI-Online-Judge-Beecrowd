#include<stdio.h>
#include<math.h>
int main()
{
    double media, N1,N2,N3,N4,s,k;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    media=((N1*2/10)+(N2*3/10)+(N3*4/10)+(N4*1/10));
    printf("Media: %.1lf\n",media);
    if(media>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(media>=5.0&&media<=6.9)
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&s);
        printf("Nota do exame: %.1lf\n",s);
        k=(media+s)/2;
        if(k>=5)
        {
           printf("Aluno aprovado.\n");
           printf("Media final: %.1lf\n",k);
        }
        else
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n",k);
        }

    }
    else
    {
        printf("Aluno reprovado.\n");
    }



    return 0;
}
