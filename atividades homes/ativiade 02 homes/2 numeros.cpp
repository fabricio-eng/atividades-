#include <stdio.h>

int main() {
    int num1, num2;

    // Solicita ao usuário para digitar dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Calcula a diferença entre os dois números
    int diff = num1 - num2;

    // Usa o switch para determinar qual número é maior
    switch (diff) {
        case 0:
            printf("Os números são iguais: %d e %d\n", num1, num2);
            break;
        default:
            switch (diff > 0) {
                case 1:
                    printf("O maior número é: %d\n", num1);
                    break;
                case 0:
                    printf("O maior número é: %d\n", num2);
                    break;
            }
            break;
    }

    return 0;
}

