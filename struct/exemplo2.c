#include <stdio.h>

#define TAM 2

typedef struct {
    char nome_aluno[30];
    char nome_mae[30];
    int idade;
    float altura;
    char curso[30];
}Estudante;

int main(){
    Estudante alunos[TAM];

    for(int i=0;i<TAM;i++){
        printf("Nome do aluno: %s\n",aluno1.nome_aluno);
        scanf(" %30[^\n]",alunos[i].nome_aluno);

        printf("Nome da mae: %s\n",aluno1.nome_mae);
        scanf(" %30[^\n]",alunos[i].nome_mae);

        printf("Idade: %d\n",aluno1.idade);
        scanf(" %d",&alunos[i].nome_aluno);

        printf("Altura: %f\n",aluno1.altura);
        scanf(" %f",&alunos[i].nome_aluno);

        printf("Curso: %s\n",aluno1.curso);
        scanf(" %30[^\n]",alunos[i].curso);
    }

    printf("Nome do aluno: %s\n",aluno1.nome_aluno);
    printf("Nome da mae: %s\n",aluno1.nome_mae);
    printf("Idade: %d\n",aluno1.idade);
    printf("Altura: %f\n",aluno1.altura);
    printf("Curso: %s\n",aluno1.curso);

}