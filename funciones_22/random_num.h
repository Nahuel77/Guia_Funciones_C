int random_num(int min, int max){
    int ran;
    ran=min+(rand()%(min-max+1));
    return ran;
}
