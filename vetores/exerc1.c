#include <stdio.h>
#define TAM 10

int main(){
   int v[TAM]; 
   int soma = 0,neg=0,zero=0;
   
   for(int i=0;i<TAM;i++){
        printf("Digite o %d elemento do vetor:",(i+1));
        scanf("%d",&v[i]);
        v[i] < 0 ? neg++ : 
        v[i] == 0 && zero++;
        if(v[i]>0){
            soma+=v[i];
        }
   }   

   printf("negativos: %d",neg);
   printf("zeros: %d",zero);
   printf("soma: %d",soma);
}