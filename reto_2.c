#include <stdio.h>
/*
Reto 2: Lógica Iterativa Problema: Realiza un programa que solicite dos números enteros al usuario y
 calcule la suma de todos los números pares comprendidos entre esos dos límites.

• Punto crítico: Si el usuario introduce el límite mayor primero (ej: 100 y 50),
 el programa debe ser capaz de intercambiarlos para que el bucle funcione
 */

int esPar(int num)
{
    if (num % 2 == 0)
        return (1);
    else
        return(0);
}

int sumaNumPares(int num1, int num2)
{
    int aux, i, j;
    if (num1 < num2)
    {
        aux = num2;
        for (num1; num1 < aux; i++)
        {
         if (esPar(num1))
         {
            /* code */
         }
            
        }
        
    }
    else
    {
        aux = num1;
    }

    
    
}