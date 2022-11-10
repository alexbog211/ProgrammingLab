# include <stdio.h>

int sum_nj(int j){
    if(j==0){
        return(0);
    }
    return(j+sum_nj(j-1));
    
}

int sum_x(int a, int b){
    int sum=0;
    for(int x=a; x<=b; x++){
        sum=sum+sum_nj(x);
    }
    return sum;
}

void main(){
    int a;
    int b;
    int k;

    scanf("%d %d", &a , &b);
     k=sum_x(a,b);
    printf("%d \n", k);
}