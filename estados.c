#include "conf.h"

EstadoBanco estadoDisponible(int *contadorPersonas) {
    if (*contadorPersonas < 30) {
        // Lógica para el estado disponible
        if (SENSOR_IN) {
            (*contadorPersonas)++;
        } else if (SENSOR_OUT) {
            if (*contadorPersonas > 0) {
                (*contadorPersonas)--;
            }
        }
        RELE = 1; // Abrir la puerta
        return DISPONIBLE;
    } else {
        // Lógica para el estado no disponible
        RELE = 0; // Mantener la puerta cerrada
        return NO_DISPONIBLE;
    }
}

EstadoBanco estadoNoDisponible(int *contadorPersonas) {
    if (*contadorPersonas < 30) {
        // Lógica para el estado disponible
        if (SENSOR_IN) {
            (*contadorPersonas)++;
        } else if (SENSOR_OUT) {
            if (*contadorPersonas > 0) {
                (*contadorPersonas)--;
            }
        }
        RELE = 1; // Abrir la puerta
        return DISPONIBLE;
    } else {
        // Lógica para el estado no disponible
        RELE = 0; // Mantener la puerta cerrada
        return NO_DISPONIBLE;
    }
}

void init_mcu(void) {
    GpioInitStructure_AVR rele, sensor;
   
    rele.port = RELE_PORT;
    rele.pines = RELE_PIN;
    rele.modo = avr_GPIO_mode_Output;
    init_gpio(rele);
   
    sensor.port = SENSOR_PORT ;
    sensor.pines = SENSOR_IN_PIN  | SENSOR_OUT_PIN  ;
    sensor.modo = avr_GPIO_mode_Input;
    init_gpio(sensor);
}
