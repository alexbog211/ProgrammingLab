#include <stdio.h>

void main(){
    float x;
    printf("Inserire un numero x: ");
    scanf("%f", &x);

    if (x<0){
        printf("Il numero %f è negativo \n", x);
        x=-x;
    }
    else if (x>0) {
        printf("Il numero %f è positivo \n", x);
    }
    esle{
        printf("Il numero è 0");
    }

    printf("Il numero assoluto è: %f \n", x);
}