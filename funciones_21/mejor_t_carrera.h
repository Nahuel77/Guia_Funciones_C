void mejor_t_carrera(char atletas[15][100], int carrera[15])
{
    int i, j, n, n2, prom[15], pos[15];
    for(i=0; i<14; i++)
    {
        n=carrera[i];
        n2=carrera[i+1];
        if(n<n2)
        {
            prom[0]=n;
            pos[0]=i+1;
            j=0;
        }
        if(n>n2)
        {
            prom[0]=n2;
            pos[0]=i+1;
            j=0;
        }
        if(n==n2) {
            prom[j]=n;
            pos[j]=i;
            j++;
            prom[j]=n2;
            pos[j]=i+1;
            j++;
        }
    }
    if(j==0)
    {
        printf("El atleta con el mejor tiempo es %s con un tiempo de %d.\n", atletas[pos[j]], prom[j]);
    }else{
        printf("Los atletas con los mejores tiempos son:\n");
        for(i=0;i<j;i++){
            printf("%s: %d\n", atletas[pos[i]], prom[i]);
        }
    }
}
