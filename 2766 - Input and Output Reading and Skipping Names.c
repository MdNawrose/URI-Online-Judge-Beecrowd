#include <stdio.h>

struct c
{
    char str[50];
} ch[10];

int main(void)

{
    int i, j, x;

    while (scanf("%s%s%s%s%s%s%s%s%s%s", ch[0].str, ch[1].str, ch[2].str, ch[3].str, ch[4].str, ch[5].str, ch[6].str, ch[7].str, ch[8].str, ch[9].str) != EOF)
    {
        printf("%s\n%s\n%s\n", ch[2].str, ch[6].str, ch[8].str);
    }

    return 0;
}
