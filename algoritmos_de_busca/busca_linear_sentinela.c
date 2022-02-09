#include<stdio.h>
#define MAX 11

int buscaLinearComSentinela(int vet[], int elemento) {
    vet[MAX] = elemento;
    int i = 0;

    while (vet[i] != elemento)
    {
        i += 1;
    }
    
    if( i == MAX ) 
        return -1;
    else
        return i;
}

int main(void) {
    int vet[MAX] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    printf("Buscando 15 -> %d\n", buscaLinearComSentinela(vet, 15));
    printf("Buscando 7 -> %d\n", buscaLinearComSentinela(vet, 7));
    printf("Buscando 87 -> %d\n", buscaLinearComSentinela(vet, 87));
    printf("Buscando 9 -> %d\n", buscaLinearComSentinela(vet, 9));
    printf("Buscando 4 -> %d\n", buscaLinearComSentinela(vet, 4));
    printf("Buscando 20 -> %d", buscaLinearComSentinela(vet, 20));

    return 0;
}