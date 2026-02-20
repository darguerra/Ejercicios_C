#include <stdio.h>

/*
Reto 3: Lógica de Colecciones (Vectores)
Subimos un escalón. Ahora no solo manejaremos valores sueltos, sino conjuntos de datos en memoria contigua.
Problema: Crea una función llamada existeEnVector que busque un número en un vector.
 Luego, úsala para crear otra función interseccionVectores que reciba dos vectores de enteros
 y genere un tercer vector con los elementos que aparecen en ambos, sin repetir ningún número en el resultado.

Puntos clave para tu lógica:
1. Recorrido: Necesitarás bucles para comparar cada elemento del primer vector con todos los del segundo.
2. Índices: El vector de resultado necesita su propio contador de posición, que solo avance cuando encuentres una coincidencia real.
3. Final de datos: Recuerda que en C los vectores no saben "cuánto miden" por sí solos; debes pasar su tamaño como un parámetro extra.
*/

int existeEnVector(int num, int *vectNum, int size) // CHECK 
{
    int i;
    for (i = 0; i < size; i++)
    {
        if (num == vectNum[i])
        return(1);
    }
    return (0);
}

int main(void)
{
    int ejemplo[] = {5,4, 13, 9, 13, 0, 890}; //7
    int size = sizeof(ejemplo) / sizeof(ejemplo[0]);
    int *p_ejemplo = ejemplo;

      printf("\n%d : es size del ejemplo es \n", size);

    int pruebaNum = existeEnVector(890, p_ejemplo, size);
    printf("\n%d es el numero\n", pruebaNum);
    if (pruebaNum)
    {
        printf("El numero está en el vector");
    }
    else
        printf("El numero no está en el vector");

    return (0);
}



/*int *interseccionVectores(int *v1, int *v2, int tamagno)
{
    int v3[tamagno];
    int *p_v3 = v3;
    int i, j, k;
    int sizev1 = sizeof(&v1) / sizeof(v1[0]);
    int sizev2 = sizeof(&v2) / sizeof(v2[0]);

    if (sizev1 > sizev2)
        tamagno = sizev1;
    else
        tamagno = sizev2;
    
    for (i = 0; i < sizev1; i++)
    {
        for (j = 0; j < sizev2; j++)
        {
            if (v1[i] == v2[j])
            {
                if (!existeEnVector(v1[i], v3))
                {
                    v3[i] = v1[i];
                    break;
                }
            }
        }
        j = 0;
    }
    return (*v3);
}*/
/*
int main(void)
{
    int i, size, vectorMayor;
    int vector1[] = {5, 6, 7, 7, 9, 10, 9, 3, 13};
    int vector2[] = {1, 2, 7, 8, 13, 9, 3, 13};
    int sizev1 = sizeof(&vector1) / sizeof(vector1[0]);
    int sizev2 = sizeof(&vector2) / sizeof(vector2[0]);
    int *p_vector1 = vector1;
    int *p_vector2 = vector2;
    
    if (sizev1 > sizev2)
          vectorMayor = sizev1;
    else
        vectorMayor = sizev2;
    
        int vector3[vectorMayor];
      //Los que se repiten en ambos son 7, 9, 13, 3
    
    *vector3 = *interseccionVectores(vector1, vector2, vectorMayor);
    
    size = sizeof(&vector3) / sizeof(vector3[0]);
    printf("\nLos numeros que se repiten son:\n");
    for (i = 0; i < size; i++)
    {
        printf("\n%d\n", vector3[i]);
    }
    
    return (0);
}*/