#include <stdio.h>

int main() {
	
	int temposegundos , horas, minutos,segundos;
	
	printf("digite o segundos :");
	scanf("%d" , &temposegundos);
	
	horas = temposegundos / 3600;
	minutos = (temposegundos % 3600) /60;
	segundos = (temposegundos % 3600) %60 ;
	
	printf("o tempo equivalente de %d horas, minutos %d, segundos %d.\n",horas);
	
	
	
	return 0;
}
