//Invertir una cadena de texto
//Consigna: Pide al usuario que ingrese una palabra (cadena de texto) y muestra la palabra invertida.
//Pista:
//Primero, encuentra la longitud de la cadena usando un while.
//Luego recorre la cadena al revés con un for desde el último carácter hacia el primero.
#include <stdio.h>

int main() {
    char palabra[100];
    int longitud = 0;

    printf("Ingresa una palabra cualquiera: ");
    scanf("%s", palabra);

    
    while (palabra[longitud] != '\0') {
        longitud++;
    }

    
    printf("Palabra invertida: ");
    for (int i = longitud - 1; i >= 0; i--) {
        printf("%c", palabra[i]);
    }
    printf("\n");
// para subir bien
    return 0;
    // para subir bien
}
