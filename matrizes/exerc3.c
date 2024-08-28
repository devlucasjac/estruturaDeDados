#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main(){
    int m[TAM][TAM];
    int sL=0,sC=0,sT=0;

    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("Digite o elemento [%d][%d] da matriz A:",(i+1),(j+1));
            scanf("%d",&m[i][j]);

            sT+=m[i][j];

            if(i==3){
                sL += m[i][j];
            }
            if(j==1){
                sC += m[i][j];
            }
        }
    }

    printf("Soma linha 4:%d\n Soma coluna 2:%d\n Soma total:%d",sL,sC,sT);

}