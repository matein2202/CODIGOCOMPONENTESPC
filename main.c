#include <stdio.h>
#include "funciones.h"

int main() {
    char categoria[10][50];
    float precios[10];
    int numComponentes = 0;
    float total = 0;

    int opcion;
    do {
        printf("*** MENU DE COMPRA ***\n");
        printf("1. Agregar componente\n");
        printf("2. Mostrar categorias\n");
        printf("3. Comprar\n");
        printf("4. Eliminar\n");
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
                if (numComponentes < 10) {
                    printf("Ingrese el nombre del componente: ");
                    scanf("%s", categoria[numComponentes]);
                    printf("Ingrese el precio del componente: ");
                    scanf("%f", &precios[numComponentes]);
                    numComponentes++;
                    printf("Componente agregado con exito.\n");
                } else {
                    printf("No se pueden agregar mas componentes. Maximo alcanzado.\n");
                }
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
                eliminar(categoria, precios, numComponentes, &total);
                break;
            default:
                printf("Opcion invalida.\n");
                break;
        }
        printf("\n");
    } while (opcion != 0);

    return 0;
}


