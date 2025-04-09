
//Contar la cantidad de dígitos de un número
//Consigna: Escribe un programa que solicite un número entero y muestre cuántos dígitos tiene.
//Pista: Divide el número entre 10 en cada iteración del while, y cuenta cuántas veces lo haces hasta
//que llegue a 0
#include <stdio.h>
int main() {
    int numero, contador = 0;
    printf("Ingrese un número entero: ");
    scanf("%d", &numero);
    if (numero == 0) {

        contador = 1; 
    } else {
        if (numero < 0) {
            numero = -numero;
        }
        while (numero > 0) {
            numero /= 10; 
            contador++;   
        }
    }
    printf("La cantidad de digitos es: %d\n", contador);
    // para subir bien
    return 0;
// para subir bien
}