#include <stdio.h>

int main() {
    double M[12][12], sum = 0.0;
    char O;
    int count = 0;

    scanf(" %c", &O);

    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

    for (int i = 0; i < 11; i++) {
        for (int j = i + 1; j < 12; j++) {
            sum += M[i][j];
            count++;
        }
    }

    if (O == 'S') {
        printf("%.1lf\n", sum);
    } else if (O == 'M') {
        printf("%.1lf\n", sum / count);
    }

    return 0;
}
