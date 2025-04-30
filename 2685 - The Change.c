#include <stdio.h>

int main(void)

{
    int n;

    while (scanf("%i", &n) != EOF)
    {
        if (n<90 || n==360)
            printf("Bom Dia!!\n");

        else if (n<180)
            printf("Boa Tarde!!\n");

        else if (n<270)
            printf("Boa Noite!!\n");

        else if (n<360)
            printf("De Madrugada!!\n");
    }

    return 0;
}
