#include "quicksort/QNR.h"


void QNR_Ordena(int vetor[], int n, long &comp, long &mov){
    
    Pilha pilha;
    int e_item, d_item; // campos esq e dir

    int esq, dir, i, j;
    esq = 0;
    dir = n-1;
    e_item = esq;
    d_item = dir;

    pilha.Empilha(e_item, d_item);

    do{
        if (dir > esq) {
            QC_Particao(vetor, esq ,dir,i, j,comp, mov);
            if ((j-esq)>(dir-i)) {
                d_item = j;
                e_item = esq;
                pilha.Empilha(e_item, d_item);
                esq = i;
            }else {
                e_item = i;
                d_item = dir;
                pilha.Empilha(e_item, d_item);
                dir = j;
            }
        }else {
            pilha.Desempilha(e_item, d_item);
            dir = d_item;
            esq = e_item;
        }    
    }while (!pilha.Vazia());
}