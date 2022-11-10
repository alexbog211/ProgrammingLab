#include <stdio.h>

void main(){
    int x=100;
    int y=50;
    int *p;
    int *q;
    p = &x;
    q =&y;

    if(*q==*p){
        printf("I numeri %d e %d sono uguali \n", *q, *p);
        *q=*p;
        printf("%d \n", x);
    }
    else{
        printf("I numeri %d e %d non sono uguali \n", *q, *p);
        *q=*p;
        printf("%d \n", y);
    }


   
}

