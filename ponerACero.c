#include <stdio.h>

/*
Ejercicio 1 (Fácil): Inicializador de Vectores
Escribe una función llamada ponerACero que reciba un vector de enteros y su tamaño, y ponga todos sus elementos a 0
.
Lo que trabajamos: Pasar la dirección del vector (usando solo su nombre) y el tamaño como entero
.
Análisis de error previo: Evita usar sizeof dentro de la función y no uses & al pasar el vector desde el main.
*/
int ponerACero(int *v, int tamagno)
{
    int i;
    for (i = 0; i < tamagno; i++)
    {
        v[i] = 0;
    }
    return 0;
}

int main(void)
{
    int i, j;
    int vectorPrueba[5] = {1 ,2 ,3 ,4 ,5};

    printf("\nAntes  de la función:");
    for (i = 0; i < 5; i++)
    {
      printf("\n %d\n", vectorPrueba[i]);
    }
    
    ponerACero(vectorPrueba, 5);
    
    printf("\nDespues de la función:");

    for (j = 0; j < 5; j++)
    {
        printf("\n %d\n", vectorPrueba[j]);
    }
    
    return 0;
}