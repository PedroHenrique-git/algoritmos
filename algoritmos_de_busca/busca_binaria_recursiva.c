#include<stdio.h>
#include "ordernacao_simples.h"
#define MAX 10

int buscaBinariaRecursiva(int vet[], int elemento, int inferior, int superior, int meio) {
    if( inferior <= superior ) {
        if(elemento == vet[meio]) {
            return meio;
        } else {
            if( elemento < vet[meio] ) {
                return buscaBinariaRecursiva(vet, elemento, inferior, meio - 1, (superior + inferior) / 2); 
            } else {
                return buscaBinariaRecursiva(vet, elemento, meio + 1, superior, (superior + inferior) / 2);     
            }
        }
    }
 
    return -1;
}

int main(void) {
    int vet[MAX] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    ordernacaoSimples(vet, MAX);

    printf("Buscando 1 -> %d\n", buscaBinariaRecursiva(vet, 1, 0, MAX - 1, 0));
    printf("Buscando 5 -> %d\n", buscaBinariaRecursiva(vet, 5, 0, MAX - 1, 0));
    printf("Buscando 7 -> %d\n", buscaBinariaRecursiva(vet, 7, 0, MAX - 1, 0));
    printf("Buscando 9 -> %d\n", buscaBinariaRecursiva(vet, 9, 0, MAX - 1, 0));
    printf("Buscando 10 -> %d\n", buscaBinariaRecursiva(vet, 10, 0, MAX - 1, 0));
    printf("Buscando 20 -> %d\n", buscaBinariaRecursiva(vet, 20, 0, MAX - 1, 0));
    printf("Buscando 10 -> %d", buscaBinariaRecursiva(vet, 10, 0, MAX - 1, 0));

    return 0;
}