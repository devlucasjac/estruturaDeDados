#include <stdio.h>

int fatorial(int n){
    //é nescessário que haja uma base para que não estoure um erro de stack overflow
    if(n==0){
        return 1;
    }else{
        return n * fatorial(n-1);
    }
}

int main(){
    int num=10;
    printf("Fatorial de %d: %d",num,fatorial(num));
    return 0;
}