#include <stdio.h>

void scambio(int * x, int * y){
    int temp;
    temp= * x;
    *x = *y;
    *y=temp;

}

void main(){
    int x=100;
    int y=264;
    scambio(&x,&y);

    printf("Sacmbio: %d %d", x,y);
    }
    
