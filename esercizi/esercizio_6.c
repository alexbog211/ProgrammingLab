#include <stdio.h>

void main() {
    int a;
    int b;
    int x=1;
    int l=1;

    if(x==1){
        printf("Inserire due numeri interi a^b: ");
        scanf("%d %d", &a,&b);
        x=-1;
        }

    if(b<=0){
        printf("Si prega di inserire un numero maggiore di 0 per b: ");
        scanf("%d", &b);
    }
    else{
        for(int y=1; y<=b;y++){
            l=l*a;
        }
        printf("Il risultato è: %d", l);
        printf("\n");
        
    }
}