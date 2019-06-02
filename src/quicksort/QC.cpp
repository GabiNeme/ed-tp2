#include "quicksort/QC.h"

void QC_Ordena(int vetor[], int Esq, int Dir, long &comp, long &mov){
    int i, j;
    QC_Particao(vetor, Esq, Dir, i, j, comp, mov);
    if (Esq < j) QC_Ordena(vetor, Esq, j, comp, mov);
    if (i < Dir) QC_Ordena(vetor, i, Dir, comp, mov);
}


void QC_Particao(int vetor[],int Esq, int Dir, int &i, int &j, long &comp, long &mov){
    int x;

    i = Esq;
    j = Dir;
    x = vetor[(i + j)/2];
    iteracaoDeTrocas(vetor, x, i, j, comp, mov);

}


void iteracaoDeTrocas(int vetor[], int x, int &i, int &j, long &comp, long &mov){
    int w;
    do {
        while (x > vetor[i]){
            i++;
            comp++;
        }
        while (x < vetor[j]){
            j--;
            comp++;
        }
        if (i <= j) {
            w = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = w;
            i++;
            j--;
            mov++;
        }
    } while (i <= j);
}