#include <stdio.h>

float somaTermos (int n);
int fatorial(int n);

int main(){
    int num;
    do{ 
        printf("Digite o valor de num:\n");
        scanf("%d",&num);
    }while(num<=0 || num>=100);

    printf("A soma dos termos %d é:%.2f",num,somaTermos(num));

    return 0;
}

int fatorial(int n){
    int fat=1;

    for(int i=0;i<=n;i++){
        if(i==0){
            fat = 1;
        }else{
            fat = fat * i;
        }
    }
    return fat;
}

float somaTermos (int n){
    float sum=0;
    int count = n;

    for(int i=1;i<=n;i++){
        sum += n*fatorial(i);        
        count--;
    }

    return sum;
}
