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
int main(void)
{
    struct tipoVivienda v1 = {
        .idCatastro = "Noseque",
        .propietario = "Dario Guerra",
        .direccion = "calle nosecuantos",
        .superficie = 150.78,
        .consumos = {
            30.05,
            45.56,
            17.23,
            80.54,
            60.56,
            0.98,
            13.00,
            23.98,
            75.99,
            43.56,
            66.12,
            87.81
        }
    };
    printf("El catastro es: %s\n", v1.idCatastro);
    printf("El propietario es: %s\n", v1.propietario);
    printf("La dirección es: %s\n", v1.direccion);
    printf("La superficie es: %.2f\n", v1.superficie);
    int i;
    for(i = 0; i < 12; i++)
    {
        printf("El consumo del mes %d es: %.2f\n", i, v1.consumos[i]);
    };
    return 0;
}
