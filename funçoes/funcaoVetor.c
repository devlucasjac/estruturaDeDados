#include <stdio.h>

#define TAM 5

void dobravetor(int v[TAM]){
    for(int i=0;i<TAM;i++){
        v[i]=v[i]*2;
    }
}

int main(){
    int v[TAM] = {1,2,3,4,5};

    for(int i=0;i<TAM;i++){
        printf("%d \t",v[i]);        
    }
    printf("\n");

    printf("-=- Vetor modificado -=-\n");
    
    dobravetor(v);

    for(int i=0;i<TAM;i++){
        printf("%d \t",v[i]);        
    }
    return 0;
}

