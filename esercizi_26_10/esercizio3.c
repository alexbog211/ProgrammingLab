# include <stdio.h>
 int rec_hailstone(int n,int l){
    if(n==1){
        return l;
    }
    if(n%2==0){
        return(rec_hailstone(n/2,l+1));
    }
    else{
        return (rec_hailstone(n*3+1,l+1));
    }
}
 /* int hailstone(int n){
    int m;
    int l=1;
    while(n != 1){
        if(n%2==0){
            m=n/2;
            n=m;
        }
        else{
            m=3*n+1;
            n=m;
        }
        l=l+1;
        printf("%d \n", n);
    }

    return l;
}*/

void main(){
    int n;
    int l=0;

    scanf("%d", &n);

    printf("%d \n", rec_hailstone(n,l));
}