#include <stdio.h>
#include <stdlib.h>
#include "mayus.h"

void mayus(char cad[]);

int main()
{
    char cad[50];
    printf("Ingrese una cadena de caracteres a convertir:\n");
    fflush(stdin);
    gets(cad);
    mayus(cad);
    puts(cad);
    return 0;
}
