void ordenador(int original[10], int copia[10]){
    int i, j, k, n;

    for(i=0; i<10; i++){
        for(j=0; j<10; j++){
            if(original[i]==copia[j]&&i!=j){
                n=copia[i];
                copia[i]=copia[j];
                copia[j]=n;
                printf("Intercambiando %d con %d en el arreglo copia:\n", copia[j], copia[i]);
                for(k=0; k<10; k++){
                    printf("%d, ", copia[k]);
                }
                printf("\n");
            }
        }
    }
}
