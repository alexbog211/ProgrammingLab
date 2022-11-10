#include <stdio.h>

int nat(int n){
    if(n==1){
        printf("1 \n");
    }
    else{
        printf("%d \n",n);
        return(nat(n-1));
    }
}

void main(){
    int n=50;

    nat(n);
}