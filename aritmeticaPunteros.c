#include <stdio.h>
#define ROW 3
#define COL 3

int main(void)
{
    int vectorEx[] = {2, 5, 10, 20, 90, 13, 31, 89};
    int matrixEx[ROW][COL] = {{1, 6, 9}, {8, 9, 13}, {20, 90, 101}};
    int *p_vector = vectorEx;
    int (*p_matrix)[COL] = &matrixEx[0];
    int i, j;

    for (i = 0; i < sizeof(vectorEx)/sizeof(vectorEx[0]); i++)
    {
        printf("\nNº: %d\n", *(p_vector + i)); //Aquí es necesario el asterisco porque se usa la aritmetica de punteros
        //printf("\nNº: %d\n", p_vector[i]); //Aquí no es necesario el asterisco porque ya se trata al vector como si fuera un array.
                                            //A través de la notación de subíndice
    }

    printf("\n MATRIX\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            //printf("\nNº: %d\n", matrixEx[i][j]); //Forma con notación de subíndice con la propia matriz
            //printf("\nNº: %d\n", *(*(matrixEx + i)+j)); //Forma con la aritmética de punteros con la propia matriz
            // printf("\nNº: %d\n\n", p_matrix[i][j]); //Forma con la notación de subíndice en el puntero
            //printf("\nNº: %d\n\n", *(*(p_matrix + i)+ j)); //Forma con la aritmética de punteros en el puntero

        }
        
    }
    

    return 0;
}