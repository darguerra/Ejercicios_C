#include <stdio.h>

int main(void)
{

    /*
    [9, 54, 6, 8, 2]
    [9, 54, 6, 8, 2]
    */
    int v[] = {
        8, 20, 1, 5, 90, 80
    };
    int i,j,x;
    int aux;
    for(i = 0; i <= 4; i++)
    {
        for(j=i+1; j < 6; j++)
        {
                //printf("\nEl i es %d y j %d\n v[i] es %d y v[j] es %d\n", i, j, v[i],v[j]);
            if(v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }

        }
    }
    for(x= 0; x<6; x++)
    {
        printf("\n%d", v[x]);
    }
    return 0;
}
