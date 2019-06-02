#include "insercao/insercao.h"


void Insercao(int vetor[], int ini, int fim, long &comp, long &mov) {
    int i,j;
    int aux;

    for (i = ini + 1; i <= fim; i++) {
        aux = vetor[i];
        j = i - 1;

        while (( j >= ini ) && (aux < vetor[j])) {

            vetor[j + 1] = vetor[j];
            j--;
            comp++;
            mov++;
        }
        vetor[j + 1] = aux;
    }
}