#include <stdio.h>
#define NUM_MESES 12
#define NUM_VIVIENDAS 100

struct  tipoVivienda
{
    char    idCatastro[21];
    char    propietario[80];
    char    direccion[128];
    float   superficie;
    float   consumos[NUM_MESES];
};

int procesarConsumos(struct tipoVivienda*   viviendas,
    int  numV,  float   *conMedioViviendas, float   *conMaxViviendas,
    float  *conMedioMeses, float   *conMaxMeses)
    {
        int i,j;
        float promedio, maximo;
        //conMedioViviendas = promedio de consumo de agua de cada vivienda
        //conMaxViviendas = el valor máximo de consumo de agua de cada vivienda
        //conMedioMeses = promedio de consumos de agua del total de viviendas. Tamaño = NUM_MESES
        //conMaxMeses = Valor máximo de consumo de agua del conjunto de viviendas por cada mes. Lenght = NUM_MESES
    if(viviendas == NULL)
        return  -1;
    if(numV <= 0 || numV > NUM_VIVIENDAS)
        return -2;
    if(conMedioViviendas == NULL || conMaxViviendas == NULL || conMedioMeses == NULL || conMaxMeses == NULL)
        return -3;

        //Primer recorrido
    for(i = 0; i < numV; i++)
    {
        promedio = 0;
        maximo = 0;
        for(j = 0; j < NUM_MESES; j++)
        {
            promedio += viviendas[i].consumos[j];
            if(maximo < viviendas[i].consumos[j])
                maximo = viviendas[i].consumos[j];
        }
        conMedioViviendas[i] = promedio / NUM_MESES;
        conMaxViviendas[i] = maximo;
    }

    //Segundo recorrido
    for(i = 0; i < NUM_MESES; i++)
    {
        promedio = 0;
        maximo = 0;
        for(j = 0; j < numV; j++)
        {
            promedio += viviendas[j].consumos[i];
            if(maximo < viviendas[j].consumos[i])
                maximo = viviendas[j].consumos[i];
        }
        conMedioMeses[i] = promedio / numV;
        conMaxMeses[i] = maximo;
    }

    return 0;
}
