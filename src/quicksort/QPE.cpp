#include "quicksort/QPE.h"

void QPE_Ordena(int vetor[], int Esq, int Dir, long &comp, long &mov){
    int i, j;
    QPE_Particao(vetor, Esq, Dir, i, j, comp, mov);
    if (Esq < j) QPE_Ordena(vetor, Esq, j, comp, mov);
    if (i < Dir) QPE_Ordena(vetor, i, Dir, comp, mov);
}


void QPE_Particao(int vetor[],int Esq, int Dir, int &i, int &j, long &comp, long &mov){
    int x;

    i = Esq;
    j = Dir;
    x = vetor[i];
    iteracaoDeTrocas(vetor, x, i, j, comp, mov);

}

