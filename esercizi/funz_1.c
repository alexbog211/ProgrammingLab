#include <stdio.h>

void main (){
    int x=30;
    int y=12;
 int s=mcd(x,y);
    printf("%d", mcd(x,y));

    }   

    mcd(int e,int i){
        while(e != i){
            if(e>i){
                e=e-i;
            }
            else{
                i=i-e;
            }
        }
        return (i);
    }
    
