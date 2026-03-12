#include <stdio.h>

int main(void)
{
    int array[] = {1, 4, 3, 5, 9};
    int *p_array = array;

    printf("\nEste es la dirección del array DEL BLOQUE COMPLETO, no del primer elemento: &array-->%p\n", &array);
    printf("\nEste es la dirección del array y del primer elemento: &array[0]-->%p\n", &array[0]);
    printf("\nEste es la direccion del array (primer elemento): array --> %p\n", array);
    printf("\nEste es el valor del array, del valor 0 (primer elemento): array[0] --> %d\n", array[0]);
    printf("\nEsta es la dirección del valor 0 del array: &array[0]) --> %p\n", &array[0]);
    printf("\nEste es la dirección del array a través del puntero:  p_array --> %p\n", p_array);
    printf("\nEste es la dirección del del valor 0 del array a través del puntero:  &p_array[0]--> %p\n", &p_array[0]);
    printf("\nEste es el valor 0 del array a través del puntero (primer elemento): p_array[0] --> %d\n", p_array[0]);
    printf("\nEste es la dirección del puntero: &p_array --> %p\n", &p_array);

    return (0);
}