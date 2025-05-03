#include <stdio.h>
#include <string.h>

struct s
{
    char str[10];
    int n;
};

int main(void)

{
    int i, j, sum, in=0, out=0, pin=0, pout=0;
    struct s x;

    while (1)
    {
        scanf("%s", x.str);

        if (strcmp(x.str, "ABEND")==0)
            break;

        scanf("%i", &x.n);

        if (strcmp(x.str, "SALIDA")==0)
        {
            ++in;
            pin+=x.n;
        }

        else if (strcmp(x.str, "VUELTA")==0)
        {
            ++out;
            pout+=x.n;
        }
    }

    printf("%i\n%i\n", pin-pout, in-out);

    return 0;
}
