#include <stdio.h>

int main () {
	
	char nome ;
	int idade ;
	
	printf("digite sua idade:");
	scanf("%d",&idade);
	
	printf("digite seu nome:");
	scanf("%s",&nome);
	
	if(idade <=12) {
		printf("voce esta na infancia");
	} else if (idade <=17) {
		printf("voce esta na adolecencia");
	} else if (idade <=18){
		printf(" voce esta na fase adulta");
	
	} else   (idade  >= 65) {
		printf("voce esta velho");
	}



return 0;




}
