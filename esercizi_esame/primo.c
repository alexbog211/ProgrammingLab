#include <stdio.h>

int primo(int y, int i){

     if(i==1){
        return 1;
    }
    
    if(y%i==0){
        return 0;
    }
    
      primo(y,i-1);
}    

int myfunction(int x, int y){
    int i=y-1;
    if(x>y){
         return 1;
    }
    if(primo(y,i)==1){
        printf(" %d \n", y);
    }
     myfunction(x,y-1);
}
    

void main(){
    int x;
    int y;

    printf("Inserire due numeri x e y: " );
    scanf("%d %d", &x, &y);

     myfunction(x,y);


}