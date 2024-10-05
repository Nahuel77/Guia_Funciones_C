#include <stdio.h>
#include <stdlib.h>
#include "ordenador.h"

void ordenador(char VALORES[10], int POSNUEVAS[10]);

int main()
{
    char VALORES[10]= {'f', 'b', 'n', 'x', 'r', 'd', 'm', 'c', 't', 'p'};
    int POSNUEVAS[10]= {3, 2, 4, 1, 6, 9, 7, 10, 5, 8};
    //n b x f d t m p r c
    int i;
    printf("Valores:\n");
    for(i=0; i<10; i++)
    {
        printf("%c ", VALORES[i]);
    }
    printf("\nNuevas Posiciones:\n");
    for(i=0; i<10; i++)
    {
        printf("%d ", POSNUEVAS[i]);
    }
    printf("\nNuevo orden:\n");
    ordenador(VALORES, POSNUEVAS);
    return 0;
}
