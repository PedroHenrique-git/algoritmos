#include<stdio.h>
#define MAX 10

void ordenacaoPorSelecao(int vet[]) {
    for(int i = 0; i < MAX; i++) {
        int indiceMenorValor = i;

        for(int j = i + 1; j < MAX; j++) {
            if( vet[j] < vet[indiceMenorValor] ) {
                indiceMenorValor = j;
            }
        }

        int aux = vet[i];
        vet[i] = vet[indiceMenorValor];
        vet[indiceMenorValor] = aux;
    }
}

int main(void) {
    int vet[MAX] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    ordenacaoPorSelecao(vet);

    for(int i = 0; i < MAX; i++) {
        printf("Element %d -> %d\n", i, vet[i]);
    }

    return 0;
}