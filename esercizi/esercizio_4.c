#include <stdio.h>

void main(){
    int x=1;
    int y=0;
    int z=0;
    float med;
        
    while(x != 0){
         
        printf("Inserisci un numero per calcolare la media:");
        scanf("%d", &x);
        y=y+x;
        
        if(x != 0){
          z=z+1;
        }
        
    }

    med=y/z;
    printf("La media è: %f \n", med);
}