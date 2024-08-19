#include <stdio.h>
#define TAM 10

int main(){
    int v[TAM];
    float m;

    for(int i=0;i<TAM;i++){
        printf("Digite o valor do elemento %d:",(i+1));
        scanf("%d",&v[i]);
        m+=v[i];
    }

    m=m/TAM;

    for(int i=0;i<TAM;i++){
        if(v[i]>m){
            printf("A nota %d é maior que a media das notas.\n",v[i]);
        }
    }
}