#include <stdio.h>


void fibonacci(int n) {
    int primeiro = 0, segundo = 1, proximo, i;
    
    printf("Os primeiros %d números da sequência de Fibonacci são:\n", n);
    
    void fibonacci 
    int primeiro = 0, segundo = 1, proximo, i;
    
    printf("Os primeiros %d números da sequência de Fibonacci são:\n", n);
    
      for (i = 2; i < n; i++) {
        proximo = primeiro + segundo;
        printf(", %d", proximo);
        primeiro = segundo;
        segundo = proximo;
    }
    printf("\n");


int main() {
    int n;
    
    printf("Digite quantos números da sequência de Fibonacci você deseja ver: ");
    scanf("%d", &n);
    
     if (n <= 0) {
        printf("Por favor, insira um número positivo.\n");
        return 1; // Retorna 1 indicando erro
    }
    fibonacci(n);
    
    return 0;
}
