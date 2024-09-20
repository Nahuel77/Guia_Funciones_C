#include <stdio.h>
#include <stdlib.h>
#include "volumen_esfera.h"
#include "superficie_esfera.h"
#include "superficie_circunferencia.h"
#include "perimetro_circunferencia.h"

float volumen_esfera(int r);
float superficie_esfera(int r);
float superficie_circunferencia(int r);
float perimetro_circunferencia(int r);

int main()
{
    int op, r;
    float n;
    do
    {
        printf("1. Volumen de una esfera de radio r (4/3 ¶ r3).\n2. Superficie de una esfera de radio r (4 ¶ r2).\n3. Superficie de una circunferencia de radio r (¶ r2).\n4 Perimetro de una circunferencia de radio r (2 ¶ r).\n5. Salir.\n");
        scanf("%d", &op);
        switch(op)
        {
        case 1:
            system("cls");
            printf("Ingrese el radio de la esfera:\n");
            scanf("%d", &r);
            n=volumen_esfera(r);
            printf("Volumen de la esfera: %.2f\n",n);
            system("pause");
            system("cls");
            break;
        case 2:
            system("cls");
            printf("Ingrese el radio de la esfera:\n");
            scanf("%d", &r);
            n=superficie_esfera(r);
            printf("Superficie de la esfera: %.2f\n",n);
            system("pause");
            system("cls");
            break;
        case 3:
            system("cls");
            printf("Ingrese el radio de la circunferencia:\n");
            scanf("%d", &r);
            n=superficie_circunferencia(r);
            printf("Superficie de la circunferencia: %.2f\n",n);
            system("pause");
            system("cls");
            break;
        case 4:
            system("cls");
            printf("Ingrese el radio de la circunferencia:\n");
            scanf("%d", &r);
            n=perimetro_circunferencia(r);
            printf("Perimetro de la circunferencia: %.2f\n",n);
            system("pause");
            system("cls");
            break;
        case 5:
            system("cls");
            printf("\tAdios!\n");
            return 0;
            break;
        default:
            system("cls");
            printf("Opcion invalida.\n");
            system("pause");
            system("cls");
            break;
        }
    }
    while(op!=5);
    return 0;
}
