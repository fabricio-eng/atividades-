#include <stdio.h>

int main() {
    int idade;
    printf("digite sua idade:");
    scanf("%d", &idade);
    
    if(idade <18){
    	printf("Voc� e menor de idade.\n");
	} else{
		printf("Voc� e maior de idade.\n");
	}
	return 0;
}
