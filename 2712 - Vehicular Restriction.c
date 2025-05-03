#include <stdio.h>
#include <string.h>

void check(char str[])
{
    int i, j, len, a=1, b=1, c=1, x;

    len=strlen(str);

    if (len<8 || len>8)
        printf("FAILURE\n");

    else
    {
        for (i=0; i<3; ++i)
        {
            if (str[i]>='A' && str[i]<='Z')
                a=1;
            else
            {
                a=0;
                break;
            }
        }

        if (str[3]!='-')
            b=0;

        for (i=4; i<len; ++i)
        {
            if (str[i]>='0' && str[i]<='9')
                c=1;
            else
            {
                c=0;
                break;
            }
        }

        if (a==0 || b==0 || c==0)
            printf("FAILURE\n");

        else
        {
            x=str[len-1]-'0';

            switch (x)
            {
            case 0:
            case 9:
                printf("FRIDAY\n");
                break;

            case 1:
            case 2:
                printf("MONDAY\n");
                break;

            case 3:
            case 4:
                printf("TUESDAY\n");
                break;

            case 5:
            case 6:
                printf("WEDNESDAY\n");
                break;

            case 7:
            case 8:
                printf("THURSDAY\n");
                break;
            }
        }
    }
}

int main(void)
{
    int i, n;
    char str[20];

    scanf("%i", &n);

    for (i=0; i<n; ++i)
    {
        scanf("%s", str);
        check(str);
    }

    return 0;
}
