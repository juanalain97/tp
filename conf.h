#ifndef CONF_H
#define CONF_H 1

#include "avr_api.h"


typedef emum {DISPONIBLE,NO_DISPONIBLE}
  EstadoBanco;
  
  EstadoBanco estadoDisponible(itn contador de personas);
  EstadoBanco estadoNoDisponible(int contadorPersonas);
  void leerSensor();  
  
  // Funciones de estado
EstadoBanco estadoDisponible(int contadorPersonas) {
    printf("El banco est� disponible. Personas: %d\n", contadorPersonas);
    leerSensor();
    
    if (contadorPersonas >= 30) {
        return NO_DISPONIBLE;
    } else {
        return DISPONIBLE;
    }
}

EstadoBanco estadoNoDisponible(int contadorPersonas) {
    printf("El banco no est� disponible. Personas: %d\n", contadorPersonas);
    leerSensor();
    
    if (contadorPersonas < 30) {
        return DISPONIBLE;
    } else {
        return NO_DISPONIBLE;
    }
}

// Funci�n para simular la lectura del sensor
void leerSensor() {
    // Simulaci�n de lectura de sensor
    
    printf("Leyendo sensor...\n");
}       
