#include <stdio.h>
//Consigna: Escribe un programa que lea un número entero y determine si es par o impar.
int main(){
    int num;
    printf("Ingrese un numero: \n");
    scanf("%d", &num);
    if ( num % 2 == 0){
        printf("el numero que ingresaste es par");
    }else {
        printf("el numero que ingresaste es impar");
    }
    return 0;
}
