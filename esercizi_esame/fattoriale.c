#include <stdio.h>

int fatt(int n){
    if (n==0){
        return(1);
    }
    return(n*fatt(n-1));
}

void main(){
    int n;
    int fat;

    printf("Inserire un numero per il fattoriale: ");
    scanf("%d", &n);

    fat=fatt(n);
    printf("Il fattoriale è: %d \n", fat);
    
}