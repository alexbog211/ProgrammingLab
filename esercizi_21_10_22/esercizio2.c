#include <stdio.h>
#include <math.h>

double dist_e(double x1, double x2, double y1, double y2){
    double x;
    double y;
    double tot;

    x=x1-x2;
    x=x*x;
    y=y1-y2;
    y=y*y;
    tot=sqrt(x+y);

    printf("La distanza euclidea è: %lf \n", tot);
    }
void main(){
    double x1;
    double x2;
    double y1;
    double y2;
    
    printf("Iserire x1 e y1: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Iserire x2 e y2: ");
    scanf("%lf %lf", &x2, &y2); 
    dist_e(x1,x2,y1,y2);
}

