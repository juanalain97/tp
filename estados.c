#include "conf.h"

estados_t estadoDisponible(int contadorPersonas) {
    if (contadorPersonas < 30) {
        // Lógica para el estado disponible
        return DISPONIBLE;
    } else {
        // Lógica para el estado no disponible
        return NO_DISPONIBLE;
    }
}

estados_t estadoNoDisponible(int contadorPersonas) {
    if (contadorPersonas < 30) {
        // Lógica para el estado disponible
        return DISPONIBLE;
    } else {
        // Lógica para el estado no disponible
        return NO_DISPONIBLE;
    }
}
