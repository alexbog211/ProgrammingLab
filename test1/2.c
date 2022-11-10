#include <stdio.h>

int primo(int x){
    
    for(int l=x-1;l>1;l--){
        if(x%l==0){
            return 0;
        }
    }
    return 1;
}

int pi_ric(int n , int i){
    if(i>n){
        return 0;
    }
    return (i*primo(i)+pi_ric(n,i+1));
}

void main(){
    int k=3;
    int n=21;

    printf("%d \n", pi_ric(n,k));
}