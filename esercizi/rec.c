# include <stdio.h>

void f(int a, int b){
    if(a==b){
        printf("Sos %d \n", a);
    }

    else {printf("Lol %d \n ", b);
    f(a,b-1);
}}

void main(){
    int a=5;
    int b=10;
    int k;

    f(a,b);
    
}