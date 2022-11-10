#include <stdio.h>

int succ(int n){
    if(n==0){
        return 4;
    }

    return(4*succ(n-1)+3*n);
}

void main(){
    int n;

    printf("Inserire un numero n: ");
    scanf("%d", &n);

    printf("%d\n", succ(n));
}