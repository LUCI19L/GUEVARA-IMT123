#include <stdio.h>

    void main() {
        int num, cont = 0;
        while (1) {
            printf("Ingresa los numeros a evaluar (Ingrese -1 para finalizar): ");
            scanf("%d", &num);
            if (num == -1) break;
            if (num % 3 == 0) cont++;
        }
        printf("Total múltiplos de 3: %d", cont);
    }
    //