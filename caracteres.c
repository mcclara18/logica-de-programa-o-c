#include <stdio.h>

void contagem (char frase[]) {
    int contador[128] = {0}; 

    for (int i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ') {
            contador[frase[i]]++;
        }
    }

    printf("Iniciando a contagem de caracteres:\n");

    for (int i = 0; i < 128; i++) {
        if (contador[i] > 0) {
            printf("'%c': %d\n", i, contador[i]);
        }
    }
}

int main() {
    char frase[1000];

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    contagem (frase);

    return 0;
}
