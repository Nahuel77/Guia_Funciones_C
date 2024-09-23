#include <string.h>

void consultar_atleta(char atletas[15][100], int t_carrera_a[15], int t_carrera_b[15], int t_carrera_c[15])
{
    char nombre[100], op, status;
    int i;
    do
    {
        printf("Ingrese el nombre del atleta a consultar: ");
        fflush(stdin);
        gets(nombre);
        for(i=0; i<15; i++)
        {
            if(strcmp(nombre, atletas[i])!=0)
            {

            }
            else
            {
                printf("No se encontro a ningun atleta con ese nombre.\n");
                do
                {
                    printf("Desea buscar otro nombre? S/N");
                    gets(op);
                    if(op!='S'||op!='s'||op!='N'||op!='n'){
                        printf("La opcion ingrsada es incorrecta.\n");
                    }
                }
                while(op!='S'||op!='s'||op!='N'||op!='n');
            }
        }
    }
    while()
    }
