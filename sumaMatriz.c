#include <stdio.h>

int sumaMatriz(int  *m, int  t_fil, int t_col, int  *sumext, int    *sumint)
{
    int i,j;
    for (i = 1; i < t_fil - 1 ; i++)
    {
        for (j = 1; j < t_col - 1; j++)
        {
            *sumint += m[i * t_col + j];
        }
    }
    for (i = 0; i < t_fil ; i++)
    {
        for (j = 0; j < t_col; j++)
        {
            if ((i == 0 || j == t_fil) || (j == 0 || j == t_col))
            {
                *sumext += m;
            }
            
        }
    }
    return 0;
}