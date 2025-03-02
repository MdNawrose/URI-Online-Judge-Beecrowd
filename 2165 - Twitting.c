#include <stdio.h>
#include <string.h>

int main(void)

{
    char str[500];
    int i;

    scanf("%[^\n\r]", str);

    i=strlen(str);

    if (i>140)
        printf("MUTE\n");

    else
        printf("TWEET\n");

    return 0;
}
