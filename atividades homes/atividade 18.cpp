#include <stdio.h>

int main() {
    int idade;
    printf("digite sua idade:");
    scanf("%d", &idade);
    
    if(idade <18){
    	printf("Você e menor de idade.\n");
	} else{
		printf("Você e maior de idade.\n");
	}
	return 0;
}
