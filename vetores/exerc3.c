#include <stdio.h>
#define TAM 10

int main(){
    int v[10];
    int mA,mE,pM,pm;

    for(int i=0;i<TAM;i++){
        printf("Digite o %d elemento do vetor: \n",(i+1));
        scanf("%d",&v[i]);

        if(i == 0){
            mA=v[i];
            mE=v[i];
            pm=i;
            pM=i;
        }
        if(v[i] > mA){
            mA=v[i];
            pM=i;
        }
        if(v[i] < mE){
            mE=v[i];
            pm=i;
        }
    }

    printf("Maior valor: %d\n Indice do maior: %d \n Menor valor: %d \n Indice do menor: %d \n",mA,pM,mE,pm);
}