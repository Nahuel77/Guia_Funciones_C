#include <stdio.h>
#include <stdlib.h>
#include "opcion_menu.h"

void option(int op);

int main()
{
    int op;
    do
    {
        printf("Selecciones una opcion del menu.\n");//omito acentos por temas de compatibilidad del cmd
        printf("\t1. Opcion 1.\n\t2. Opcion 2.\n\t3. Opcion 3.\n\t4. Salir\n");
        scanf("%d", &op);
        switch(op)
        {
        case 1:
            option(op);
            break;
        case 2:
            option(op);
            break;
        case 3:
            option(op);
            break;
        case 4:
            printf("\tAdios!\n");
            return 0;
            break;
        default:
            printf("La opcion ingresada no es parte del menu.\n");
            system("pause");
            system("cls");
            break;
        }
    }
    while(op!=4);
    return 0;
}
