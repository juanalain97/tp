#include "conf.h"
#include "estados.h"

int main() {
    // Inicializar el microcontrolador
    initMicro();

    int contadorPersonas = 0;
    EstadoBanco estadoActual = DISPONIBLE;

    // Vector de punteros a funciones de estado
    EstadoBanco (*funcionesEstados[])(int) = {estadoDisponible, estadoNoDisponible};

    while (1) {
        // Lógica para actualizar el estado actual del banco
        estadoActual = funcionesEstados[estadoActual](contadorPersonas);
    }

    return 0;
}
