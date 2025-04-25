#ifndef funciones_h
#define funciones_h //implentacion de la funcion o la cocina donde el chef prepara la comida
int parImpar(int num1){
    return num1%2==0;
}
int contadordigitos(int num2){
    int i = 0; //i=contador
    if (num2==0){
        return 1;
    }
    while(num2!=0){
        num2/=10;
        i++;

    }
    return i;

}
int comparar(int a, int b) {
    if (a > b)
        return 1;
    else if (a < b)
        return -1;
    else
        return 0;
}

int factorial(int n) {
    if (n == 0 || n == 1) 
        return 1;
    else 
        return n * factorial(n - 1);
}

#endif 
