#include <stdio.h>

#define TAM 4

int somaTodos(int m[TAM][TAM]);
int somaCol2(int m[TAM][TAM]);

int main(){
    int m[TAM][TAM]={
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}};

    printf("Soma de todos: %d\n",somaTodos(m));
    printf("Soma de coluna 2: %d\n",somaCol2(m));
    return 0;
}

int somaCol2(int m[TAM][TAM]){
    int sum=0;

    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            if(j==1){
                printf("%d",m[i][j]);
                sum+=m[i][j];
            }
        }
    }

    return sum;
}

int somaTodos(int m[TAM][TAM]){
    int sum=0;

    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            sum+=m[i][j];
        }
    }

    return sum;
}