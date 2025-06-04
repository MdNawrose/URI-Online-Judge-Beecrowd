#include <stdio.h>

int main(void)

{
    int d, m, y;

    while (scanf("%d/%d/%d", &d, &m, &y) != EOF)
    {
        printf("%02d/%02d/%02d\n", m, d, y);
        printf("%02d/%02d/%02d\n", y, m, d);
        printf("%02d-%02d-%02d\n", d, m, y);
    }

    return 0;
}
