#include <stdio.h>
#include <math.h>

#define GRAVIDADE 9.81

int main() {
    float altura, velocidade_inicial, angulo;
    
    printf("Digite a altura relativa ao solo de onde o projeto foi lançado (em metros): ");
    scanf("%f", &altura);
    
    printf("Digite a velocidade inicial do projeto (em m/s): ");
    scanf("%f", &velocidade_inicial);
    
    printf("Digite o ângulo de lançamento do projeto (em graus): ");
    scanf("%f", &angulo);
    
    // Convertendo o ângulo de graus para radianos
    float angulo_radianos = angulo * M_PI / 180.0;
    
    // Calculando o tempo de voo
    float tempo_voo = (2 * velocidade_inicial * sin(angulo_radianos)) / GRAVIDADE;
    
    // Calculando a distância percorrida
    float distancia = velocidade_inicial * cos(angulo_radianos) * tempo_voo;
    
    printf("A distância percorrida pelo projeto é de %.2f metros.\n", distancia);
    
    return 0;
}
