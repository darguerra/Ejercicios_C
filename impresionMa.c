#include <stdio.h>
#define FIL 2
#define COL 3

void    imprimir(int m[][COL], int fil, int col)
{
    int i, j;
    for(i = 0; i < fil; i++)
    {
        for(j = 0; j < col; j++)
        {
            printf(" %d ", m[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int m[FIL][COL] = {
    {1,2,3},
    {4,5,6}
};
    imprimir(m,2,3); //Imprimir con la matriz
    printf("\n");
    return 0;
}
