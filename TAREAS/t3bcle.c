//Tabla de multiplicar
//Consigna: Pide al usuario un número x y muestra su tabla de multiplicar del 1 al 10.
//Pista: Usa for (i = 1; i <= 10; i++) e imprime x * i.
#include <stdio.h>
int main(){
    int x;
    printf("ingrese un numero: \n ");
    scanf("%d",&x );
    for ( int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", x, i, x * i);

    }
    return 0;
} 