#include <stdio.h>

typedef struct 
{
    char nome[20];
    int qtde;
    float preço;
}Produto;

int main(){
    int max,min,idMax,idMin;
    float sum;

    Produto produtos[4];


    for(int i=0;i<4;i++){       
        printf("Nome do aluno:");
        scanf(" %20[^\n]",produtos[i].nome);        

        printf("Preço:");
        scanf(" %f",&produtos[i].preço);        

        printf("Quantidade:");
        scanf(" %d",&produtos[i].qtde);    
        sum+=produtos[i].preço * produtos[i].qtde;
        if(i==0){
            max=produtos[i].preço;
            min=produtos[i].preço;
            idMax=i;
            idMin=i;
        } else if(produtos[i].preço > max){
            max=produtos[i].preço;
            idMax=i;
        }else if(produtos[i].preço < min){
            min=produtos[i].preço;
            idMin=i;
        }
    }

    printf("Nome do mais caro: %s\n Preço: %f",produtos[idMax].nome,produtos[idMax].preço);
    printf("Nome do mais barato: %s\n Preço: %f",produtos[idMin].nome,produtos[idMin].preço);
    printf("Valor arrecadado: %f",sum);
}