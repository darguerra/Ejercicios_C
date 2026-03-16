#include <stdio.h>
#define LONG 10
/*
Nivel 1: Aritmética de Punteros en Vectores
Antes de entrar en las dos dimensiones,
debes dominar la equivalencia entre subíndices y direcciones.
El Reto: Escribe una función que reciba un vector de
enteros y su tamaño efectivo. La función debe cargar el
vector de forma que cada celda contenga el valor de su índice,
 pero está prohibido usar corchetes [].
Concepto clave: En C, v[k] es idéntico a *(v + k). Debes usar esta notación de indirección y suma
 para moverte por la memoria.
*/

void    recorrerVector(int  *vect, int    longitud)
{
    int i;
    for( i = 0; i < longitud; i++ )
    {
        *(vect + i) = i + 1;
    }
}

int main(void)
{
    int exVector[LONG];
    int i;
    recorrerVector(exVector,LONG);
    for (i = 0; i < LONG; i++)
    {
        printf("\n%d\n", *(exVector+i));
    }
    return 1;
}
