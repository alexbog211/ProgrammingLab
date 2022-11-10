#include <stdio.h>
#include <math.h>

double funz(double n, double p){

    for (int x=1; x<=n; x++){
        double p1;
        if(x==1){
            printf("an(%d): %lf \n", x,p);
            p1=p;
            
        }
        else{
            p=0.5*(p+p1/p);
            printf("an(%d): %lf \n", x,p);
        }
    }
}

void main(){
    double n,p;
    printf("Inserire due numeri n e p: ");
    scanf("%lf %lf", &n, &p);
    funz(n,p);
}