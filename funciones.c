#include <stdio.h>
#include "funciones.h"

void mostrarMenuCategoria(char categoria[][50], float precios[], int n) {
    printf("***************************\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s - $%.2f\n", i + 1, categoria[i], precios[i]);
    }
    printf("***************************\n");
}

int agregarComponente(char categoria[][50], float precios[], int n) {
    if (n < 10) {
        printf("Ingrese el nombre del componente: ");
        scanf("%s", categoria[n]);
        printf("Ingrese el precio del componente: ");
        scanf("%f", &precios[n]);
        printf("Componente agregado con exito.\n");
        return n + 1;
    } else {
        printf("No se pueden agregar mas componentes. Maximo alcanzado.\n");
        return n;
    }
}

void modificarPrecio(char categoria[][50], float precios[], int n) {
    int opcion;
    printf("Ingrese el numero del componente que desea modificar (0 para cancelar): ");
    scanf("%d", &opcion);

    if (opcion < 1 || opcion > n) {
        printf("Opcion invalida.\n");
        return;
    }

    float nuevoPrecio;
    printf("Ingrese el nuevo precio para el componente: ");
    scanf("%f", &nuevoPrecio);

    precios[opcion - 1] = nuevoPrecio;
    printf("Precio modificado con exito.\n");
}

void eliminarComponente(char categoria[][50], float precios[], int *n) {
    int opcion;
    printf("Ingrese el numero del componente que desea eliminar (0 para cancelar): ");
    scanf("%d", &opcion);

    if (opcion < 1 || opcion > *n) {
        printf("Opcion invalida.\n");
        return;
    }

    for (int i = opcion - 1; i < *n - 1; i++) {
        int j;
        for (j = 0; categoria[i][j] != '\0'; j++) {
            categoria[i][j] = categoria[i + 1][j];
        }
        categoria[i][j] = '\0';
        precios[i] = precios[i + 1];
    }

    (*n)--;
    printf("Componente eliminado con exito.\n");
}


