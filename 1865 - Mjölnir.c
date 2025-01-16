#include <stdio.h>
#include <string.h>

int main()
{
    int C;
    scanf("%d", &C);

    int vet[C];
    int i;
    int newtons;
    char nome[20];

    for(i=0; i<C; i++){
        scanf("%s %d", nome, &newtons); 
        
        if(strcmp(nome,"Thor") == 0){
            printf("Y\n");
        }

        else{
            printf("N\n");
        }
    }
    return 0;
}
