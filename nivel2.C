#include <stdio.h>
#define FILAS   100
#define COLUMNAS 100

/*
El Reto: Escribe una función que sume todos los elementos de una matriz (tabla) de int usando punteros.
Punto clave: En la cabecera de la función, para recibir una matriz, debes usar la sintaxis de puntero a vector: int (*m)[COLUMNAS]
,
.
Nota: Recuerda que los paréntesis en (*m) son obligatorios para que no se confunda con un vector de punteros
.
*/

void recorrerMatriz(int  (*matriz)[COLUMNAS], int numFil, int numCol)
{
    int i,j;

    for (i = 0; i < numFil; i++)
    {
        for( j = 0; j < numCol; j++)
        {
            //printf(" %d ", *(*(matriz +i)+j));
            printf(" %d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int matrix[FILAS][COLUMNAS] = {
        {1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 1},
        {1, 2, 2, 2, 2, 1},
        {1, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1},
    };
    recorrerMatriz(matrix,5, 6);
    return 0;
}
