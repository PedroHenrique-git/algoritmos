#include<stdio.h>
#define MAX 10

void trocar(int vet[], int i, int j) {
    int aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

int particao(int vet[], int esq, int dir) {
    int idPivo = esq;

    for(int i = idPivo + 1; i <= dir; i += 1) {
        if (vet[i] < vet[esq]) {
            idPivo += 1;
            trocar(vet, idPivo, i);
        }
    }

    trocar(vet, esq, idPivo);

    return idPivo; 
}

void quickSortRec(int vet[], int esq, int dir) {
    if(esq >= dir) return;
    int pivo = particao(vet, esq, dir);
    quickSortRec(vet, esq, pivo - 1);
    quickSortRec(vet, pivo + 1, dir);
}

void quickSort(int vet[], int n) {
    quickSortRec(vet, 0, n - 1);
}

int main (void) {
    int vet[MAX] = { 6, 1, 3, 5, 1, 3, 10, 14, 3, 1783 };

    for(int i = 0; i < MAX; i++) {
        printf("num: %d\n", vet[i]);
    }

    quickSort(vet, MAX);

    printf("\n\n");

    for(int i = 0; i < MAX; i++) {
        printf("num: %d\n", vet[i]);
    }

    return 0;
}