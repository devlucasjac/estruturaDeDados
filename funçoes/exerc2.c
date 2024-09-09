#include <stdio.h>

#define TAM 10

float maiorNum(float v[TAM]);
float menorNum(float v[TAM]);

int main(){    
    float v[TAM];

    for(int i=0;i<TAM;i++){
        printf("Digite o %d elemento do vetor:",(i+1));
        scanf("%f",&v[i]);
    }
    printf("Maior valor: %f",maiorNum(v));
    printf("Menor valor: %f",menorNum(v));
}

float menorNum(float v[TAM]){
    float m;
    for(int i=0;i<TAM;i++){
        if(i==0){
            m=v[i];
        }else{
            if(v[i]<m){
                m=v[i];
            }
        }
    }

    return m;
}

float maiorNum(float v[TAM]){
    float m;
    for(int i=0;i<TAM;i++){
        if(i==0){
            m=v[i];
        }else{
            if(v[i]>m){
                m=v[i];
            }
        }
    }

    return m;
}