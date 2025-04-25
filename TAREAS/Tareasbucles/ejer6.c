
#include <stdio.h>
#include "funciones.h"

int main() {
    int num1, num2;
    while (1) {
        printf("Ingrese dos números (0 0 para salir): ");
        scanf("%d %d", &num1, &num2);

        if (num1 == 0 && num2 == 0)
            break;

        int resultado = comparar(num1, num2);
        if (resultado == 1)
            printf("%d es mayor que %d\n", num1, num2);
        else if (resultado == -1)
            printf("%d es mayor que %d\n", num2, num1);
        else
            printf("Ambos números son iguales.\n");
    }
    return 0;
}
//