#include <stdio.h>

void coppia(int *p, int *q){
    *p=*p+*q;
    *q=(*p-*q)*(*q);
    
}

void main(){
    int x=3;
    int y=4;

    coppia(&x,&y);

    printf("%d \n", x);
    printf("%d \n", y);
}