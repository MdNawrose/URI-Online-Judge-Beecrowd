#include <stdio.h>

int main(void)

{
    unsigned long long int n, rev=0, rem, count=0, i=0;

    scanf("%llu", &n);

    while (n!=0)
    {
        rem=n%10;

        if (rem==0 && i==0)
            ++count;

        else
            i=1;

        rev=rev*10+rem;
        n/=10;
    }

    for (i=0; i<count; ++i)
        printf("0");

    printf("%llu\n", rev);

    return 0;
}
