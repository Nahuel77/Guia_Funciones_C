#include <stdio.h>
#include <stdlib.h>
#include "cargar_nombres.h"
#include "cargar_tiempos.h"
#include "mejor_tiempo_promedio.h"

void cargar_nombres(char atletas[15][100]);
void cargar_tiempos(char atletas[15][100], int t_carrera_a[15], int t_carrera_b[15], int t_carrera_c[15]);
void mejor_tiempo_promedio(char atletas[15][100], int t_carrera_a[15], int t_carrera_b[15], int t_carrera_c[15]);

int main()
{
    char atletas[15][100]={"Laura", "Pepe", "Carolina", "Mendez Juan", "Pepe", "Lorena", "Raul", "Maria", "Vero", "Nahuel", "Jorge", "Jose", "Noelia", "Johana", "Tay"};
    int t_carrera_a[15]={56,64,53,68,51,53,67,61,53,55,68,59,66,60,58};
    int t_carrera_b[15]={61,55,68,60,72,51,59,64,62,68,63,59,67,58,55};
    int t_carrera_c[15]={68,73,69,70,59,76,71,64,72,58,70,69,66,68,75};
    //cargar_nombres(atletas);
    system("cls");
    //cargar_tiempos(atletas, t_carrera_a, t_carrera_b, t_carrera_c);
    mejor_tiempo_promedio(atletas, t_carrera_a, t_carrera_b, t_carrera_c);
    system("pause");
    return 0;
}
