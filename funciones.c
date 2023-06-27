#include <stdio.h>
#include "funciones.h"

void mostrarMenuCategoria(char categoria[][50], float precios[], int n) {
    printf("***************************\n");
    for (int a = 0; a < n; a++) {
        printf("%d. %s - $%.2f\n", a+1, categoria[a], precios[a]);
    }
    printf("***************************\n");
}

void comprar(char categoria[][50], float precios[], int n, float* total) {
    int opcion;
    printf("Ingrese el numero del componente que desea comprar (0 para cancelar): ");
    scanf("%d", &opcion);

    if (opcion < 1 || opcion > n) {
        printf("Opcion invalida.\n");
        return;
    }

    float precioSeleccionado = precios[opcion-1];
    printf("Has seleccionado: %s - $%.2f\n", categoria[opcion-1], precioSeleccionado);
    *total += precioSeleccionado;
    printf("Compra realizada con exito.\n");
}

void eliminar(char categoria[][50], float precios[], int n, float* total) {
    int opcion;
    printf("Ingrese el numero del componente que desea eliminar (0 para cancelar): ");
    scanf("%d", &opcion);

    if (opcion < 1 || opcion > n) {
        printf("Opcion invalida.\n");
        return;
    }

    float precioEliminado = precios[opcion-1];
    printf("Has eliminado: %s - $%.2f\n", categoria[opcion-1], precioEliminado);
    *total -= precioEliminado;
    printf("Eliminacion realizada con exito.\n");
}



