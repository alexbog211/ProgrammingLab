#include <stdio.h>

int overlap_size(int i, int j, int t, int u){
    int dim=0;
    for(int x=t; x<=j; x++){
        if(x<=j){
            printf("%d\n", x);
            dim=dim+1;
        }
    }
    return dim;
}

void main(){
    int i;
    int j;

    int t;
    int u;


    printf("Inserire i<j: ");
    scanf("%d %d", &i, &j);

    printf("Inserire t che è t<j e t<u: ");
    scanf("%d %d", &t, &u);

    printf("Dimensione: %d \n",overlap_size(i,j,t,u));

    
}