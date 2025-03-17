#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if(N >= 86)
        printf("A\n");

    else if(N >= 61 && N <= 85)
        printf("B\n");

    else if(N >= 36 && N <= 60)
        printf("C\n");

    else if(N >= 1 && N <= 35)
        printf("D\n");

    else
        printf("E\n");
    return 0;
}
