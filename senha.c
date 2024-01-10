#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool criarsenha(char senha[]) {
    if (strlen(senha) < 8) {
        return false;
    }

    int maiuscula = 0, minuscula = 0, numero = 0, especial = 0;

    for (int i = 0; senha[i] != '\0'; i++) {
        if (senha[i] >= 'A' && senha[i] <= 'Z') {
            maiuscula = 1;
        } else if (senha[i] >= 'a' && senha[i] <= 'z') {
           minuscula = 1;
        } else if (senha[i] >= '0' && senha[i] <= '9') {
           numero = 1;
        } else if (!(senha[i] >= 'a' && senha[i] <= 'z') &&
                   !(senha[i] >= 'A' && senha[i] <= 'Z') &&
                   !(senha[i] >= '0' && senha[i] <= '9')) {
            especial = 1;
        }
    }

    return maiuscula && minuscula && numero && especial;
}

int main() {
    char senha[50];
    
    printf("Digite uma senha: ");
    fgets(senha, sizeof(senha), stdin);

   
    senha[strcspn(senha, "\n")] = '\0';

    if (criarsenha(senha)) {
        printf("Senha válida.\n");
    } else {
        printf("Senha inválida, tente novamente.\n");
    }

    return 0;
}
