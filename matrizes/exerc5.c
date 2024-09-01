#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main(){
    float m[TAM][TAM];
    float sum=0;

    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("Imprima o valor do elemento [%d] [%d] da matriz A:",(i+1),(j+1));
            scanf("%f",&m[i][j]);
            if(i+j<=TAM-1){
                sum+=m[i][j];
            }
        }
    }

    printf("A soma dos elementos situados acima da diagonal secundaria é: %f",sum);
}