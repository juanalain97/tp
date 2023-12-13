#include <stdio.h>
#include conf.h

int main() {
    int contadorPersonas = 0;
    EstadoBanco estadoActual = DISPONIBLE;

    printf("Bienvenido al banco\n");

    // Vector de punteros a funciones de estado
    EstadoBanco (*funcionesEstados[])(int) = {estadoDisponible, estadoNoDisponible};

    while (1) {
        printf("Actualmente hay %d personas en el banco.\n", contadorPersonas);

        // Llamada a la función de estado actual
        estadoActual = funcionesEstados[estadoActual](contadorPersonas);

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
