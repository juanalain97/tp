#include <stdio.h>
#include "conf.h"
#include "estados.h"
void initMicro() {
    // Configurar pines para el rele y sensores
    avr_gpio_configure_pin(RELE_PORT, RELE_PIN, avr_GPIO_MODE_OUTPUT);
    avr_gpio_configure_pin(SENSOR_ENTRADA_PORT, SENSOR_ENTRADA_PIN, avr_GPIO_MODE_INPUT);
    avr_gpio_configure_pin(SENSOR_SALIDA_PORT, SENSOR_SALIDA_PIN, avr_GPIO_MODE_INPUT);
}
// Función para leer los sensores
int leerSensores() {
    // Leer los sensores de entrada y salida
    int entrada = avr_gpio_read_pin(SENSOR_ENTRADA_PORT, SENSOR_ENTRADA_PIN);
    int salida = avr_gpio_read_pin(SENSOR_SALIDA_PORT, SENSOR_SALIDA_PIN);

    // Devolver el estado combinado de los sensores
    return (entrada << 1) | salida;
}

int main() {
    // Configuración del microcontrolador
    initMicro();

    int contadorPersonas = 0;
    EstadoBanco estadoActual = DISPONIBLE;

    // Vector de punteros a funciones de estado
    EstadoBanco (*funcionesEstados[])(int) = {estadoDisponible, estadoNoDisponible};

    printf("Bienvenido al banco\n");

    while (1) {
        printf("Actualmente hay %d personas en el banco.\n", contadorPersonas);

        // Llamada a la función de estado actual
        estadoActual = funcionesEstados[estadoActual](leerSensores());

        // Simular la entrada/salida de personas 
        char accion;
        printf("¿Entra (I) o sale (S) una persona? (Presione 'Q' para salir): ");
        scanf(" %c", &accion);

        if (accion == 'Q' || accion == 'q') {
            break;
        } else if (accion == 'I' || accion == 'i') {
            if (contadorPersonas < 30) {
                contadorPersonas++;
            } else {
                printf("El banco está lleno, no se pueden agregar más personas.\n");
            }
        } else if (accion == 'S' || accion == 's') {
            if (contadorPersonas > 0) {
                contadorPersonas--;
            } else {
                printf("No hay personas en el banco para salir.\n");
            }
        }
    }

    printf("Gracias por visitar el banco. ¡Hasta luego!\n");

    return 0;
}
