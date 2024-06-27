#include <stdio.h>

#define TAMANHO 5


int calcularSoma(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) { // ouve uma correção aqui nesse codigo ,estava causando um comportamento indefinido
        soma += vetor[i];
    }
    return soma;
}


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
    
    
    printf("Digite %d numeros inteiros:\n", TAMANHO);
    for (int i = 0; i < TAMANHO; i++) {
        scanf("%d", &numeros[i]);
    }


    int soma = calcularSoma(numeros, TAMANHO);
    int maior = encontrarMaior(numeros, TAMANHO);

    printf("A soma dos elementos do vetor é: %d\n", soma);
    printf("O maior elemento do vetor é: %d\n", maior);

    return 0;
}
