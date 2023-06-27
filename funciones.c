#include <stdio.h>
#include "funciones.h"

void mostrarMenuCategoria(char categoria[componentes_maximos][nom], float precios[componentes_maximos], int n) {
    printf("***************************\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s - $%.2f\n", i+1, categoria[i], precios[i]);
    }
    printf("***************************\n");
}

void comprar(char categoria[componentes_maximos][nom], float precios[componentes_maximos], int n, float* total) {
    int opcion;
    printf("Ingrese el numero del componente que desea comprar (0 para cancelar): ");
    scanf("%d", &opcion);

    if (opcion < 0 || opcion > n) {
        printf("Opcion invalida.\n");
        return;
    }

    if (opcion == 0) {
        printf("Compra cancelada.\n");
        return;
    }

    printf("Has seleccionado: %s - $%.2f\n", categoria[opcion-1], precios[opcion-1]);
    *total += precios[opcion-1];
    printf("Compra realizada con exito.\n");
}

void eliminar(char categoria[componentes_maximos][nom], float precios[componentes_maximos], int n, float* total) {
    int opcion;
    printf("Ingrese el numero del componente que desea eliminar (0 para cancelar): ");
    scanf("%d", &opcion);

    if (opcion < 0 || opcion > n) {
        printf("Opcion invalida.\n");
        return;
    }

    if (opcion == 0) {
        printf("Eliminacion cancelada.\n");
        return;
    }

    printf("Has eliminado: %s - $%.2f\n", categoria[opcion-1], precios[opcion-1]);
    *total -= precios[opcion-1];
    printf("Eliminacion realizada con exito.\n");
}

