void mostrarValores(int A, int B, int mat[A][B])
{
    int i, j, prom=0;
    int promedios[B], min[A];
    printf("La matriz es:\n");
    for(i=0; i<A; i++)
    {
        for(j=0; j<B; j++)
        {
            printf("\t%d", mat[i][j]);
        }
        printf("\n");
    }

    printf("Promedios por columnas:\n");
    for(i=0; i<B; i++)
    {
        for(j=0; j<A; j++)
        {
            prom+=mat[j][i];
        }
        prom=prom/A;
        promedios[i] = prom;
        printf("Columna %d: %d\n", i+1, promedios[i]);
        prom=0;
    }

    printf("Valor minimo por fila:\n");

    for(i=0; i<A; i++)
    {
        prom=mat[i][0];
        for(j=0; j<B; j++)
        {
            if(mat[i][j]<prom)
            {
                prom=mat[i][j];
            }
        }
        min[i]=prom;
        printf("Fila %d: %d\n", i+1, min[i]);
    }

    system("pause");
}
