# include <stdio.h> 

	int main () {
	//// botar as variqaveis 
	
	char nome [50];
	char sobrenome [50];
	int idade;
	float altura;
	
	///// coleta de dados 
	printf("digite seu nome : ");
	scanf("%s", &nome);
	
	
	printf("digite seu sobrenome: ");
	scanf("%s", &sobrenome);
	
	printf("digite sua idade: ") ;
	scanf("%d", &idade);
	printf("digite sua altura em metros:");
	scanf("%f" , &altura) ;
	
	//// exibindo os dados
	printf("dados cadastrados :\n");
	printf("nome: %s %s\n" , nome, sobrenome);
	printf("idade: %d anos\n" ,idade);
	printf("altura : %.2f metros\n" , altura);
	
	
	return 0;
	
	}
