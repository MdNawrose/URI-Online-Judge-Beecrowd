#include <stdio.h>
#include <string.h>

char check(char str[])

{
    int x;

    if (strcmp(str, "papel")==0)
        return x='p';

    else if (strcmp(str, "pedra")==0)
        return x='r';

    else if (strcmp(str, "lagarto")==0)
        return x='l';

    else if (strcmp(str, "tesoura")==0)
        return x='s';

    else if (strcmp(str, "Spock")==0)
        return x='k';
}

int main(void)

{
    char str1[100], str2[100], a, b;
    int n, i, j;

    scanf("%i", &n);

    for (i=1; i<=n; ++i)
    {
        scanf("%s %s", str1, str2);

        a=check(str1);
        b=check(str2);

        if (a=='s' && b=='p' || a=='p' && b=='r' || a=='r' && b=='l' || a=='l' && b=='k' || a=='k' && b=='s' || a=='s' && b=='l' || a=='l' && b=='p' || a=='p' && b=='k' || a=='k' && b=='r' || a=='r' && b=='s')
            printf("Caso #%i: Bazinga!\n", i);

        else if (a==b)
            printf("Caso #%i: De novo!\n", i);

        else
            printf("Caso #%i: Raj trapaceou!\n", i);
    }

    return 0;
}
