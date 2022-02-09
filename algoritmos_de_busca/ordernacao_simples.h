int ordernacaoSimples(int vet[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        for(int j = i + 1; j < tamanho; j++) {
            if( vet[i] > vet[j] ) {
                int aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux; 
            }
        }
    }
}