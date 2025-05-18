#include <stdio.h>

int main(void)
{
    int i, x=97, a[26];

    for (i=0; i<26; ++i)
        a[i]=x++;

    for (i=0; i<26; ++i)
        printf("%d e %c\n", a[i], a[i]);

    return 0;
}
