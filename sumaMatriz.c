#include <stdio.h>

void sumaMatriz(int t_fil, int t_col,int m[][t_col], int *sumext, int *sumint)
{
    int i, j;
   for (i = 1; i < t_fil - 1; i++) // Suma del interior
    {
        for (j = 1; j < t_col - 1; j++)
        {
            printf("\nEstamos en la fila %d y en la columna %d\n", i, j);
            printf("\n %d + %d\n", *sumint, m[i][j]);
            *sumint += m[i][j];
        }
    }
   for (i = 0; i < t_fil; i++) // suma del marco
    {
        for (j = 0; j < t_col; j++)
        {
            if ((i == 0 || i == t_fil-1) || (j == 0 || j == t_col-1))
            {
            printf("\nEstamos en la fila %d y en la columna %d\n", i, j);
            printf("\n %d + %d\n", *sumext, m[i][j]);
                *sumext += m[i][j];
            }
        }
    }
}
int main(void)
{
    int sumaExt = 0;
    int sumaInt = 0;
    const int row = 5;
    const int col = 6;
    int matrix[row][col] = {
        {1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 1},
        {1, 2, 2, 2, 2, 1},
        {1, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1},
    };
    sumaMatriz(row, col, matrix, &sumaExt, &sumaInt);

    printf("\nLa suma de extremos es %d", sumaExt);
    printf("\nLa suma de internos es %d", sumaInt);

    return 0;
}