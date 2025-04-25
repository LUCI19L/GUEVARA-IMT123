#include <stdio.h>
int invertirNum(int n) {
    int inv = 0;
    while (n > 0) {
        inv = inv * 10 + n % 10;
        n /= 10;
    }
    return inv;
}
void main() {
    int num;
    while (100) {
        printf("Ingresa un numero de dos o mas digitos: ");
        scanf("%d", &num);
        if (num < 10) break;
        printf("Invertido: %d\n", invertirNum(num));
    }
}
//