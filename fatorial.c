#include <stdio.h>

unsigned long long fatorial(int num);

int main() {
    int numero;

   
    printf("Digite um número: ");
    scanf("%d", &numero);

    printf("O fatorial de %d é %llu\n", numero, fatorial(numero));

    return 0;
}

unsigned long long fatorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * fatorial(num - 1);
    }
}
