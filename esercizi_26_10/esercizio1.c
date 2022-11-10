#include <stdio.h>

int numeri_primi_rec(int n, int m){ 
    // n=7, m=6;
    // se n % m -> m divisore di m -> n non è primo
    // altrimenti n%m -> !0
    // allora m -> m-1 = 6
     if(m==1){ // condizione di base
        return 1; // il numero è primo => restituisce 1
         }
     if(n%m == 0){ // m è divisore di n => n non è primo
         return 0; // il numero non è primo
     }

    return(numeri_primi_rec(n,m-1));
    }

 /*int numeri_primi_ite(int n){

     for (int x=2; x<n; x++){
         if(n%x==0){
             return 0;
         }
     }
     return 1;
}*/

void main(){
    int n;
    int k;
    printf("Inserire un numero n: ");
    scanf("%d", &n); 

    /*for(int x=2; x<n; x++){
        k=numeri_primi_ite(x);
        if(k==1){
            printf("Il numero %d è primo \n", x);    
        } 
    }*/

    if(n==1){
        printf("%d è primo \n", n);
    }
    else{
        int m = n-1;

        if(numeri_primi_rec(n,m)==1){
            printf("%d è primo \n", n);
        }
        else{
            printf("%d non è primo \n", n);
        }
    }
     /* k=numeri_primi_ite(n);

    if(k==0){
        printf("Il numero %d non è primo \n", n);
    }
    else{
        printf("Il numero %d è primo \n", n);
    }*/
}

