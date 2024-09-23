void cargar_t_carrera_a(char atletas[15][100], int t_carrera_a[15]){
    int i;
    printf("Ingrese los tiempos de la carrera 1, correspondiente a cada atleta.\n");
    for(i=0; i<15; i++){
        printf("Ingrese el tiempo para el concursante %s: ", atletas[i]);
        scanf("%d", &t_carrera_a[i]);
    }
}
