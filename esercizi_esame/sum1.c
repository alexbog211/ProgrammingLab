#include <stdio.h>

int sum(int n){
    if(n==0){
        return 0;
    }
    return n+sum(n-1);
}

void main(){
    int n;

    printf("Inserire il numero n: ");
    scanf("%d", &n);

    printf("La somma è: %d \n",sum(n));
    
}