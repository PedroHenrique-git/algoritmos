#include<stdio.h>
#define MAX 10

int buscaLinear(int vet[], int elemento) {
    for(int i = 0; i < MAX; i++) {
        if( vet[i] == elemento ) return i; 
    }
    return -1;
}

int main(void) {
    int vet[MAX] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    printf("Buscando 1 -> %d\n", buscaLinear(vet, 1));
    printf("Buscando 5 -> %d\n", buscaLinear(vet, 5));
    printf("Buscando 7 -> %d\n", buscaLinear(vet, 7));
    printf("Buscando 9 -> %d\n", buscaLinear(vet, 9));
    printf("Buscando 10 -> %d\n", buscaLinear(vet, 10));
    printf("Buscando 20 -> %d", buscaLinear(vet, 20));

    return 0;
}