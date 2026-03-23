#include <stdio.h>
#define MAX_ID		16
#define	MAX_TITULAR	60
#define	MAX_DIRECCION	100
#define	NUM_MESES	12
#define	MAX_VIVIENDAS	200

struct	tipoVivienda
{
	char	idVivienda[MAX_ID];
	char	titular[MAX_TITULAR];
	char	direccion[MAX_DIRECCION];
	int	numHabitaciones;
	float	consumos[NUM_MESES];
};

int	analizarConsumos(struct tipoVivienda * viviendas, int numV, float * consumoTotalVivienda, float * consumoMinVivienda, float * consumoTotalMes, float * consumoMinMes)
{
	if(viviendas == NULL)
		return (-1);
	if(numV <= 0 || numV > MAX_VIVIENDAS)
		return (-2);
	if(consumoTotalVivienda == NULL || consumoMinVivienda == NULL || consumoTotalMes == NULL || consumoMinMes == NULL)
		return (-3);

	int i;
	int j;
	float min;
	float total;

	for( i = 0; i < numV; i++)
	{
		min = viviendas[i].consumos[0];
		total = 0;
		for(j = 0; j < NUM_MESES; j++)
		{
			if(min > viviendas[i].consumos[j])
				min = viviendas[i].consumos[j];
			total += viviendas[i].consumos[j];
		}
		consumoTotalVivienda[i] = total;
		consumoMinVivienda[i] = min;
	}

	for (i = 0; i < NUM_MESES; i++)
	{
		min = viviendas[0].consumos[i];
		total = 0;
		for(j = 0; j < numV; j++)
		{
			if(min > viviendas[j].consumos[i])
				min = viviendas[j].consumos[i];
			total += viviendas[j].consumos[i];
		}
		consumoTotalMes[i] = total;
		consumoMinMes[i] = min;
	}
	return (0);
}
