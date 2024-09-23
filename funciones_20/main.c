#include <stdio.h>
#include <stdlib.h>
#include "get_date.h"
#include "show_date.h"
#include "date_compare.h"
#include "date_diff.h"

void get_date(int date[3]);
void show_date(int date[3]);
int date_compare(int date_a[3], int date_b[3]);
int date_diff(int date_a[3], int date_b[3]);

//NOTA: Por temas de incompatibilidad en la codificación de la consola, la palabra AÑO se remplaza por ANIO.

int main()
{
    int date_a[3], date_b[3], n=0;
    printf("Ingrese la primer fecha:\n");
    get_date(date_a);
    printf("La fecha ingresada es ");
    show_date(date_a);
    printf("\n\n");
    printf("Ingrese la segunda fecha:\n");
    get_date(date_b);
    printf("La fecha ingresada es ");
    show_date(date_b);
    printf("\n\n");
    n = date_compare(date_a, date_b);
    if(n==1){
        printf("La primer fecha es anterior a la segunda.\n");
        n=date_diff(date_b, date_a);
    }else{
        printf("La primer fecha no es anterior a la segunda.\n");
        n=date_diff(date_a, date_b);
    }
    printf("La diferencia de dias entre las fechas es de %d.\n", n);
    system("pause");
    return 0;
}
