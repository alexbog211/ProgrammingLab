#include <stdio.h>

void main(){
    int x;
    int y;
    int sum;
    printf("Inserire due numeri interi x:y :");
    scanf("%d %d", &x,&y);
    printf("%d : %d \n", x,y);
    printf("\n");

    while(x>=1){
        if (x%2 != 0){
            sum=sum+y;
            printf("%d : %d \n", x,y);
        }
        if (x==1){
            x=-1;
        }
        else{
            x=x/2;
            y=y*2;
            }
    }
}