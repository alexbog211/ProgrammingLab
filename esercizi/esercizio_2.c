#include <stdio.h>

void main() {
    int x;
    int y;
    printf("Inserire un numero intero per x e y:");
    scanf("%d %d", &x,&y);

    while(x != y){
        if (x>y){
            x=x-y;
        }
        else{
            y=y-x;
        }
    }
    printf("Il numero MCD è: %d \n",y);
}