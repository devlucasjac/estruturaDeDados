#include <stdio.h>
#include <stdlib.h>
#define TAM 4

int main(){
    int m[TAM][TAM];
    int vP[TAM],vI[TAM];

    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("Digite o elemento [%d][%d] da matriz A:",(i+1),(j+1));
            scanf("%d",&m[i][j]);
        }
    }

    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(m[i][j]%2==0){
                vP[i]++;
            }       
            if(m[j][i]%2!=0){
                vI[i]++;
            }     
        }
    }

    for(int i=0;i<TAM;i++){
        printf("Pares em %d: %d\n",i,vP[i]);
        printf("Impares em %d: %d\n",i,vI[i]);
    }
}