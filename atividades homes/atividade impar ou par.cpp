#include <stdio.h>

int main () {
	
	int numero;
	
	printf("digite um numero:");
	scanf("%d", &numero);
	
	if (numero % 2 == 0) {
		printf("este numero e par.\n",numero);
	} else {
		printf("este numero e impar.\n" , numero);
		
	}
	
	return 0;
}
