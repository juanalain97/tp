#include "conf.h"
#include "estados.h"

int main() {
    // Inicializar el microcontrolador
    initMicro();

    int contadorPersonas = 0;
    EstadoBanco estadoActual = DISPONIBLE;

    while (1) {
        // Lógica para actualizar el estado actual del banco
        switch (estadoActual) {
            case DISPONIBLE:
                estadoActual = estadoDisponible(contadorPersonas);
                break;
            case NO_DISPONIBLE:
                estadoActual = estadoNoDisponible(contadorPersonas);
                break;
    
        }
    }

    return 0;
}
