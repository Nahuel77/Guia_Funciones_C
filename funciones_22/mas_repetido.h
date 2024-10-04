#define N 50

void mas_repetido(int arr[N], int max)
{
    int contador[max];
    int i, j=0, n, status, pos[max], tier[max];

    for(i=0; i<max; i++)
    {
        contador[i]=0;
        tier[i]=0;
        pos[i]=0



        ;
    }

    for(i=0; i<N; i++)
    {
        n=arr[i];
        contador[n]++;
    }

    for(i=0; i<max; i++)//Codigo para confirmar el funcionamiento del algoritmo.
    {
        printf("%d : %d \n", i, contador[i]);
    }

    tier[0]=contador[0];

    for(i=1; i<max; i++)
    {
        status=0;
        n=contador[i];
        if(n>tier[0])
        {
            tier[0]=n;
            j=0;
            status=1;
            pos[0]=i;
        }
        if(n==tier[0]&&status==0)
        {
            j++;
            tier[j]=i;
            pos[j]=i;
        }
    }

    if(j==0)
    {
        printf("El numero que mas se repite es: %d\nSe repite %d veces.\n", pos[0], tier[0]);
    }
    else
    {
        printf("Los numero que mas se repiten son:\n");
        for(i=0; i<=j; i++)
        {
            printf("\t%d ", pos[i]);
        }
        printf("\nCada uno se repite %d veces.\n\n", tier[0]);
    }
}
