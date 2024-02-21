#include "conf.h"

int main() {
    EstadoBanco estadoActual = DISPONIBLE;
    int contadorPersonas = 0;

    // Inicializar el microcontrolador
    init_mcu();

    while (1) {
        // Lógica para actualizar el estado actual del banco
        switch (estadoActual) {
            case DISPONIBLE:
                estadoActual = estadoDisponible(&contadorPersonas);
                break;
            case NO_DISPONIBLE:
                estadoActual = estadoNoDisponible(&contadorPersonas);
                break;
        }
    }

    return 0;
}
