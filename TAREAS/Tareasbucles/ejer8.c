//En un bucle infinito, el usuario ingresa un número 
//entero positivo.
//El programa calcula e imprime el factorial de ese
//número usando una función.
//El programa termina si el número ingresado es 0 o negativo.

#include <stdio.h>
#include "funciones.h"  // ← esto le dice al compilador dónde están declaradas las funciones

int factorial(int n);

    void main(void) {
        int numero;
        while (1) {
            printf("Ingrese un numero entero positivo: ");
            scanf("%d", &numero);
            if (numero <= 0)  break; 
            printf("Factorial de %d es %d\n", numero, factorial(numero));
        }
    }
