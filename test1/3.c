#include <stdio.h>

int my_fun(int x){
    if(x<=0){
        return 1;
    }
    return(x+my_fun(x-2));
}

void main(){
    int x=4;

    printf("%d \n", my_fun(x));
}