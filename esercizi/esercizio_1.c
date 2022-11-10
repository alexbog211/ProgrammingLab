#include <stdio.h>

void main() {
    int n;
    printf("Inserire un numero intero:");
    scanf("%d",&n);
    int y=1;
    int x;
    while(n>0){
        x=y*y;
        y=y+1;
        n=n-1;
        printf("%d\n",x);
    }
}