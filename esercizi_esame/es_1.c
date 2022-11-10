#include <stdio.h>

float pot(float n, float k){
    float l=1;
    l=1;
    for (int x=0; x<n; x++){
        l=l*k;
    }
    printf("%lf s \n", l);
    return(l);
    //if(n==0){
    //return(k);
}
    //return(k*pot1(n-1,k));}

/*float pot2(float n){
    float l=1;
     //if(n==1){
    //return(3);
    for (int x=0; x<n; x++){
        l=l*3;
    }
    return(l);
}*/
    //return(3*pot2(n-1));}

float sn_rec(float n, float k){
    if(n==1){
        return((k*k)/3);
    }
    return(sn_rec(n-1,k)+(n*pot(n+1,k)/pot(n,3)));}

void main(){
    float n=4;
    float k=3;
    float s;

    s=sn_rec(n,k);
    printf("%lf \n",s);
}