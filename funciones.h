
typedef struct {
    char nombre[50];
    float precio;
} Componente;

void mostrarMenuCategoria(Componente* categoria, int n);

void comprar(Componente* categoria, int n, float* total);

void eliminar(Componente* categoria, int n, float* total);


