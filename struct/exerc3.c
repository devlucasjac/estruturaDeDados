#include <stdio.h>

typedef struct{
    char nome[20];
    float salario;
    int anos;
}Funcionario;

int main(){
    Funcionario funcionarios[4];

    int mA=0,ind;
    float sum,media;

    for(int i=0;i<4;i++){
        printf("Nome do funcionario:");
        scanf(" %20[^\n]",funcionarios[i].nome);        

        printf("Salario:");
        scanf(" %f",&funcionarios[i].salario);        

        printf("Anos:");
        scanf(" %d",&funcionarios[i].anos);  

        sum+=funcionarios[i].salario; 
        if(funcionarios[i].anos > mA){
            mA=funcionarios[i].anos;
            ind=i;
        }
    }
    media = sum/4;
    printf("Media salarial: %f",media);
    printf("Funcionario mais velho:%s.\n Tempo de serviço:%d.",funcionarios[ind].nome,funcionarios[ind].anos);

}