#include <stdio.h>

double funz(int n){
    double m;
    for(int l=2;l<=n;l++){
    if (n==1){
        m=1/2;
    }
    else{
            m=(m+1)/2;
            
    }
    
}
    return m;
    }

void main(){
    double x;
    int n;
    double s;

    scanf("%d",&n);
    s=funz(n);
    printf("%lf \n", s);
    
}

