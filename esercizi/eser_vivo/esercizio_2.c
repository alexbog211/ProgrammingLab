#include <stdio.h>

void main(){
    int k;
    int n;
    int som=0;

    printf("Inserire i numeri k e n per la sommatoria tra i due: ");
    scanf("%d %d", &k,&n);

    for(int x=1; x<=n; x++){
        int l=1;
    for(int v=1; v<=x; v++){
        l=l*k;
    }
        som=som+l;
    }

    printf("La sommatoria è: %d \n", som);
}