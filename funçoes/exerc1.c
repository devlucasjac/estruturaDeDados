#include <stdio.h>
#include <math.h>


double hipotenusa(double a,double b){
    double h=sqrt(pow(a,2)+pow(b,2));
    return h;
}

int main(){
    double a,b;
    printf("Digite o valor do lado a:\n");
    scanf("%lf",&a);
    printf("Digite o valor do lado b:\n");
    scanf("%lf",&b);
    printf("O valor da hipotenusa: %f",hipotenusa(a,b));
    return 0;
}