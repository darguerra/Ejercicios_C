#include <stdio.h>

int cambioValores(int *val1, int *val2)
{
    int temp = 0;

    temp = *val1;
    *val1 = *val2;
    *val2 = temp;

    return 0;
}

int main(void)
{
    int valor1 = 56;
    int valor2 = 70;

    printf("\nAntes de la función, el valor 1 es %d y el valor 2 es %d\n", valor1, valor2);
    cambioValores(&valor1, &valor2); //Esto es lo que se llama PASO POR REFERENCIA
    printf("\nDespués de la función, el valor 1 es %d y el valor 2 es %d\n", valor1, valor2);

    return 0;
}
