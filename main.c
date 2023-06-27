#include <stdio.h>
#include "funciones.h"

#define componentes_maximos 10

int main() {
    char categoria[componentes_maximos][50];
    float precios[componentes_maximos];
    int numComponentes = 0;

    int opcion;
    do {
        printf("*** MENU DE COMPRA ***\n");
        printf("1. Agregar componente\n");
        printf("2. Mostrar inventario\n");
        printf("3. Modificar precio\n");
        printf("4. Eliminar componente\n");
        printf("0. Salir y generar factura\n");
        printf("***************************\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 0:
                printf("Factura:\n");
                printf("Gracias por su compra.\n");
                break;
            case 1:
                numComponentes = agregarComponente(categoria, precios, numComponentes);
                break;
            case 2:
                mostrarMenuCategoria(categoria, precios, numComponentes);
                break;
            case 3:
                modificarPrecio(categoria, precios, numComponentes);
                break;
            case 4:
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


