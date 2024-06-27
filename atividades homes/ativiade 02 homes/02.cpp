# include <stdio.h>
#define SEGUNDOS_POR_MINUTO 60
#define MINUTOS_POR_HORAS 60 
#define HORAS_POR_DIA 24 
#define DIAS_POR_ANO 365

int main () {
	int idade ;
	long long int idade_segundos;
	
	printf("digite sua idade:");
	scanf("%d",&idade);
	
	idade_segundos = (long long int ) idade * SEGUNDOS_POR_MINUTO * MINUTOS_POR_HORAS* HORAS_POR_DIA * DIAS_POR_ANO;
	
	printf("voce viveu: %lld" , idade_segundos) ;
	
	return 0 ;
}
