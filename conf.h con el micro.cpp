#ifndef conf_H
#define conf_H

#include <avr/io.h>

typedef enum {
    DISPONIBLE,
    NO_DISPONIBLE
} EstadoBanco;

void initMicro();
EstadoBanco estadoDisponible(int contadorPersonas);
EstadoBanco estadoNoDisponible(int contadorPersonas);

#endif


// Definiciones de puertos para los pines de sensores
#define SENSOR_ENTRADA_PORT avr_GPIO_C
#define SENSOR_ENTRADA_PIN avr_GPIO_PIN_A
#define LEER_SENSOR_ENTRADA avr_gpio_read_pin(SENSOR_ENTRADA_PORT, SENSOR_ENTRADA_PIN)

#define SENSOR_SALIDA_PORT avr_GPIO_C
#define SENSOR_SALIDA_PIN avr_GPIO_PIN_B
#define LEER_SENSOR_SALIDA avr_gpio_read_pin(SENSOR_SALIDA_PORT, SENSOR_SALIDA_PIN)
