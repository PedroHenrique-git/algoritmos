#include<stdio.h>
#include "ordernacao_simples.h";
#define MAX 10

int buscaBinariaIterativa(int vet[], int elemento) {
    int inf = 0, sup = MAX - 1, meio = 0;

    while( inf <= sup ) {
        meio = (sup + inf) / 2;
        if(elemento == vet[meio]) {
            return meio;
        } else {
            if(elemento < vet[meio]) {
                sup = meio - 1;
            } else {
                inf = meio + 1;
            }
        }
    }

    return -1;
}

int main(void) {
    int vet[MAX] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    ordernacaoSimples(vet, MAX);

    printf("Buscando 1 -> %d\n", buscaBinariaIterativa(vet, 1));
    printf("Buscando 5 -> %d\n", buscaBinariaIterativa(vet, 5));
    printf("Buscando 7 -> %d\n", buscaBinariaIterativa(vet, 7));
    printf("Buscando 9 -> %d\n", buscaBinariaIterativa(vet, 9));
    printf("Buscando 10 -> %d\n", buscaBinariaIterativa(vet, 10));
    printf("Buscando 20 -> %d", buscaBinariaIterativa(vet, 20));

    return 0;
}