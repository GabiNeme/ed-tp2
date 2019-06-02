#include "quicksort/QI.h"

void QI_Ordena(int vetor[], int Esq, int Dir, long &comp, long &mov, int limInser){
    int i, j;
    if((Dir - Esq) > limInser ){ 
        QI_Particao(vetor, Esq, Dir, i, j, comp, mov);
        if (Esq < j) QI_Ordena(vetor, Esq, j, comp, mov, limInser);
        if (i < Dir) QI_Ordena(vetor, i, Dir, comp, mov, limInser);
    }else{
        Insercao(vetor, Esq, Dir, comp, mov);
    }
}


void QI_Particao(int vetor[],int Esq, int Dir, int &i, int &j, long &comp, long &mov){
    int x;

    i = Esq;
    j = Dir;
    x = QM3_mediana (vetor[i], vetor[(i + j)/2], vetor[j], comp) ;
    iteracaoDeTrocas(vetor, x, i, j, comp, mov);

}