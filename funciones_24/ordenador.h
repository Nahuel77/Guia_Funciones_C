void ordenador(char VALORES[10], int POSNUEVAS[10])
{
    char c;
    int i, j, n;

    for(i=0; i<10; i++)
    {
        n=POSNUEVAS[i];
        c=VALORES[n-1];
        if(n>i)
        {
            VALORES[n-1]=VALORES[i];
            VALORES[i]=c;
            printf("Se movio %c a la posicion %d:\n", VALORES[i], i+1);
            for(j=0; j<10; j++)
            {
                printf("%c ", VALORES[j]);
            }

            printf("\n");
        }
    }
}
