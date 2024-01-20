#include <stdio.h>

float jurossimples(float capital, float juros, int periodo) {
    float montante = capital * (1 + juros * periodo);
    return montante;
}

int main() {
    float capital, taxa;
    int entrada;

    printf("Digite o capital: ");
    scanf("%f", &capital);

    printf("Digite a taxa de juros (em decimal): ");
    scanf("%f", &taxa);

    printf("Digite o período em anos: ");
    scanf("%d", &entrada);

    float resultado = jurossimples(capital, taxa, entrada);

    printf("O montante final é: %.2f\n", resultado);

    return 0;
}
