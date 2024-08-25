#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main(){
    float DP=0,DS=1;
    float m[4][4];

    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            /*printf("Digite o elemento [%d][%d] da matriz A:",(i+1),(j+1));
            scanf("%f",&m[i][j]);*/
            m[i][j] = ((float) rand() / RAND_MAX * 10);
            printf("Valor RAND_MAX: %d",RAND_MAX);
            if(i==j){
                DP+=m[i][j];
            }
            if(i+j==TAM-1){
                DS*=m[i][j];
            }
        }        
    }

    printf("Valor de DP: %.2f\n Valor de DS: %.2f\n",DP,DS);
}