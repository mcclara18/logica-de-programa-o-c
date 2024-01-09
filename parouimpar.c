#include <stdio.h>


int ver(int numero) {
    if (numero % 2 == 0) {
        return 1; 
    } else {
        return 0;  
    }
}

int main() {
    int num;

    
    printf("Digite um número: ");
    scanf("%d", &num);

    
    if (ver(num)) {
        printf("%d Par.\n", num);
    } else {
        printf("%d Ímpar.\n", num);
    }

    return 0;
}
