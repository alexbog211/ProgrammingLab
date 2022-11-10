#include <stdio.h>


void main(){
    int a[5]={0,1,2,-1,4};

    for(int x=0; x<5;x++){
        if(a[x]%2==0){
            a[x]=0;
        }
        else{
            a[x]=1;
        }
    }
    for(int i=0; i<5;i++){

    printf("%d ", a[i]);
        }
    
}