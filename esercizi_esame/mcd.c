#include <stdio.h>

int mcd(int x, int y){
    if(x==y){
        return x;
    }

    if(x>=y){
        printf("x=%d y=%d \n", x,y);
        return mcd(x-y,y);
    }
    else{
        printf("x=%d y=%d \n", x,y);
        return mcd(x,y-x);
    }
}

void main(){
    int x;
    int y;

    printf("Inserire x e y: ");
    scanf("%d %d", &x,&y);

    printf("Il MCD è: %d \n", mcd(x,y));
}