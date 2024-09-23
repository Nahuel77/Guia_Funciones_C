int date_diff(int date_a[3], int date_b[3]){
    int n;
    n=((date_a[0]-date_b[0])*365)+((date_a[1]-date_b[1])*30)+(date_a[2]-date_b[2]);
    return n;
}
