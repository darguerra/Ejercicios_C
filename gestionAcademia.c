#include <stdio.h>
#define MAX 15
#define NUM_ASIGNATURAS 6
/*
Ejercicio: Gestión de Rendimiento Académico
Objetivo: Procesar las notas de un grupo de estudiantes utilizando
un vector de estructuras y un vector de punteros para ordenar los resultados de forma eficiente.

1. Definición de Datos: Crea un struct Estudiante que contenga:
nombre (cadena de caracteres).
notas (un vector de tipo float de tamaño constante NUM_ASIGNATURAS).
promedio (un float).

2. Tareas de Programación:
Procesamiento: Implementa una función que reciba el vector de estudiantes
y calcule el promedio de cada uno. Debes acceder a los campos usando el operador flecha (->) si pasas el estudiante por puntero.

Uso de Punteros: Crea un vector de punteros donde cada celda apunte a un registro de estudiante del vector original.

Ordenación: Implementa una función de ordenación (tipo burbuja) que reciba el
 vector de punteros y los ordene de mayor a menor promedio. Nota importante:
 Solo debes intercambiar los punteros en el vector de referencias, no los datos en el vector de estructuras original.

3. Restricciones Técnicas:
El tamaño de los vectores debe ser definido mediante macros (#define).
Debes validar que los punteros recibidos en las funciones no sean NULL.
*/
struct  Estudiante {
    char    nombre[MAX];
    float    notas[NUM_ASIGNATURAS];
    float   promedio;
};

void    ordenacionf(struct Estudiante *vector_p[], int numEstudiantes);

void    promediof(struct Estudiante *vector, int numEstudiantes)
{
    if(vector == NULL)
    {
        printf("El puntero está vacío");
        return;
    }
    int i,j;
    float prom;
    struct Estudiante *p_vector[numEstudiantes];
    for(i = 0; i < numEstudiantes; i++)
    {
        p_vector[i] = &vector[i];
        prom = 0;
        for(j = 0; j < NUM_ASIGNATURAS; j++)
        {
            prom += p_vector[i]->notas[j];
        }
        p_vector[i]->promedio = prom / NUM_ASIGNATURAS;
    }
    ordenacionf(p_vector, numEstudiantes);
}
void    ordenacionf(struct Estudiante *vector_p[], int numEstudiantes)
{
    int i, j;
    struct Estudiante *aux;

    for(i = 0; i < numEstudiantes; i++)
    {
        for(j = i+1; j < numEstudiantes; j++)
        {
            if(vector_p[i]->promedio < vector_p[j]->promedio)
            {
                aux = vector_p[i];
                vector_p[i] = vector_p[j];
                vector_p[j] = aux;
            }
        }
    }

    printf("\nPromedio\n");
            for(i = 0; i < numEstudiantes; i++)
    {
        printf("\n%.2f\n",vector_p[i]->promedio);
    }

}

int main(void)
{
    struct Estudiante estudiantes[10] = {
    {"Ana",    {9.5, 8.0, 7.0, 6.5, 10.0, 9.0}, 0},
    {"Luis",   {7.0, 6.5, 8.0, 7.5, 6.0, 7.0}, 0},
    {"María",  {10.0, 9.5, 9.0, 8.5, 10.0, 9.0}, 0},
    {"Carlos", {5.0, 6.0, 5.5, 6.5, 5.0, 6.0}, 0},
    {"Lucía",  {8.0, 9.0, 8.5, 7.5, 8.0, 9.0}, 0},
    {"David",  {6.0, 7.0, 6.5, 7.5, 6.0, 6.5}, 0},
    {"Elena",  {9.0, 8.5, 9.5, 8.0, 9.0, 8.5}, 0},
    {"Jorge",  {7.5, 8.0, 7.0, 7.5, 8.0, 7.0}, 0},
    {"Sofía",  {10.0, 10.0, 9.5, 9.0, 10.0, 9.5}, 0},
    {"Miguel", {6.5, 7.0, 6.0, 7.5, 6.5, 7.0}, 0}
};
    promediof(estudiantes, 10);

    return 0;
}
