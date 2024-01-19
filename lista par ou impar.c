#include <stdio.h>

int main() {
    int qnt, i;

   
    printf("Digite a quantidade de números da lista: ");
    scanf("%d", &qnt);

    int num[qnt];
    
    
    printf("Digite os números:\n");
    for (i = 0; i < qnt; i++) {
        scanf("%d", &num[i]);
    }

  
    printf("Pares: ");
    for (i = 0; i < qnt; i++) {
        if (num[i] % 2 == 0) {
            printf("%d ", num[i]);
        }
    }

    
    printf("\nImpares: ");
    for (i = 0; i < qnt; i++) {
        if (num[i] % 2 != 0) {
            printf("%d ", num[i]);
        }
    }

    return 0;
}
