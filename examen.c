#include <stdio.h>
#define MAX_PROD 100
#define SECTORES    6

struct tipoProducto {
    char idExterno[15];
    char descripcion[50];
    float nivelesStock[SECTORES];
};

int AnalizarExistencias(
    struct tipoProducto *vector,
    int numP,
    float umbralSeguridad,
    float *sumaTotal,
    int *filaAlerta,
    int *colAlerta
)
{
    if(vector == NULL)
    return -1;
    if(numP <= 0 || numP > MAX_PROD)
    return -2;
    if(sumaTotal ==NULL || filaAlerta == NULL || colAlerta == NULL)
    return -3;

    *sumaTotal = 0;
    int i,j, flag;

    flag = 0;
    for(i = 0; i < numP; i++)
    {
        for( j = 0; j < 6; j++)
        {
            *sumaTotal += *((vector+i)->nivelesStock+j);
            if( *((vector+i)->nivelesStock+j) < umbralSeguridad && flag == 0)
            {
                *filaAlerta = i;
                *colAlerta = j;
                flag = 1;
            }
        }
    }
    return flag;
}
int main(void)
{
    struct tipoProducto almacen[50] =
    {
        {
            .idExterno = "Paracetamol",
            .descripcion = "Sirve para todo",
            .nivelesStock = {40.0, 60, 70, 9},
        },
    };
    int resultado = 0;
    int fila = 0;
    int col = 0;
    int numProducto = 1;
    float suma = 0;


    resultado = AnalizarExistencias(almacen, numProducto,30, &suma, &fila, &col);
    printf("\nEl resultado es: %d\n", resultado);
    printf("\nLa fila es: %d\n", fila);
    printf("\nLa columna es: %d\n", col);
    printf("\nLa suma es = %d\n", suma);
    return 0;
}
