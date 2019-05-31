
void QC_Ordena(int vetor[], int Esq, int Dir){
    int i, j;
    Particao(vetor, Esq, Dir, i, j);
    if (Esq < j) Ordena(vetor, Esq, j);
    if (i < Dir) Ordena(vetor, i, Dir);
}


void QC_Particao(int vetor[],int Esq, int Dir, int &i, int &j){
    int x, w;
    i = Esq;
    j = Dir;
    x = vetor[(i + j)/2];
    do {
        while (x > vetor[i]) i++;
        while (x < vetor[j]) j--;
        if (i <= j) {
            w = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = w;
            i++;
            j--;
        }
    } while (i <= j);
}