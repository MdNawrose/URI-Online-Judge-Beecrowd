#include <stdio.h>

int main() {
    int T, A, B, C, D, E;
    int correct_count = 0;
    

    scanf("%d", &T);
    scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
    
    if (A == T) correct_count++;
    if (B == T) correct_count++;
    if (C == T) correct_count++;
    if (D == T) correct_count++;
    if (E == T) correct_count++;
    
    printf("%d\n", correct_count);
    
    return 0;
}
