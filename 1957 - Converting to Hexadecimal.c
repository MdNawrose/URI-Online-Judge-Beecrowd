#include <stdio.h>

int main(void)

{
    char hexa[]={'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char hex[64];

    long long int rem, n;
    int i=0;

    scanf("%lld", &n);

    while (n!=0)
    {
        rem=n%16;
        hex[i]=hexa[rem];
        n/=16;
        ++i;
    }

    for(i=--i; i>=0; --i)
        printf("%c", hex[i]);

    printf("\n");

    return 0;
}
