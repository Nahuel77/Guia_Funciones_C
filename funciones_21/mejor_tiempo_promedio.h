void mejor_tiempo_promedio(char atletas[15][100], int t_carrera_a[15], int t_carrera_b[15], int t_carrera_c[15])
{
    int i, j, n, status, prom[15], pos[15];

    prom[0]=(t_carrera_a[0] + t_carrera_b[0] + t_carrera_c[0])/3;
    pos[0]=0;

    for(i=0; i<14; i++)
    {
        n = (t_carrera_a[i+1] + t_carrera_b[i+1] + t_carrera_c[i+1])/3;
        status=0;
        if(n<prom[0])
        {
            prom[0]=n;
            pos[0]=i+1;
            j=0;
            status=1;
        }
        if(n==prom[0]&&status==0)
        {
            j++;
            prom[j]=n;
            pos[j]=i+1;
        }
    }
    if(j==0)
    {
        printf("El atleta con el mejor promedio es %s con un promedio de %d.\n", atletas[pos[j]], prom[j]);
    }else{
        printf("Los atletas con los mejores promedios son:\n");
        for(i=0;i<=j;i++){
            printf("%s: %d\n", atletas[pos[i]], prom[i]);
        }
    }
}
