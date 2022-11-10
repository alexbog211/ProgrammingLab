#include <stdio.h>

int Fibo(int i){
    if(i==0){
        
        return(0);
    }

    else if(i==1){
        return(1);
    }
    else{
        printf("%d \n", i);
        return(Fibo(i-1)+Fibo(i-2));
    }
    
}

void main(){
    int i=6;
   printf("s %d \n ",Fibo(i));
}