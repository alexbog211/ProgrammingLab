#include <stdio.h>

int dis_par(int n, int m){

    if (n>m)
        printf("%d \n", n);
    
    
    if (n%2==0){
        printf("%d è pari \n", n);
    }
    else {
        printf("%d è dispari \n", n);
    }
    return dis_par(n-1);
    }

void main(){
    int n;

    printf("Inserire il numero n: ");
    scanf("%d", &n);

    dis_par(n,2);
    dis_par(n,1);
}