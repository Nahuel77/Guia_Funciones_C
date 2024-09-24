#include <string.h>

void consultar_atleta(char atletas[15][100], int t_carrera_a[15], int t_carrera_b[15], int t_carrera_c[15])
{
    char nombre[100], op;
    int i, n, status=0;
    do
    {
        printf("Ingrese el nombre del atleta a consultar: ");
        fflush(stdin);
        gets(nombre);
        for(i=0; i<15; i++)
        {
            if(strcmp(nombre, atletas[i])==0)
            {
                status=1;
                n=i;
                i=14;
            }
        }
        if(status==1)
        {
            if(t_carrera_a[n]<t_carrera_b[n])
            {
                if(t_carrera_a[n]<t_carrera_c[n])
                {
                    printf("%s obtuvo su mejor tiempo en la carrera 1: %d.\n", atletas[n], t_carrera_a[n]);
                }
                if(t_carrera_a[n]>t_carrera_c[n])
                {
                    printf("%s obtuvo su mejor tiempo en la carrera 3: %d.\n", atletas[n], t_carrera_c[n]);
                }
            }
            if(t_carrera_a[n]>t_carrera_b[n])
            {
                if(t_carrera_b[n]<t_carrera_c[n])
                {
                    printf("%s obtuvo su mejor tiempo en la carrera 2: %d.\n", atletas[n], t_carrera_b[n]);
                }
                if(t_carrera_b[n]>t_carrera_c[n])
                {
                    printf("%s obtuvo su mejor tiempo en la carrera 3: %d.\n", atletas[n], t_carrera_c[n]);
                }
            }
            if(t_carrera_a[n]==t_carrera_b[n])
            {
                if(t_carrera_a[n]>t_carrera_c[n])
                {
                    printf("%s obtuvo su mejor tiempo en la carrera 3: %d.\n", atletas[n], t_carrera_c[n]);
                }
                if(t_carrera_a[n]==t_carrera_c[n])
                {
                    printf("%s obtuvo su mejor tiempo en las 3 carreras: %d.\n", atletas[n], t_carrera_a[n]);
                }
                printf("%s obtuvo su mejor tiempo en la carrera 1 y 2: %d.\n", atletas[n], t_carrera_a[n]);
            }
            if(t_carrera_a[n]==t_carrera_c[n])
            {
                printf("%s obtuvo su mejor tiempo en la carrera 1 y 3: %d.\n", atletas[n], t_carrera_a[n]);
            }
            if(t_carrera_b[n]==t_carrera_c[n])
            {
                printf("%s obtuvo su mejor tiempo en la carrera 2 y 3: %d.\n", atletas[n], t_carrera_b[n]);
            }
            status=0;
        }
        else
        {
            printf("No se encontro a ningun atleta con ese nombre.\n");
            do
            {
                printf("Desea buscar otro nombre? S/N: ");
                fflush(stdin);
                scanf(" %c", &op);//NOTA IMPORTANTE. Como aqui busco comparar solo un caracter con S o con N, no uso gets.
                //Usar gets genera que la entrada se guarde como cadena y no como caracter, lo que me trajo problemas al comparar.
                op = toupper(op);
                if(op!='S'&&op!='N')
                {
                    printf("La opcion ingrsada es incorrecta.\n");
                }
            }
            while(op=='S');
            printf("out\n");
        }
        op="r";
        do
        {
            printf("Desea buscar otro nombre? S/N: ");
            fflush(stdin);
            scanf(" %c", &op);
            op = toupper(op);
            if(op=='N')
            {
                n=0;
            }
            if(op=='S')
            {
                n=1;
            }
            if(op!='N'&&op!='S')
            {
                printf("La opcion ingresada no es correcta.\n");
                n=2;
            }
        }while(n==2);
    }
    while(n==1);
}
