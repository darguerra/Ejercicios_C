#include <stdio.h>

/*
Ejercicio 2 (Medio): El buscador de extremos
Ahora que dominas cómo pasar un vector y su tamaño, vamos a complicarlo un poco. Este ejercicio mezclará el manejo de vectores
 con el paso por referencia de variables simples (el swap que hiciste antes).
Problema: Escribe una función llamada buscarExtremos que reciba un vector de enteros y su tamaño.
 La función debe encontrar el valor máximo y el valor mínimo del vector.
El giro: La función no puede usar return para devolver los valores. Debe devolver el máximo 
y el mínimo por referencia (usando punteros como parámetros adicionales)
.
Lo que practicamos: Cómo una función puede "devolver" múltiples resultados modificando variables del main a través de sus direcciones
.
Estructura sugerida para la función: void buscarExtremos(int *v, int tam, int *pMax, int *pMin)
*/

int buscarExtremos(int *v, int tamgano, int *max, int *min)
{
    int i;

    *max = v[0];
    *min = v[0];
    for (i = 0; i < tamgano; i++)
    {
        if (v[i] > *max)
            *max = v[i];
        if (v[i] < *min)
            *min = v[i];
    }
    return 0;
}

int main(void)
{
    int vector[] = {100, 8, 99, 101, -1}; //El vector se realiza
    int max, min;
    buscarExtremos(vector,5,&max, &min);

    printf("\nEl maximo del vector es %d y el minimo %d\n", max, min);
    return 0;
}
