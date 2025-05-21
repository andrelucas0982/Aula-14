#include <stdio.h>
#include <math.h>

float calcular_tempo_queda(float altura);

float calcular_distancia_liberacao(float velocidade, float altura);

int main() {

    float altura, velocidade;

    printf("Digite a Altura do aviao en metros: ");
    scanf("%f",&altura);

    printf("Digite a velocidade horizontal do aviao em m/s: ");
    scanf("%f",&velocidade);


    float tempo = calcular_tempo_queda(altura);
    float distancia = calcular_distancia_liberacao(velocidade, altura);


    printf("Tempo para a caixa atingir o solo: %.1f segundos!\n", tempo);
    printf("Distância horizontal que a caixa deve ser solta: %.1f metros\n", distancia);

    return 0;

}

float calcular_tempo_queda(float altura) {

    float gravidade = 9.8;
    float tempo =  sqrt(2 * altura / gravidade);

    return tempo;

}

float calcular_distancia_liberacao(float velocidade, float altura){

    float gravidade = 9.8;
    float tempo = calcular_tempo_queda(altura);
    float distancia = velocidade * tempo;

    return distancia;

}