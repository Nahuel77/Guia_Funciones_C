void mejor_t_carrera(char atletas[15][100], int carrera[15])
{
    int i, j, n, status=0, time[15], pos[15];
    time[0]=carrera[0];
    pos[0]=0;
    for(i=0; i<14; i++)
    {
        n=carrera[i+1];
        status=0;
        if(n<time[0])
        {
            time[0]=n;
            pos[0]=i+1;
            j=0;
            status=1;
        }
        if(time[0]==n&&status==0) {
            j++;
            time[j]=n;
            pos[j]=i+1;
        }
    }
    if(j==0)
    {
        printf("El atleta con el mejor tiempo es %s con un tiempo de %d.\n", atletas[pos[j]], time[j]);
    }else{
        printf("Los atletas con los mejores tiempos son:\n");
        for(i=0;i<=j;i++){
            printf("%s: %d\n", atletas[pos[i]], time[i]);
        }
    }
}
