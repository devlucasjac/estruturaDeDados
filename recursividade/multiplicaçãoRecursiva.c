#include <stdio.h>

int multiplicaçaoRecursiva(int p1, int p2){
    if(p1 == 0 || p2 == 0){
        return 0;
    }else if(p1 == 0){
        return p2;
    }else{
        return p2 + multiplicaçaoRecursiva(p1-1,p2);
    }
}

int main(){
    int n = 5,q=6;
    printf("%d multiplicado por %d: %d",n,q,multiplicaçaoRecursiva(n,6));
    return 0;
}