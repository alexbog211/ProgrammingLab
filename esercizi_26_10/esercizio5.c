#include <stdio.h>

float sum(float n){
    if(n==0){
        return(1);
    }

    return(1/((2*n+1)*(2*n+1))+sum(n-1));
}

void main(){
    float n;
    float k;

    scanf("%f", &n);

    k=sum(n);
    printf("%f \n", k);
}