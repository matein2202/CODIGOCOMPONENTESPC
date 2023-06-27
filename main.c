#include <stdio.h>
#include "funciones.h"

int main() {
    char categoria[10][50];
    float precios[10];
    int numComponentes = 0;
    float total = 0.0;

    int opcion;
    do {
        printf("*** MENU DE COMPRA ***\n");
        printf("1. Agregar componente\n");
        printf("2. Mostrar inventario\n");
        printf("4. Modificar precio\n");
        printf("5. Eliminar componente\n");
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
                agregarComponente(categoria, precios, &numComponentes);
                break;
            case 2:
                mostrarMenuCategoria(categoria, precios, numComponentes);
                break;
            case 3:
                mostrarMenuCategoria(categoria, precios, numComponentes);
                comprar(categoria, precios, numComponentes, &total);
                break;
            case 4:
                mostrarMenuCategoria(categoria, precios, numComponentes);
                modificarPrecio(categoria, precios, numComponentes);
                break;
            case 5:
                mostrarMenuCategoria(categoria, precios, numComponentes);
                eliminarComponente(categoria, precios, &numComponentes);
                break;
            default:
                printf("Opcion invalida.\n");
                break;
        }
        printf("\n");
    } while (opcion != 0);

    return 0;
}


