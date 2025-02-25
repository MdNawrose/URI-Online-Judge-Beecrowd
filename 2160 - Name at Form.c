#include <stdio.h>

int main(void)

{
    char str[600];
    int i;

    scanf("%[^\n\r]", str);

    while (str[i]!=0)
        ++i;

    if (i>80)
        printf("NO\n");

    else
        printf("YES\n");

    return 0;
}
