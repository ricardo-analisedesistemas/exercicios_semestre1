#include <stdio.h>

int main() {
    float pib_bilhoes;  // Usuário digita "90.9" (bilhões)
    long long pib_unidades;  // Armazena 90900000000

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib_bilhoes);

    pib_unidades = (long long)(pib_bilhoes * 1e9);  // Converte para unidades

    printf("PIB em unidades: %lld\n", pib_unidades);
    printf("PIB formatado: %.2f bilhões\n", pib_bilhoes);  // Volta para bilhões

    return 0;
}