#include <stdio.h>
#define	MAXCARACTID 21
#define	MAXPROPI 80
#define	MAXDIREC 128
#define	NUM_MESES 12
#define	NUM_VIVIENDAS 100
struct	tipoVivienda {

	char	idCatastro[MAXCARACTID];
	char	propietario[MAXPROPI];
	char	direccion[MAXDIREC];
	float	superficie;
	float	consumos[NUM_MESES];
};

int	procesarConsumos(struct tipoVivienda * viviendas, int numV, float * conMedioViviendas, float * conMaxViviendas, float * conMedioMeses, float * conMaxMeses)
{
	if(viviendas == NULL)
		return (-1);
	if(numV <= 0 || numV > NUM_VIVIENDAS)
		return (-2);
	if(conMedioViviendas == NULL || conMaxViviendas == NULL || conMedioMeses == NULL || conMaxMeses == NULL)
		return (-3);
	int i,j;
	float promedio;
	float max;
	for( i = 0; i < numV; i++)
	{
		promedio = 0;
		conMaxViviendas[i] = 0;
		conMedioViviendas[i] = 0;
		max = viviendas[i].consumos[0];
		for( j = 0; j < NUM_MESES; j++)
		{
			promedio += viviendas[i].consumos[j];
			if(max < viviendas[i].consumos[j])
				max = viviendas[i].consumos[j];
		}
		conMedioViviendas[i] = promedio / NUM_MESES;
		conMaxViviendas[i] = max;
	}

	for( i = 0; i < NUM_MESES; i++)
	{
		promedio = 0;
		conMedioMeses[i] = 0;
		conMaxMeses[i] = 0;
		max = viviendas[0].consumos[i];
		for( j = 0; j < numV; j++)
		{
			promedio += viviendas[j].consumos[i];
			if(max < viviendas[j].consumos[i])
				max = viviendas[j].consumos[i];
		}
		conMedioMeses[i] = promedio / numV;
		conMaxMeses[i] = max;
	}
	return (0);
}
