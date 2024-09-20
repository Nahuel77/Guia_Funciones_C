#include <stdio.h>
#include <stdlib.h>
#include "multiplicador.h"

int multiplicador(int a, int b);

int main()
{
    int a, b, n;
    printf("Se multiplicaran dos numeros a*b\n");
    printf("Ingrese el numero a:\n");
    scanf("%d", &a);
    printf("Ingrese el numero b:\n");
    scanf("%d", &b);

    n=multiplicador(a, b);
    printf("%d*%d=%d\n", a, b, n);

    return 0;
}
