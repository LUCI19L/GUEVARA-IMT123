#include <stdio.h>
///  Calcular la suma de los primeros N números naturales
//Consigna: Solicita al usuario un número N y muestra la suma de todos los números naturales desde 1
//hasta N.
//Pista: Acumula la suma con una variable suma dentro de un bucle for o while
int main() {
    int N , suma =0;
    printf("INGRESE UN NUMERO ENTERO N:\n");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        suma +=i;
    }
    printf("La suma de los primeros %d números naturales es: %d\n", N, suma);

    return 0;
}
