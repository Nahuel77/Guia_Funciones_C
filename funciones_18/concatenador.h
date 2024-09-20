#include <stdio.h>
#include <string.h>

/*18.Dado un arreglo donde cada elemento se halla en el rango 0..9, retornar el valor
decimal formado por la concatenación de todos los elementos del arreglo.
Ej.: [1 2 4 0 9] devuelve 12409.*/

void conca(int arr[])
{
    int i;
    for(i=0; i<5; i++)
    {
        printf("%d",arr[i]);
    }
}
