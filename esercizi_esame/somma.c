#include <stdio.h>

int somma(int n){
    if(n==1){
        return 1;
    }
    return(n*(n+1)/2+somma(n-1));
}

void main(){
    int n;

    printf("Inserire il numero n: ");
    scanf("%d", &n);

    printf("%d \n",somma(n));
}