
void QM3_Ordena(int vetor[], int Esq, int Dir){
    int i, j;
    Particao(vetor, Esq, Dir, i, j);
    if (Esq < j) Ordena(vetor, Esq, j);
    if (i < Dir) Ordena(vetor, i, Dir);
}


void QM3_Particao(int vetor[],int Esq, int Dir, int &i, int &j){
    int x, w;
    i = Esq;
    j = Dir;
    x = QM3_mediana (vetor[i], vetor[(i + j)/2], vetor[j]) ;
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



int QM3_mediana(int n1, int n2, int n3){
    if((n2 < n1 && n1 < n3) || (n3 < n1 && n1 < n2) ){
        return n1;
    } else if ((n1 < n2 && n2 < n3) || (n3 < n2 && n2 < n1) ){
        return n2;
    }else {
        return n3;
    }
}