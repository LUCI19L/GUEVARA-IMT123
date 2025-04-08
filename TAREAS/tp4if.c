#include <stdio.h>
//Consigna: Pide al usuario que ingrese su edad y muestra un mensaje según el rango:
//Menor de 13 años: “Infancia”
//Entre 13 y 17 años: “Adolescencia”
//Mayor o igual a 18: “Adultez”
//Pista: Usa condiciones encadenadas con if, else if y else.
int main(){
    int edad;
    printf("Ingrese su edad por favor :");
    scanf("%d", &edad);
    if (edad < 13){
        printf("Infancia");
    }else if (edad >= 13 && edad <= 17){
        printf("Adolescencia");
    } else {
        printf("Adultez");
    }
    return 0;
}
