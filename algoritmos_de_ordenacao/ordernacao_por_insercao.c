#include<stdio.h>
#define MAX 10

void ordenacaoPorSelecao(int vet[]) {
    int j = 0;
    for(int i = 0; i < MAX; i++) {
        j = i;
        while(j > 0 && vet[j - 1] > vet[j]) {
            int aux = vet[j - 1];
            vet[j - 1] = vet[j];
            vet[j] = aux;
            j -= 1;
        }
    }
} 

int main(void) {
    int vet[MAX] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    ordenacaoPorSelecao(vet);

    for(int i = 0; i < MAX; i++) {
        printf("Elemento %d -> %d\n", i, vet[i]);
    }

    return 0;
}