#include <stdio.h>

void main(){
    int F0=0;
    int F1=1;
    int Fi;
    int n;
    printf("Inserire un numero intero positivo: ");
    scanf("%d",&n);

    
    if(n<0){
        n=-n;
    }

    printf("F(%d)= %d \n", F0,F0);
    printf("F(%d)= %d \n", F1,F1);

    
    for (int x=2; x<=n; x++){
        Fi=F1+F0;
        printf("F(%d)= %d \n", x,Fi);
        F0=F1;
        F1=Fi;
    
        
        
            
    }
}