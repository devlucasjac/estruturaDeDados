#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(){
    int a [5][5],b[5][5],c[5][5]; 
    
    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
            printf("Imprima o valor do elemento [%d] [%d] da matriz A:",(i+1),(j+1));
            scanf("%d",&a[i][j]);
            printf("Imprima o valor do elemento [%d] [%d] da matriz B:",(i+1),(j+1));
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<TAM;i++){
        for(int j=0;j<TAM;j++){
           if(i<=j){
            c[i][j]=a[i][j];
           }else{
            c[i][j]=b[i][j];
           }
           printf("%d",c[i][j]);
        }
        printf("\n");
    }

}