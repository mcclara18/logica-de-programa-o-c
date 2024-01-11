#include <stdio.h>

int main() {
    while (1) {
        float num, res;
        printf("Digite um número: ");
        scanf("%f", &num);

        res = num * num;
        printf("O quadrado de %.2f é %.2f\n", num, res);

        char sn;
        printf("Deseja realizar outro cálculo? (S para Sim, qualquer outra tecla para encerrar): ");
        scanf(" %c", &sn);

        if (sn != 'S' && sn != 's') {
            break;
        }
    }

    return 0;
}
