void cargar_tiempos(char atletas[15][100], int t_carrera_a[15], int t_carrera_b[15], int t_carrera_c[15])
{
    int i, j;

    for(i=0; i<3; i++)
    {
        printf("Ingrese los tiempos de la carrera %d, correspondiente a cada atleta.\n", i+1);
        if(i==0)
        {
            for(j=0; j<15; j++)
            {
                printf("%s: ", atletas[j]);
                scanf("%d", &t_carrera_a[j]);
            }
        }
        if(i==1){
            for(j=0; j<15; j++)
            {
                printf("%s: ", atletas[j]);
                scanf("%d", &t_carrera_b[j]);
            }
        }
        if(i==2){
            for(j=0; j<15; j++)
            {
                printf("%s: ", atletas[j]);
                scanf("%d", &t_carrera_c[j]);
            }
        }
    }
}
