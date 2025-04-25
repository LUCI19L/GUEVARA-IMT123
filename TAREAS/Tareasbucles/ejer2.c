//En un bucle infinto, el usuario debe ingresar un número entero positivo.
//El programa muestra cuántos dígitos tiene el número utilizando una función.
//Finaliza cuando el número ingresado sea 0.
#include <stdio.h>
#include "funciones.h"// 
int main(void){
    int b;
    while(1){
        printf("Por favor ingresa un numero entero:\n");
        scanf("%d", &b);
        if (b == 0) {
            printf("TERMINO EL PROGRAMA\n");
            break;
        } 
        if(b<0){
            printf("Ingrese un numero entero porfavor \n");
            continue;
        }
        printf("el numero %d tiene %d digitos. \n ", b, contadordigitos(b));
    }
    return 0;
}
//