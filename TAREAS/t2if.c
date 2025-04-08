#include <stdio.h>
 //Vericar si un número es positivo, negativo o cero
//Consigna: Pide al usuario que ingrese un número entero. El programa debe mostrar si el número es
//positivo, negativo o cero
int main(){
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    if (num > 0) {
        printf(" El numero que ingresaste es positivo.\n");
    }
    if (num < 0){
        printf("El numero que ingresaste es negativo./n");
    }
    if (num == 0){
        printf("El numero que ingresaste es cero./n");
    }
    return 0;
}