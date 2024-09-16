void leerValores(int A, int B, int mat[A][B]){
    int i, j;
    for(i=0; i<A; i++){
        for(j=0; j<B; j++){
            printf("Ingrese el valor para la posicion [%d][%d]:\n", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
}
