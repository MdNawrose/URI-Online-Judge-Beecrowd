#include<stdio.h>

int main()
{
    double a,s;
    scanf("%lf",&a);
    if(a>=0&&a<=400.00)
    {
        s=(a*(15/100.00));
        printf("Novo salario: %.2lf\n",(s+a));
        printf("Reajuste ganho: %.2lf\n",s);
        printf("Em percentual: 15 %%\n");
    }
    else if(a>=400.01&&a<=800.00)
          {
        s=(a*(12/100.00));
        printf("Novo salario: %.2lf\n",(s+a));
        printf("Reajuste ganho: %.2lf\n",s);
        printf("Em percentual: 12 %%\n");
    }

    else if(a>=800.01&&a<=1200.00)
          {
        s=(a*(10/100.00));
        printf("Novo salario: %.2lf\n",(s+a));
        printf("Reajuste ganho: %.2lf\n",s);
        printf("Em percentual: 10 %%\n");
    }
    else if(a>=1200.01&&a<=2000.00)
          {
        s=(a*(7/100.00));
        printf("Novo salario: %.2lf\n",(s+a));
        printf("Reajuste ganho: %.2lf\n",s);
        printf("Em percentual: 7 %%\n");
    }
    else
          {
        s=(a*(4/100.00));
        printf("Novo salario: %.2lf\n",(s+a));
        printf("Reajuste ganho: %.2lf\n",s);
        printf("Em percentual: 4 %%\n");
    }
    return 0;

}
