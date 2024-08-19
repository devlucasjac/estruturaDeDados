#include <stdio.h>
#define TAM 7

int main(){
    float v[TAM];

    for(int i=0;i<TAM;i++){
        printf("Digite o valor do %d elemento:",(i+1));
        scanf("%f",&v[i]);

        if(v[i]==10){
            printf("O %d elemento é igual a 10\n",i);
        }
    }
}