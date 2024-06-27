#include <stdio.h>

int main () {
	
	int numero1,numero2,numero3;
	
	printf("digite o preimeiro numero:");
	scanf("%d",&numero1);
	
	printf("digite o segundo numero:");
	scanf("%d",&numero2);
	
	printf("digite o terceiro numero:");
	scanf("%d",&numero3);
	
	float media =( numero1+numero2+numero3)/3;
	
	printf("a media entre esses tres numeros é: %.2f\n",media);
	
	
	
	

	return 0;
}
