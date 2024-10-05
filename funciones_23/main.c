#include <stdio.h>
#include <stdlib.h>
#include "ordenador.h"

void ordenador(int original[10], int copia[19]);

int main()
{
    int i;
    int original[10]={8, 3, 9, 7, 5, 2, 4, 6, 1, 0 };
    int copia[10]={2, 7, 6, 4, 5, 9, 3, 8, 0, 1};

    printf("Arreglo original: ");
    for(i=0; i<10; i++){
        printf("%d, ", original[i]);
    }
    printf("\n\nArreglo copia:\n");
    for(i=0; i<10; i++){
        printf("%d, ", copia[i]);
    }
    printf("\n");

    ordenador(original, copia);

    return 0;
}
