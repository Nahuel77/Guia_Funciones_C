void promedios(char atletas[15][100], int t_carrera_a[15], int t_carrera_b[15], int t_carrera_c[15]){
    int i, n;
    for(i=0; i<15; i++){
        n = (t_carrera_a[i] + t_carrera_b[i] + t_carrera_c[i])/3;
        printf("%s %d\n", atletas[i], n);
    }
}
//NOTA: Esta función no forma parte del problema, solo fue creada para controlar el procesamiento correcto en las otras funciones.
