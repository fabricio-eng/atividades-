#include <stdio.h>

int main() {
    int numero1, numero2;
    
    printf("Insira o primeiro numero: ");
    scanf("%d", &numero1);
    
    printf("Insira o segundo numero: ");
    scanf("%d", &numero2);
    
    
    switch(numero1 > numero2) {
        case 1:
            printf("O primeiro numero (%d) e maior.\n", numero1);
            break;
        case 0:
            switch(numero1 < numero2) {
                case 1:
                    printf("O segundo numero (%d) e maior.\n", numero2);
                    break;
                case 0:
                    printf("Os numeros sao iguais.\n");
                    break;
           default:
           	printf("numero invalido.");
		    }
            
    }
    
    return 0;
}
