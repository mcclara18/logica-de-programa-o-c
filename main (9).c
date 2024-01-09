#include <stdio.h>

float calculo(float n1, float n2, int atv, int atv2) {
    float p1 = 0.7;
    float p2 = 0.3;

    float notas = (n1 * p1) + (n2 * p2);

    float pontos = (atv / (float)atv2) * 10.0;
    notas += pontos;

    return (notas > 10.0) ? 10.0 : notas;
}

float cmedias(float notaatv, float notaprova) {
    float pesoatv = 0.8;
    float pesoprova = 0.2;

    return (notaatv * pesoatv) + (notaprova * pesoprova);
}

int main() {
    float n1, n2, notaprova;
    int atv, atv2;

    for (int bimestre = 1; bimestre <= 4; bimestre++) {
        printf("Bimestre %d:\n", bimestre);
        printf("Nota da avaliação 1: ");
        scanf("%f", &n1);
        printf("Nota da avaliação 2: ");
        scanf("%f", &n2);
        printf("Atividades: ");
        scanf("%d", &atv);
        printf("Atividades realizadas: ");
        scanf("%d", &atv2);

        float notas = calculo(n1, n2, atv, atv2);
        printf("Nota final %d: %.2f\n", bimestre, notas);

        float notaprova;
        printf("Nota da prova: ");
        scanf("%f", &notaprova);

        float mediabimestre = cmedias(notas, notaprova);
        printf("Média do bimestre %d: %.2f\n", bimestre, mediabimestre);
    }

    return 0;
}
