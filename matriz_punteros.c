#include <stdio.h>

int main(void)
{
    int m[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    int *p = (int *)m;
    int i,j;
    for (i = 0; i <2; i++)
    {
        for(j=0; j<3;j++)
        {
            printf(" %d ",*(p+i*3+j)); //Para pasar el valor
            printf(" %p ",(p+i*3+j)); //Para pasar la dirección
        }
        printf("\n");
    }
    return 0;
}
