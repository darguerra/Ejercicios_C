#include <stdio.h>
/*
Reto 2: Lógica Iterativa Problema: Realiza un programa que solicite dos números enteros al usuario y
 calcule la suma de todos los números pares comprendidos entre esos dos límites.

• Punto crítico: Si el usuario introduce el límite mayor primero (ej: 100 y 50),
 el programa debe ser capaz de intercambiarlos para que el bucle funcione
 */

int esPar(unsigned int num)
{
    if (num % 2 == 0)
        return (1);
    else
        return(0);
}

unsigned int sumaNumPares(unsigned int num1, unsigned int num2)
{
    unsigned int aux, sum, i;
    if (num1 > num2) //Si el numero 1 es menor que el 2
    {
        //Si el num1 es mayor (ejemplo 100) que el num2 (50), se intercambian los valores. Si no es así, no entra en esta condición.
        aux = num2; //aux vale 50
        num2 = num1;    //num2 vale 100
        num1 = aux; //num1 vale 50 y aux 50 todavía
    }
    sum = 0;
    for (i = num1; i <= num2; i++) //mientras aux sea menor o igual a num2 (el grande) revisa si es par
    {
        if (esPar(i) == 1)
        {
            sum += i;
         }
    }
    return (sum);
}

int main(void)
{
    unsigned int n1, n2, result;

    n1 = 0;
    n2 = 0;
    result = 0;
 
    printf("\nEscriba el primer numero:\n");
    scanf("%u", &n1);
    printf("\nEscriba el segundo numero:\n");
    scanf("%u", &n2);

    result = sumaNumPares(n1, n2);
    printf("\nLa suma total es: %u\n", result);

    return (0);
}