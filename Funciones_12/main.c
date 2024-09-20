#include <stdio.h>
#include <stdlib.h>
#include "potenciar.h"

int potenciar(int a, int b);

int main()
{
    int a, b, n;
    printf("Ingrese un numero base.\n");
    scanf("%d", &a);
    printf("Ingrese un exponente.\n");
    scanf("%d", &b);
    n = potenciar(a, b);
    printf("Respuesta: %d\n", n);
    system("pause");
    return 0;
}
