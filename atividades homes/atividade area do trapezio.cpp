#include <stdio.h>

int main () {
	//definindo as dimensoes do trapezio
	float baseMaior = 3.0;    //base do trapezio em centimetros
	float baseMenor = 8.0;     // base menor do trapezio em centimetros
	float altura = 4.0;        // altura do trapezio em centimetros
	
	//calculando a area do trapezio 
	float area = ((baseMaior + baseMenor)*altura)/ 2;
	
	///imprimir o resultado
	printf("A área do trapezio é: %.2f cm²\n",area);
	
	return 0;
	
}
