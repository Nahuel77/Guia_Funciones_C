#define N 50

void mas_repetido(int arr[N], int max){
    int contador[max];
    int i, j=0, n, status, pos=0, tier[max];

    for(i=0; i<max; i++){
        contador[i]=0;
    }

    for(i=0; i<N; i++){
        n=arr[i];
        contador[n]=contador[n]+1;
    }

    for(i=0; i<max; i++){
        printf("%d : %d \n", i, contador[i]);
    }

    tier[0]=contador[0];

    for(i=1; i<max; i++){
        status=0;
        if(contador[i]<tier[0]){
            tier[0]=contador[i];
            j=0;
            status=1;
            pos=i;
            printf("here");
        }
        if(contador[i]==tier[0]&&status==0){
            j++;
            tier[j]=contador[i];
            pos=i;
            printf("here too");
        }
    }
    printf("in %d\n", pos);
    if(j==0){
        printf("El numero que mas se repite es: %d\nSe repite %d veces.\n", tier[j], contador[pos]);
    }else{
        printf("Los numero que mas se repiten son:\n");
        for(i=0; i<=j; i++){
            printf("%d ", tier[i]);
        }
        printf("Cada uno se repite %d veces.\n", contador[pos]);
    }
}
