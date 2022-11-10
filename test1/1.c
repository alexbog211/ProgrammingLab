#include <stdio.h>

float sn_rec(float n){
    if(n==1.0){
        return 3.0;
    }
    if(n==0.0){
        return 1.0;
    }

    return((sn_rec(n-1)+3)/(2*n)+sn_rec(n-2));
}

float sn_ite(float n){
    float sn;
     float s0=1.0;
    float s1=3.0;
    if(n==0.0){
        return 1.0;
    }
    if(n==1.0){
        return 3.0;
    }

    for(int x=2; x<=n; x++){
        sn=(s1+3)/(2*x)+s0;
        s0=s1;
        s1=sn;
    }
    return sn;
}

void main(){
    float n=4.0;
    printf(" ITE: %lf \n", sn_ite(n));
    printf(" REC: %lf \n", sn_rec(n));
}