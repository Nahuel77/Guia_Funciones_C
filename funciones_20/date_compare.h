int date_compare(int date_a[3], int date_b[3]){
    int i;
    for(i=0; i<3; i++){
        if(date_a[i]<date_b[i]){
            return 1;
        }
    }
    return 0;
}
