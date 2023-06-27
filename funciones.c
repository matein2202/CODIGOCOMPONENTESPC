#include <stdio.h>
#include "funciones.h"

void MenuCategoria(Componente* categoria, int n) {
    printf("***************************\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s - $%.2f\n", i+1, categoria[i].nombre, categoria[i].precio);
    }
    printf("***************************\n");
}

void comprar(Componente* categoria, int n, float* total) {
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

    Componente* seleccionado = &categoria[opcion-1];
    printf("Has seleccionado: %s - $%.2f\n", seleccionado->nombre, seleccionado->precio);
    *total += seleccionado->precio;
    printf("Compra realizada con exito.\n");
}

void eliminar(Componente* categoria, int n, float* total) {
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

    Componente eliminado = categoria[opcion-1];
    printf("Has eliminado: %s - $%.2f\n", eliminado.nombre, eliminado.precio);
    *total -= eliminado.precio;
    printf("Eliminacion realizada con exito.\n");
}
