#include <stdio.h>

float g(int x){
    return x*x;
}

float f(int x){
    if(x<g(x-2)){
        return 1.0;
    }
    return(x*x-f(x-1));
}

void main(){
    int x=-10;

    printf("%lf \n", f(x));
}