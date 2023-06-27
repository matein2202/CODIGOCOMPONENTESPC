#include <stdio.h>
#include "funciones.h"

int main() {
    Componente procesadores[] = {
        {"AMD RYZEN 3", 170.0},
        {"AMD RYZEN 5", 250.0},
        {"AMD RYZEN 7", 320.0}
    };
    int numProcesadores = sizeof(procesadores) / sizeof(procesadores[0]);

    Componente ram[] = {
        {"8GB RAM", 45.0},
        {"16GB RAM", 65.0},
        {"32GB RAM", 80.0}
    };
    int numRam = sizeof(ram) / sizeof(ram[0]);

    Componente grafica[] = {
        {"AMD VEGA 11", 0.0},
        {"AMD RX 570", 320.0},
        {"AMD 5600X", 450.0}
    };
    int numGrafica = sizeof(grafica) / sizeof(grafica[0]);

    Componente tarjetaMadre[] = {
        {"ASUS ROG Crosshair VIII Hero", 120.0},
        {"Gigabyte X570 Aorus Master", 268.0},
        {"MSI B550 Tomahawk", 350.0}
    };
    int numTarjetaMadre = sizeof(tarjetaMadre) / sizeof(tarjetaMadre[0]);

    float total = 0.0;

    int opcion;
    do {
        printf("*** MENU DE COMPRA ***\n");
        printf("1. Procesadores\n");
        printf("2. RAM\n");
        printf("3. Grafica\n");
        printf("4. Tarjeta Madre\n");
        printf("9. Eliminar producto\n");
        printf("0. Salir y generar factura\n");
        printf("***************************\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 0:
                printf("Factura:\n");
                printf("Total a pagar: $%.2f\n", total);
                printf("Gracias por su compra.\n");
                break;
            case 1:
                MenuCategoria(procesadores, numProcesadores);
                comprar(procesadores, numProcesadores, &total);
                break;
            case 2:
                MenuCategoria(ram, numRam);
                comprar(ram, numRam, &total);
                break;
            case 3:
                MenuCategoria(grafica, numGrafica);
                comprar(grafica, numGrafica, &total);
                break;
            case 4:
                MenuCategoria(tarjetaMadre, numTarjetaMadre);
                comprar(tarjetaMadre, numTarjetaMadre, &total);
                break;
            case 9:
                printf("=== ELIMINAR PRODUCTO ===\n");
                printf("Ingrese la categoria del producto que desea eliminar:\n");
                printf("1. Procesadores\n");
                printf("2. RAM\n");
                printf("3. Grafica\n");
                printf("4. Tarjeta Madre\n");
                printf("0. Cancelar\n");
                printf("***************************\n");
                printf("Ingrese una opcion: ");
                scanf("%d", &opcion);

                switch (opcion) {
                    case 0:
                        printf("Eliminacion cancelada.\n");
                        break;
                    case 1:
                        MenuCategoria(procesadores, numProcesadores);
                        eliminar(procesadores, numProcesadores, &total);
                        break;
                    case 2:
                        MenuCategoria(ram, numRam);
                        eliminar(ram, numRam, &total);
                        break;
                    case 3:
                        MenuCategoria(grafica, numGrafica);
                        eliminar(grafica, numGrafica, &total);
                        break;
                    case 4:
                        MenuCategoria(tarjetaMadre, numTarjetaMadre);
                        eliminar(tarjetaMadre, numTarjetaMadre, &total);
                        break;
                    default:
                        printf("Opcion invalida.\n");
                        break;
                }
                break;
            default:
                printf("Opcion invalida.\n");
                break;
        }

        printf("\n");
    } while (opcion != 0);

    return 0;
}
