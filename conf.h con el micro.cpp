conf.h:
    
#ifndef CONF_H
#define CONF_H

#include "mylib.h"

// Definiciones de puertos para el Rele que abre la puerta
#define RELE_PORT avr_GPIO_C
#define RELE_PIN  avr_GPIO_PIN_0
#define RELE  avr_GPIOC_OUT_0

// Definiciones de puertos para los sensores de entrada y salida
#define SENSOR_PORT avr_GPIO_D
#define SENSOR_IN_PIN  avr_GPIO_PIN_0
#define SENSOR_IN  avr_GPIOD_IN_0
#define SENSOR_OUT_PIN avr_GPIO_PIN_1
#define SENSOR_OUT avr_GPIOD_IN_1

// Prototipo de la función de inicialización del microcontrolador
void init_mcu(void);

#endif
