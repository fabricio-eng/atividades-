# include <stdio.h>

int main() {
	////// inicalização das variaveis 
	char nome[] = "Fabricio"; 
	char sobrenome[] = "Franco";
	int idade = 18; 
	float altura = 1.79; 
	
	//// exibir dados armazenados
	
	printf("Nome: %s\n", nome);
	printf("Sobrenome: %s\n", sobrenome);
	printf("Idade: %d\n", idade);
	printf("Altura ; %.2f\n", altura);

	
	return 0;
}
