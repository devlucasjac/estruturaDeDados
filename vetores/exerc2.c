#include <stdio.h>
#define TAM 10

int main(){
    int vA[TAM],vN[TAM];
    int mV=0;

    for(int i=0;i<TAM;i++){
        printf("Digite o %d elemento do vetor:",(i+1));
        scanf("%d",&vA[i]);

        if(i == 0){
            mV = vA[i];
        }else{
            if(mV < vA[i]){
                mV = vA[i];
            }
        }
    }

    for(int i=0;i<TAM;i++){
        vN[i] = vA[i] * mV;
        printf("%d vetor antigo: %d\n",(i+1), vA[i]);
        printf("%d vetor novo: %d\n",(i+1), vN[i]);
    }

    printf("Maior valor: %d",mV);

}
