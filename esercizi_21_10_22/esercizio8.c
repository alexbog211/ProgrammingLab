#include <stdio.h>

double funz_sum(int n){
    double sum;
    double imeno;
    for(int k=0;k<=n;k++){
        imeno=2*k+1;
        imeno=imeno*imeno;
        sum=sum+1/imeno;
    }
    return sum;
}

void main(){
    int n;

    printf("Inserire un numero n: ");
    scanf("%d", &n);

    printf("La somma è: %lf", funz_sum(n));
    
    
}