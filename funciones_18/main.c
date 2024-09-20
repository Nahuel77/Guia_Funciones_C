#include <stdio.h>
#include <stdlib.h>
#include "concatenador.h"

void conca(int *arr);

int main()
{
    int arr[5]= {7,0,3,9,5};
    int i;
    printf("Arreglo:\n");
    for(i=0; i<5; i++)
    {
        printf("posicion %d del arreglo: %d\n", i+1, arr[i]);
    }
    conca(arr);

    return 0;
}
