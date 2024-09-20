#include <string.h>

void mayus(char cad[]){
    int i;
    for(i=0; i<strlen(cad); i++){
        cad[i]=toupper(cad[i]);
    }
}
