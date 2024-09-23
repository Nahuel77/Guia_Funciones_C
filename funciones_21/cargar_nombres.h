#include <string.h>

void cargar_nombres(char atletas[15][100]){
    int i, j, status=0;
    char nombre[100];
    printf("Ingrese los nombres de los atletas:\n");
    for(i=0; i<15; i++){
        printf("Atleta %d: ", i+1);
        fflush(stdin);
        gets(nombre);
        for(j=0; j<15; j++){
            if(strcmp(nombre, atletas[j])==0){
                printf("El nombre ingresado ya existe en la lista. Ingrese otro nombre.\n");
                i--;
                status=1;
            }
        }
        if(status==0){
            strcpy(atletas[i], nombre);
        }
        status=0;
    }
}

