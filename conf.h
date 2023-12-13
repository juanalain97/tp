#ifndef CONF_H
#define CONF_H 1

#include "avr_api.h"

// funcion de inicializacion y configuracion del microcontrolador
typedef emum {DISPONIBLE,NO_DISPONIBLE}
  EstadoBanco;
  void initMicro();
EstadoBanco estadoDisponible(int contadorPersonas);
EstadoBanco estadoNoDisponible(int contadorPersonas);

  void leerSensor();  
  
  // Funciones de estado
EstadoBanco estadoDisponible(int contadorPersonas) {
    printf("El banco está disponible. Personas: %d\n", contadorPersonas);
    leerSensor();
    
    if (contadorPersonas >= 30) {
        return NO_DISPONIBLE;
    } else {
        return DISPONIBLE;
    }
}

EstadoBanco estadoNoDisponible(int contadorPersonas) {
    printf("El banco no está disponible. Personas: %d\n", contadorPersonas);
    leerSensor();
    
    if (contadorPersonas < 30) {
        return DISPONIBLE;
    } else {
        return NO_DISPONIBLE;
    }
}
// definiciones del puerto para el rele q voy a utilizar
#define RELE_PORT avr_GPIO_C
#define RELE_PIN avr_GPIO_PIN_0
#define RELE avr_GPIOC_OUT_0

// definiiciones de puertos para los 2 pines q voy a utilizar ( uno para la entrada y otro para la salida)
#define LED_PORT avr_GPIO_C
#define LED_PIN  avr_GPIO_PIN_1
#define LED1 avr_GPIOC_OUT_1
#define LED_PORT avr_GPIO_C
#define LED_PIN  avr_GPIO_PIN_2
#define LED2 avr_GPIOC_OUT_2
