#include <stdio.h>
#include <stdlib.h>
#include "random_num.h"

int random_num(int min, int max);

int main()
{
    int min, max, i, cantidad, n;
    printf("Ingrese el rango de numeros aleatorios.\n");
    printf("Minimo:\n");
    scanf("%d", &min);
    printf("Maximo:\n");
    scanf("%d", &max);
    printf("Ingrese la cantidad de valores aleatorios generados");
    scanf("%d", &cantidad);
    for(i=0; i<cantidad; i++)
    {
        n=random_num(min, max);
        printf("Numero aleatorio generado: %d\n", n);
    }

    return 0;
}
