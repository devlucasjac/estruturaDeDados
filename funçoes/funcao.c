#include <stdio.h>
#include <math.h>

void mensagem(void);

int soma(int a, int b){
    int s;
    s = a + b;
    return s;
}

int main(){
    mensagem();
    int res = soma(8,5);
    printf("soma %d",res);
    return 0;
}

void mensagem(void){
    printf("Ola mundo!.\n");
}