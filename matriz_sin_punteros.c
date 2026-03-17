#include <stdio.h>

int main(void)
{
    int m[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    int i,j;
    for (i = 0; i <2; i++)
    {
        for(j=0; j<3;j++)
        {
            printf(" \n%p ", (*(m+i)+j)); //Para pasar las direcciones
            printf(" \n%d ", *(*(m+i)+j)); //Para pasar el valor
        }
        printf("\n");
    }
    return 0;
}
