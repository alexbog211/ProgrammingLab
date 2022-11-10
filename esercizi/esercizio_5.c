#include <stdio.h>

void main(){
    int n;
    int a;
    int i=0;
    int j=0;
    printf("Inserire il numero di numeri che si desidera inserire: ");
    scanf("%d", &n);
    if(n<=0){
        printf("Inserire un numero maggiore di 0: ");
        scanf("%d", &n);    
    }
    else{
        for(int x=1;x<=n;x++){
             printf("Inserire il numero (%d): ", x);
            scanf("%d", &a);
            if (x==1){
                i=a;
                j=a;
            }
            if(a<i){
                i=a;
            }
            if(a>j){
                j=a;
            }
        
        }
        printf("Il numero massimo è: %d", j);
        printf("\n");
        printf("Il numero minimo è: %d", i);
        printf("\n");
    }
}