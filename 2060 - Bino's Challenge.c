#include <stdio.h>

int main(void)

{
    int n, i, two=0, three=0, four=0, five=0;

    scanf("%i", &n);

    int arr[n];

    for (i=0; i<n; ++i)
        scanf("%i", &arr[i]);

    for (i=0; i<n; ++i)
    {
        if (arr[i]%2==0)
            ++two;

        if (arr[i]%3==0)
            ++three;

        if (arr[i]%4==0)
            ++four;

        if (arr[i]%5==0)
            ++five;
    }

    printf("%i Multiplo(s) de 2\n%i Multiplo(s) de 3\n%i Multiplo(s) de 4\n%i Multiplo(s) de 5\n", two, three, four, five);

    return 0;
}
