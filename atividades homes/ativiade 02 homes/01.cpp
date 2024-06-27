#include <stdio.h>

#define TAMANHO 5

// Fun��o para calcular a soma dos elementos do vetor
int calcularSoma(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i <= tamanho; i++) { // ERRO AQUI
        soma += vetor[i];
    }
    return soma;
}

// Fun��o para encontrar o maior elemento do vetor
int encontrarMaior(int vetor[], int tamanho) {
    int maior = vetor[0];
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }
    return maior;
}

int main() {
    int numeros[TAMANHO];
    
    // Entrada de dados
    printf("Digite %d numeros inteiros:\n", TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &numeros[i]);
    }

    // Chamando as fun��es e exibindo os resultados
    int soma = calcularSoma(numeros, TAMANHO);
    int maior = encontrarMaior(numeros, TAMANHO);

    printf("A soma dos elementos do vetor �: %d\n", soma);
    printf("O maior elemento do vetor �: %d\n", maior);

    return 0;
}


