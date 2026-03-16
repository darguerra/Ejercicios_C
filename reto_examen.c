#include <stdio.h>
#define FIL 100
#define COL 100
/*
Enunciado: Escriba una función denominada analizarMatriz que realice una búsqueda del primer máximo local
en una tabla de números enteros y, simultáneamente, calcule la suma acumulada de los elementos internos procesados.
Requisitos obligatorios de la función:
Definición de Máximo Local: Un elemento se considera máximo local si es estrictamente mayor que los 8 elementos que lo rodean
.
Restricción de Búsqueda: El algoritmo no debe considerar el borde de la matriz (ni la primera ni la última fila/columna)
.
Uso de Estructuras Repetitivas: Para comparar el elemento central con sus 8 vecinos, es obligatorio emplear una estructura
repetitiva anidada; no se permite realizar las 8 comparaciones de forma manual
.
Notación de Punteros: El acceso a todos los elementos de la matriz dentro de la función debe realizarse obligatoriamente
mediante aritmética de punteros, sin utilizar el operador de subíndices []
,
.
Parámetros de Salida:
La fila y la columna del primer máximo hallado deben devolverse mediante parámetros por referencia
.
La suma de los elementos consultados (aquellos que se evaluaron para ver si eran máximos, se encuentre uno o no)
debe devolverse también mediante un parámetro por referencia.
Valor de Retorno: La función devolverá un 1 si localiza un máximo local y un 0 en caso contrario
.
Especificaciones técnicas:
Las dimensiones físicas de la matriz están definidas por las macros FIL y COL.
La función debe recibir la matriz, sus dimensiones efectivas, y los tres punteros necesarios para los resultados.

*/
int    analizarMatriz(int *(matriz)[COL], int numFila, int numCol, int *suma, int *maxLocal, int *filaMaxLocal, int *colMaxLocal)
{
    int i, j;
    int flag = 0;
    int df, dc;

    for( i = 1; i < numFila-1; i++)
    {
        for (j = 1; j < numCol-1; j++)
        {
            *suma += *(*(matriz+i)+j);
            for (df = i-1; df <= i+1; df++)
            {
                for(dc = j -1; dc <= j+1; dc++)
                {
                    if(df = 0 && dc == 0)
                        continue;
                    if(*(*(matriz + df)+dc) > *(*(matriz +i)+j))
                    {
                        flag = 0;
                        break;
                    }
                    else
                        flag = 1;
                }
            if(flag == 1)
                {
                    *filaMaxLocal = *(*(matriz + i)+j);
                    break;
                }
            }
            if (flag == 1)
                break;
        }
    }
    if(flag == 1)
        return 1;
    else
        return 0;
}
