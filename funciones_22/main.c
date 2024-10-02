#include <stdio.h>
#include <stdlib.h>
#include "random_num.h"
#include "mas_repetido.h"

#define N 50

int random_num(int min, int max);
void mas_repetido(int arr[N], int max);

int main()
{
    int i, n, min=0, max=10;
    int arr[N];
    printf("Numeros generados aleatoriamente:\n");
    for(i=0; i<N; i++){
        arr[i]=random_num(min, max+1);
    }
    for(i=0; i<N; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    mas_repetido(arr, max);

    system("pause");
    return 0;
}
