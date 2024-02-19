#ifndef conf_H
#define conf_H

// Incluir la API necesaria
#include "api_gpio.h"
typedef enum {
    DISPONIBLE=0,
    NO_DISPONIBLE=1
} EstadoBanco;

void initMicro();
EstadoBanco estadoDisponible(int contadorPersonas);
EstadoBanco estadoNoDisponible(int contadorPersonas);

#endif


// Definiciones de puertos para los pines de sensores
#define SENSOR_ENTRADA_PORT avr_GPIO_C
#define SENSOR_ENTRADA_PIN avr_GPIO_PIN_A

#define SENSOR_SALIDA_PORT avr_GPIO_C
#define SENSOR_SALIDA_PIN avr_GPIO_PIN_B

