//Usar un typedef enum para representar los estados de un semáforo:
//typedef enum { ROJO, VERDE, AMARILLO } Semaforo;
//Inicialmente el estado es ROJO. En cada iteración del bucle in nito, el estado cambia cíclicamente: ROJO →
//VERDE → AMARILLO → ROJO... En cada cambio, se imprime un mensaje correspondiente al estado.
//El programa termina automáticamente después de 10 ciclos.
#include <stdio.h>

// Definición de los estados del semáforo
typedef enum { ROJO , VERDE, AMARILLO } Semaforo;

int main() {
    Semaforo estado_actual = ROJO;  // Estado inicial: ROJO
    int ciclos = 0;

    while (ciclos < 10) {  // Termina después de 10 ciclos
        // Imprime el estado actual
        switch (estado_actual) {
            case ROJO:
                printf("SEMÁFORO: ROJO (Deténgase)\n");
                break;
            case VERDE:
                printf("SEMÁFORO: VERDE (Avance)\n");
                break;
            case AMARILLO:
                printf("SEMÁFORO: AMARILLO (Precaución)\n");
                break;
        }

        // Cambia al siguiente estado (cíclico)
        estado_actual = (estado_actual + 1) % 3;  // ROJO → VERDE → AMARILLO → ROJO...
        ciclos++;  // Incrementa el contador de ciclos
    }

    printf("Simulación terminada después de 10 ciclos.\n");
    return 0;
}
//