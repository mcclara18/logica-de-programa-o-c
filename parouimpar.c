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

    
    printf("Digite um númo: ");
    scanf("%d", &num);

    
    if (ver(num)) {
        printf("%d é par.\n", num);
    } else {
        printf("%d é ímpar.\n", num);
    }

    return 0;
}
