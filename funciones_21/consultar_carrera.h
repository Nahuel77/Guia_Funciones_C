#include "mejor_t_carrera.h"

void mejor_t_carrera(char atletas[15][100], int carrera_n[15]);

void consultar_carrera(char atletas[15][100], int t_carrera_a[15], int t_carrera_b[15], int t_carrera_c[15])
{
    char op;
    int carrera, status;
    do
    {
        printf("Ingrese el numero de carrera (1, 2, 3): ");
        scanf("%d", &carrera);
        if(carrera<1||carrera>3)
        {
            printf("El numero de carrera ingresado es incorrecto.\n");
            do
            {
                printf("Desea consultar otra carrera? S/N: ");
                scanf(" %c", &op);
                op = toupper(op);
                if(op=='N')
                {
                    status=0;
                }
                if(op=='S')
                {
                    status=1;
                }
                if(op!='N'&&op!='S')
                {
                    printf("La opcion ingresada es incorrecta.\n");
                    status=2;
                }
            }
            while(status==2);
        }else{
            if(carrera==1){
                mejor_t_carrera(atletas, t_carrera_a);
            }
            if(carrera==2){
                mejor_t_carrera(atletas, t_carrera_b);
            }
            if(carrera==3){
                mejor_t_carrera(atletas, t_carrera_c);
            }
        }
    }
    while(status!=0);
}
