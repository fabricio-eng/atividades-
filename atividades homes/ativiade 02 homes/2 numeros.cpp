#include <stdio.h>

int main() {
    int num1, num2;

    // Solicita ao usu�rio para digitar dois n�meros
    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    // Calcula a diferen�a entre os dois n�meros
    int diff = num1 - num2;

    // Usa o switch para determinar qual n�mero � maior
    switch (diff) {
        case 0:
            printf("Os n�meros s�o iguais: %d e %d\n", num1, num2);
            break;
        default:
            switch (diff > 0) {
                case 1:
                    printf("O maior n�mero �: %d\n", num1);
                    break;
                case 0:
                    printf("O maior n�mero �: %d\n", num2);
                    break;
            }
            break;
    }

    return 0;
}

