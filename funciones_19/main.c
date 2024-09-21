#include <stdio.h>
#include <stdlib.h>
#include "isin.h"

int isin(int PARTE[], int GRANDE[], int length_PARTE, int length_GRANDE);

int main()
{
    int i, n;
    int GRANDE[23]= {1,5,6,9,1,4,8,3,2,7,5,9,4,1,8,2,6,3,8,4,5,2,4};
    int length_GRANDE = sizeof(GRANDE) / sizeof(GRANDE[0]);
    int length_PARTE;
    printf("La cadena GRANDE es:\n");
    for(i=0; i<length_GRANDE; i++)
    {
        printf("%d ", GRANDE[i]);
    }
    printf("\nIngrese la dimension de la cadena PARTE.\n");
    scanf("%d", &length_PARTE);
    int PARTE[length_PARTE];
    for(i=0; i<length_PARTE; i++)
    {
        printf("Ingrese la posicion %d de la cadena PARTE para buscar en GRANDE: ", i+1);
        scanf("%d", &PARTE[i]);
    }
    n=isin(PARTE, GRANDE, length_PARTE, length_GRANDE);
    if(n==1)
    {
        printf("La cadena ");
        for(i=0; i<length_PARTE; i++)
        {
            printf("%d ",PARTE[i]);
        }
        printf("pertenece a la cadena GRANDE.\n");
    }
    else
    {
        printf("La cadena PARTE no pertenece a la cadena GRANDE.\n");
    }
    system("pause");
    return 0;
}
