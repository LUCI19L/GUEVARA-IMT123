#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Ingrese el primer número entero: ");
    scanf("%d", &num1);
    
    printf("Ingrese el segundo número entero: ");
    scanf("%d", &num2);
    
    if (num1 > num2) {
        printf("%d es mayor que %d\n", num1, num2);
    } 
    if (num2 > num1) {
        printf("%d es mayor que %d\n", num2, num1);
    }
    if (num1 == num2) {
        printf("Ambos números son iguales: %d\n", num1);
    }
    
    return 0;
}