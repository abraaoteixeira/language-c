#include <stdio.h>

// Função para calcular a média de um conjunto de números
void calcularMedia(const double* numeros, int tamanho) {
    if (tamanho <= 0) {
        printf("Erro: O conjunto deve conter pelo menos um número. \n");
        return;
    }
    double soma = 0.0;
    for (int i= 0; i < tamanho; ++i) {
        soma += numeros[i];
    }

    double media = soma / tamanho;
    printf("A média dos %d números é: %.2lf\n", tamanho, media);
}

int main() {
    // Exemplo de uso da função calcularMedia
    double conjunto1[] = { 10.5, 20.3, 15.7, 18.2 };
    int tamanho1 = sizeof(conjunto1) / sizeof(conjunto1[0]);
    calcularMedia(conjunto1, tamanho1);

    double conjunto2[] = { 5.0, 7.8, 12.6 };
    int tamanho2 = sizeof(conjunto2) / sizeof(conjunto2[0]);
    calcularMedia(conjunto2, tamanho2);

    return 0;
}