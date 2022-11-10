#include <stdio.h>

void main() {
    int n;
    printf("Inserisci un numero intero:");
    scanf("%d", &n);
    while(n>0){
        printf("%d\n",n);
        n=n-1;
    }
}