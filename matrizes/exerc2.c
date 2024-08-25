#include <stdio.h>
#define TAM 4

int main(){
    int m[TAM][TAM];
    int tP=0,tI=0,sP=0,sI=0;
    int DP=0,DS=0;

    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("Digite o elemento [%d][%d] da matriz A:",(i+1),(j+1));
            scanf("%d",&m[i][j]);
            
            if(m[i][j]%2==0){
                tP++;
                sP+=m[i][j];
                if(i==j){
                    DP++;
                }
            }else{
                tI++;
                sI+=m[i][j];
                if(i+j==TAM-1){
                    DS+=m[i][j];
                }
            }
        }
    }

    printf("Total pares: %d\n Soma pares: %d\n Total ímpares: %d\n Soma ímpares: %d\n DP: %d\n DS: %d\n",tP,sP,tI,sI,DP,DS);
}