#include <stdio.h>
#include <stdlib.h>
#include "leerValores.h"
#include "mostrarValores.h"

void leerValores(int A, int B, int mat[A][B]);
void mostrarValores(int A, int B, int mat[A][B]);

int main()
{
    int A, B;
    printf("Ingrese la dimension de su matriz AxB.\n");
    printf("Valor A:\n");
    scanf("%d", &A);
    printf("Valor B:\n");
    scanf("%d", &B);

    int num[A][B];

    printf("Ingrese valores para la matriz %dx%d.\n", A, B);
    leerValores(A, B, num);
    mostrarValores(A, B, num);

    return 0;
}
