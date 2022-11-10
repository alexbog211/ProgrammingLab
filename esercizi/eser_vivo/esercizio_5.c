#include <stdio.h>

void main(){

    int n;
    int k;
    float s;
    //int n1=1;
    //int k1=1;
    //int l1=1;
    //float TOT;

    printf("Inserire due numeri n e k: ");
    scanf("%d %d", &n,&k);
    s=fat(n,k);
    printf("%f \n",s);
   // int l=n-k;
   // printf("%d \n", l);
    //for(int x=1; x<=n; x++){
     //   n1=n1*x;     
    //}
    //printf("%d \n", n1);
    //for(int x=1; x<=k; x++){
    //    k1=k1*x;
    //}
    //printf("%d \n", k1);
    //for(int x=1; x<=l; x++){
    //    l1=l1*x;
    //}
        
    //printf("%d \n", l1);

    //TOT=n1/(k1*l1);
    //printf("%f \n", TOT);
}

fat(int n, int k){
    int a=n;
    int n1=1;
    int k1=1;
    float TOT;
    for(int x=1;x<=k;x++){
        n1=n1*a;
        a=a-1;
        k1=k1*x;
    }

    TOT=n1/k1;
    return TOT;

    

    
}