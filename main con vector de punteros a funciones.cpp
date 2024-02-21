#include "conf.h"

int main() {
    EstadoBanco estadoActual = DISPONIBLE;
    int contadorPersonas = 0;

    // Inicializar el microcontrolador
    init_mcu();

    // Vector de punteros a funciones de estado
    EstadoBanco (*funcionesEstados[])(int *) = {estadoDisponible, estadoNoDisponible};

    while (1) {
        // Lógica para actualizar el estado actual del banco
        estadoActual = funcionesEstados[estadoActual](&contadorPersonas);
    }

    return 0;
}
