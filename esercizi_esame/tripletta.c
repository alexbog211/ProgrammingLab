#include <stdio.h>

int tripletta(int x, int y, int w){
    if(w>x && w>y){
        return w;
    }

    if(x<=y && x<=w){
        printf("Il minimo di x,y,w=(%d,%d,%d) è: %d \n", x,y,w,x);
    }
    else if(y<=x && y<=w){
         printf("Il minimo di x,y,w=(%d,%d,%d) è: %d \n", x,y,w,y);
    }
    else {
        printf("Il minimo di x,y,w=(%d,%d,%d) è: %d \n", x,y,w,w);
    }
    

    return(tripletta(x,y,w+1));
}

void main(){
    int x;
    int y;
    int w=1;

    printf("Inserire x e y: ");
    scanf("%d %d", &x, &y);

    printf("SOS %d \n", tripletta(x,y,w));
}