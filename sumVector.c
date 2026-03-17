#include <stdio.h>

/*
Suma todos los elementos usando punteros

Sin usar [] dentro de la función
*/
int sumaVector(int *v, int n)
{
    int i;
    int suma = 0;
    for(i = 0; i < n; i++)
    {
        suma += *(v+i);
    }
    return suma;
}

int main(void)
{
    int vector[] = {1,2,3,4,5};
    int result = 0;
    result = sumaVector(vector, 5);
    printf("\nEl resultado es: %d \n", result);
    return 0;
}
