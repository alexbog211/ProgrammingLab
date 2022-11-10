#include <stdio.h>

int potenza(int a, int b){
    if(b==0){
        return 1;
    }

    return(a*potenza(a, b-1));
}

void main(){
    int a;
    int b;

    printf("Inserire i numeri a^b: ");
    scanf("%d %d", &a,&b);

    printf("%d \n", potenza(a,b));
}