#include <stdio.h>
#define TAM 10

int main()
{ 
    float v[TAM]; /* Declara um vetor com 10 elementos */
    float soma = 0.0, med; /* Variaveis para o calculo da media */
    int i; /* Variavel usada com indice do vetor */
    /* Leitura dos valores */
    for(i=0;i<TAM;i++) {/* Faz indice variar de 0 a 9 */    
        printf("Digite o %d elemento do vetor:",(i+1));
        scanf("%f",&v[i]); /* Le cada elemento do vetor */
    }
    for(i=0;i<TAM;i++) /* Calculo da soma */
        soma = soma + v[i];    
    med = soma/TAM; /* Calculo da media */
    printf("Media = %.2f\n", med); /* Exibicao do resultado */
    return 0;
}