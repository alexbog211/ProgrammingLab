#include <stdio.h>

void main(){
    int x;
    int y;
    int w;

    printf("Inserire due numeri: ");
    scanf("%d %d", &x ,&y);
    funz(x,y);
    
}


void funz(int x, int y){
    if (x<=y){
        for (int l=1; l<=y; l++){
            printf("x=%d, y=%d, w=%d \n", x,y,l);
            if(x<=l){
                printf("Minimo è %d \n", x);
            }
            else {
                printf("Minimo è %d \n", l);
            }
        }
    }
    else{
        for (int l=1; l<=x; l++){
            printf("x=%d, y=%d, w=%d \n", x,y,l);
            if(y<=l){
                printf("Minimo è %d \n", y);
            }
            else {
                printf("Minimo è %d \n", l);
            }
    }
}
    }