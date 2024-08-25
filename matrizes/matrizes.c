#include <stdio.h>
#define TAM 4

int main()
{
    int a[TAM][TAM], b[TAM][TAM]; /* Declara duas matrizes de entrada 4x4 */
    int c[TAM][TAM]; /* Declara uma matriz de saida que recebera a soma */
    int i,j; /* Variaveis usadas como indices das matrizes */
    for(i=0;i<TAM;i++)
        for(j=0;j<TAM;j++) /* Leitura dos valores da matriz A e B */
        {
            printf("Digite o elemento [%d][%d] da matriz A:",(i+1),(j+1));
            scanf("%d",&a[i][j]);
            printf("Digite o elemento [%d][%d] da matriz B:",(i+1),(j+1));
            scanf("%d",&b[i][j]);
        }
    for(i=0;i<TAM;i++)
        for(j=0;j<TAM;j++) /* Soma das matrizes */
            c[i][j]=a[i][j]+b[i][j];
    for(i=0;i<TAM;i++){
        for(j=0;j<TAM;j++) {/* Exibicao do resultado */
            printf ("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}