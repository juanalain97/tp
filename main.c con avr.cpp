#include <avr/io.h>
#include <util/delay.h>
#include "conf.h"

int main() {
    // Inicializar el microcontrolador
    initMicro();

    int contadorPersonas = 0;
    EstadoBanco estadoActual = DISPONIBLE;

    while (1) {
        // Llamada a la función de estado actual
        estadoActual = funcionesEstados[estadoActual](contadorPersonas);

        // Simular la entrada/salida de personas con el rele
        if (LEER_SENSOR_ENTRADA) {
            _delay_ms(50);  // delay
            if (LEER_SENSOR_ENTRADA) {
                if (contadorPersonas < 30) {
                    contadorPersonas++;
                    _delay_ms(1000);  // Retardo para evitar múltiples incrementos
                } else {
                    // Manejar el caso de que el banco esté lleno
                }
            }
        }

        if (LEER_SENSOR_SALIDA) {
            _delay_ms(50);  
            if (LEER_SENSOR_SALIDA) {
                if (contadorPersonas > 0) {
                    contadorPersonas--;
                    _delay_ms(1000);  // Retardo para evitar múltiples decrementos
                } else {
                    // Manejar el caso de que no hay personas para salir
                }
            }
        }
    }

    return 0;
}
