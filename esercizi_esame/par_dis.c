#include <stdio.h>

int par_dis(int a, int b){

    if(a>b){
        return b;
    }

    if(a%2==0){
        printf("%d pari \n",a);
    }
    else{
        printf("%d dispari \n",a);
    }

    return par_dis(a+2,b);
}

void main(){
    int a;
    int b;

    printf("Inserire un numero a: ");
    scanf("%d", &a);
    printf("Inserire un numero b, maggiore di a:");
    scanf("%d", &b);

    par_dis(a,b);
    }