#include "quicksort/QM3.h"

void QM3_Ordena(int vetor[], int Esq, int Dir, long &comp, long &mov){
    int i, j;
    QM3_Particao(vetor, Esq, Dir, i, j, comp, mov);
    if (Esq < j) QM3_Ordena(vetor, Esq, j, comp, mov);
    if (i < Dir) QM3_Ordena(vetor, i, Dir, comp, mov);
}


void QM3_Particao(int vetor[],int Esq, int Dir, int &i, int &j, long &comp, long &mov){
    int x;
    i = Esq;
    j = Dir;
    x = QM3_mediana (vetor[i], vetor[(i + j)/2], vetor[j], comp) ;
    iteracaoDeTrocas(vetor, x, i, j, comp, mov);
}


/*
int QM3_mediana(int n1, int n2, int n3, long &comp){
    if((n2 < n1 && n1 < n3) || (n3 < n1 && n1 < n2) ){
        comp = comp + 4;
        return n1;
    } else if ((n1 < n2 && n2 < n3) || (n3 < n2 && n2 < n1) ){
        comp = comp + 8;
        return n2;
    }else {
        comp = comp + 8;
        return n3;
    }
}*/

int QM3_mediana(int n1, int n2, int n3, long &comp){
    if(n1 < n2){
        if (n2 < n3){ //n1 n2 n3
            comp = comp + 2;
            return n2;
        }else{ // n3? n1 n3? n2
            if (n1 > n3){
                comp = comp + 3;
                return n1;
            }else{
                comp = comp + 3;
                return n3;
            }
        }
    }else { // n3? n2 n3? n1 n3?
        if (n3 > n1){ //n2 n1 n3
            comp = comp + 2;
            return n1;
        }else{ // n3? n2 n3? n1
            if (n3 < n2){
                comp = comp + 3;
                return n2;
            }else{
                comp = comp + 3;
                return n3;
            }
        }
    }
}