#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 3

int main(){
    int num;
    int m[TAM][TAM];

    printf("Digite o valor de num:");
    scanf("%d",&num);

    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            m[i][j]=pow(num,i+j);
            printf("%d",m[i][j]);
        }
        printf("\n");
    }
}