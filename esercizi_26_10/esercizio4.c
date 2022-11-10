#include <stdio.h>

int sn(int n){
    if(n==0){
        return (1);
        }

    return(2*sn(n-1));
}

int xab(int a, int b){
    int sum=1;
    for(int x=a; x<=b/2; x++){
        sum=sum*(sn(x)/a);
        
    }
    sum=sum-b;
    return (sum);
}

void main(){
    int a;
    int b;
    int l;

    printf("Inserire il numero a e b: ");
    scanf("%d %d", &a,&b);

    l=xab(a,b);
    printf("Il multi è: %d \n", l);
}