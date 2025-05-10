#include <stdio.h>
/// Imprimir la secuencia de 1 a N
//Consigna: Escribe un programa que pida al usuario un número entero N y muestre en pantalla los
//números del 1 al N.
//Pista: Usa un bucle for o while con una variable que se incremente desde 1 hasta N
int main() {
    int N;
    printf("INGRESE UN NUMERO ENTERO N:\n");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        printf("%d\n", i);
    }
    printf("----------");
    printf("\n");
    return 0;
    // para subir bien lol
    
}