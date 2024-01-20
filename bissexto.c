#include <stdio.h>
#include <stdbool.h>

int bissexto(int ano) {
    if (ano % 4 == 0) {
        if (ano % 100 != 0 || (ano % 400 == 0 && ano % 100 == 0)) {
            return 1; 
        }
    }
    return 0; 
}

int main() {
    int ano, continuar = 4;
    bool estado, verif = true;

    do {
        printf("Digite um ano: ");
        scanf("%d", &ano);

        if (bissexto(ano)) {
            printf("%d é ano bissexto.\n", ano);
        } else {
            printf("%d não é ano bissexto.\n", ano);
        }

        while(verif==true){
        
        printf("Deseja realizar outro cálculo? (1 para sim, 0 para não): ");
        scanf("%d", &continuar);
        
        if (continuar==1){
            estado=true;
            verif=false;
        }
        
        else if (continuar==0) {
            estado=false;
            printf("Programa encerrado.\n");
            verif=false;
        }
        else {
            printf("O número inserido é inválido, tente novamente!\n");
            verif=true;
        }
}
    verif = true;

    } while (estado==true);
    
     return 0;
}

