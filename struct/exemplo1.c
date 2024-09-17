#include <stdio.h>

typedef struct {
    char nome_aluno[30];
    char nome_mae[30];
    int idade;
    float altura;
    char curso[30];
}Estudante;

int main(){

    Estudante aluno1={
        "Carlos Silva", "Maria Silva",20,1.75,"Sistemas de informação"
    };

    printf("Nome do aluno: %s\n",aluno1.nome_aluno);
    printf("Nome da mae: %s\n",aluno1.nome_mae);
    printf("Idade: %d\n",aluno1.idade);
    printf("Altura: %f\n",aluno1.altura);
    printf("Curso: %s\n",aluno1.curso);

}
