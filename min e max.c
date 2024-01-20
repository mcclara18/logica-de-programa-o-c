#include <stdio.h>


float cminimo (float num[], int tamanho) {
    float min = num[0];

    for (int i = 1; i < tamanho; ++i) {
        if (num[i] < min) {
            min = num[i];
        }
    }

    return min;
}

float cmax(float num[], int tamanho) {
    float max = num[0];

    for (int i = 1; i < tamanho; ++i) {
        if (num[i] > max) {
            max = num[i];
        }
    }

    return max;
}

int main() {
    float num[100]; 
    int contador = 0;
    float numero;

    printf("Digite uma sequência (insira um número negativo para encerrar):\n");

    while (1) {
        scanf("%f", &numero);

        if (numero < 0) {
            break;
        }

        num[contador] = numero;
        ++contador;
    }

    if (contador == 0) {
        printf("Insira um número.\n");
    } else {
        printf("O valor mínimo é: %.2f\n", cminimo(num, contador));
        printf("O valor máximo é: %.2f\n", cmax(num, contador));
    }

    return 0;
}
