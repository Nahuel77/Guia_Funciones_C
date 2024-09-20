#include <stdio.h>
#include <stdlib.h>
#include "potenciador.h"

int potenciador(int x, int exp);

int main()
{
    int a, b, x, n2, n3, r;
    printf("Ingrese el valor del coheficiente a:\n");
    scanf("%d", &a);
    printf("Ingrese el valor del coheficiente b:\n");
    scanf("%d", &b);
    printf("Ingrese el valor de la incognita x:\n");
    scanf("%d", &x);

    n2=potenciador(x, 2);
    n2=a*n2;
    n3=potenciador(x, 3);
    n3=b*n3;
    r=n2+n3;

    printf("Para el polinomio de formato 'P(x) = ax^2 + bx^3' con los valores %d*%d^2 + %d*%d^3 el resultado es:\n", a, x, b, x);
    printf("%d", r);
    return 0;
}
