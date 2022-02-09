#include<stdio.h>
#include "ordernacao_simples.h";
#define MAX 10

int buscaLinearListaOrdenada(int vet[], int elemento) {
    int i = 0;

    while (vet[i] < elemento && i < MAX)
    {
        i += 1;
    }
    
    if(vet[i] == elemento)
        return i;
    else
        return -1;
}

int main(void) {
    int vet[MAX] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    ordernacaoSimples(vet, MAX);

    printf("Buscando 1 -> %d\n", buscaLinearListaOrdenada(vet, 1));
    printf("Buscando 5 -> %d\n", buscaLinearListaOrdenada(vet, 5));
    printf("Buscando 7 -> %d\n", buscaLinearListaOrdenada(vet, 7));
    printf("Buscando 9 -> %d\n", buscaLinearListaOrdenada(vet, 9));
    printf("Buscando 10 -> %d\n", buscaLinearListaOrdenada(vet, 10));
    printf("Buscando 20 -> %d", buscaLinearListaOrdenada(vet, 20));

    return 0;
}