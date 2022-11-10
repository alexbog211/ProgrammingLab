#include <stdio.h>

int cifra(int n, int g){
    if(n==0){
        printf("\n");
        return 0;
    }
    g=n%10;
    printf("%d",g);
    return(g+cifra(n/10,g)); 
    
}

void main(){
    int n;
    int g;
    
    printf("Inserire un numero: ");
    scanf("%d", &n);
    
    printf("%d \n", cifra(n,g));

    
}