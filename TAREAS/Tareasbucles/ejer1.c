#include <stdio.h>
#include "funciones.h"
int main(void){
    int a ;
    while (1){
        printf("ingrese un numero:");
        scanf("%d", &a);
        if(a==-1){
            break;
        }
        if(parImpar(a)){
            printf("\n el numero es par\n");

        }else{
            printf("\n El numero es impar\n");
        }
    }
    return 0;
}