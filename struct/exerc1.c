#include <stdio.h>

typedef struct 
{
    char nome[20];
    int matricula;
    float nota[3];
}Aluno;

int main(){
    int max,aluno,sum;
    float media;
    Aluno alunos[4];

    for(int i=0;i<4;i++){
        sum=0;

        printf("Nome do aluno:");
        scanf(" %30[^\n]",alunos[i].nome);
        
        for(int j=0;j<3;j++){
            printf("nota: ");
            scanf(" %f",&alunos[i].nota[j]);
            sum+=alunos[i].nota[j];
        }

        printf("Matricula:");
        scanf(" %d",&alunos[i].matricula);

        media = sum/3.0;

        if(i==0){
            max=media;
            aluno=i;
        }else if(media > max){
            max = media;
            aluno=i;
        }        
    }

    printf("O aluno com maior media é: %s\n Matricula: %d\n Media: %.2f",alunos[aluno].nome,alunos[aluno].matricula,media);

}
