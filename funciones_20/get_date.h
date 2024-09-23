void get_date(int date[3])
{
    do{
        printf("Anio: ");
        scanf("%d", &date[0]);
        if(date[0]>2024)
        {
            printf("El anio ingresado es incorrecto. Ingrese un anio valido.\n");
            system("pause");
            system("cls");
        }
    }
    while(date[0]>2024);

    do{
        printf("Mes: ");
        scanf("%d", &date[1]);
        if(date[1]<=0 || date[1]>12)
        {
            printf("El mes ingresado es incorrecto. Ingrese un mes valido.\n");
            system("pause");
            system("cls");
        }
    }
    while(date[1]<=0 || date[1]>12);

    do{
        printf("Dia: ");
        scanf("%d", &date[2]);
        if(date[2]<=0 || date[2]>30){
            printf("El dia ingresado es incorrecto. Ingrese un dia valido.\n");
            system("pause");
            system("cls");
        }
    }while(date[2]<=0 || date[2]>30);
}
