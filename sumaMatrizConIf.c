#include <stdio.h>

void sumaMatriz(int f, int c, int m[][c], int *sumaExterior, int *sumaInterior) //Repasar la hechura de la cabecera
{
    int i, j;

    for (i = 0; i < f; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == 0 || i == f-1 || j == 0 || j == c-1) //repasar el c-1 y f-1
            {
                *sumaExterior += m[i][j];
            }
            else
                *sumaInterior += m[i][j];
        }
    }
}
int main(void)
{
    int sumaExterior = 0;
    int sumaInterior = 0;
    int filas = 5;
    int columnas = 6;
    int matrix[5][6] =
        {
            {1, 1, 1, 1, 1, 1},
            {1, 2, 2, 2, 2, 1},
            {1, 2, 2, 2, 2, 1},
            {1, 2, 2, 2, 2, 1},
            {1, 1, 1, 1, 1, 1},
        };

    sumaMatriz(filas, columnas, matrix, &sumaExterior, &sumaInterior); //Repasar como añadir en la cabecera la matriz
    printf("\nLa suma del marco es: %d\n", sumaExterior);
    printf("\nLa suma del interior es: %d\n", sumaInterior);

    return 0;
}