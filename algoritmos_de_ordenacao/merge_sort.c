#include<stdio.h>
#define MAX 10

void mergeSort(int vet[], int dimensao) {
    mergeSortRec(0, dimensao - 1, vet, dimensao);   
}

void mergeSortRec(int esq, int dir, int arr[], int dimensao) {
    if( esq >= dir ) return;
    int m1 = (esq + dir) / 2;
    int m2 = m1 + 1;
    mergeSortRec(esq, m1, arr, dimensao);
    mergeSortRec(m2, dir, arr, dimensao);
    junta(esq, m1, m2, dir, arr, dimensao);
}

void junta(int esq, int m1, int m2, int dir, int arr[], int dimensao) {
    int tempVet[dimensao];

    int indexEsq = esq; 
    int indexDir = m2;  
    int indexTempVet = esq;

    for(int i = esq; i <= dir; i++) {
        tempVet[i] = arr[i];
    }

    while(indexEsq <= m1 && indexDir <= dir) {
        if( tempVet[indexEsq] <= tempVet[indexDir] ) {
            arr[indexTempVet] = tempVet[indexEsq];
            indexEsq += 1;        
        } else {
            arr[indexTempVet] = tempVet[indexDir];
            indexDir += 1;   
        }
        indexTempVet += 1;  
    }

    while(indexEsq <= m1) {
        arr[indexTempVet] = tempVet[indexEsq];
        indexEsq += 1;
        indexTempVet += 1;    
    }

    while(indexDir <= dir) {
        arr[indexTempVet] = tempVet[indexDir];
        indexDir += 1;
        indexTempVet += 1;    
    }

    printf("Esquerda -> (%d, %d), Direita -> (%d, %d) \n", esq, m1, m2, dir);
}

int main (void) {
    int vet[MAX] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    mergeSort(vet, MAX);

    for(int i = 0; i < MAX; i++) {
        printf("%d\n", vet[i]);
    }

    return 0;
}