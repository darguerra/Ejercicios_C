#include <stdio.h>
/*
Reto 1: Lógica de Selección y Operadores
Problema: Construye una función llamada esBisiesto que reciba un año y devuelva 1 si es bisiesto o 0 si no lo es.
• Qué evalúa: Tu capacidad para combinar operadores relacionales (==, %) y lógicos (&&, ||) para resolver condiciones complejas.
• Punto crítico: Un año es bisiesto si es múltiplo de 4, pero no de 100, a menos que también sea múltiplo de 400.
*/
int esBisiesto(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return (1);
    else
        return (0);
}
int main(void)
{
    int anno1, anno2, anno3, anno4;
    anno1 = 2000;
    anno2 = 2020;
    anno3 = 1998;
    anno4 = 2400;
    int result1, result2, result3, result4;

    result1 = esBisiesto(anno1);
    result2 = esBisiesto(anno2);
    result3 = esBisiesto(anno3);
    result4 = esBisiesto(anno4);

    printf("resultado 1: %d\n", result1);
    printf("resultado 2: %d\n", result2);
    printf("resultado 3: %d\n", result3);
    printf("resultado 4: %d\n", result4);
    
    return (0);
}