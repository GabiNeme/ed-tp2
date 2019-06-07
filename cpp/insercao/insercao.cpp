#include "insercao/insercao.h"

/* Organiza o vetor que foi passado como referência pelo método da inserção
*/
void Insercao(int vetor[], int ini, int fim, long &comp, long &mov) {
    int i,j;
    int aux;

    //percorre o vetor a partir do segundo elemento
    for (i = ini + 1; i <= fim; i++) {
        aux = vetor[i]; //salva valor da posição 'atual'
        j = i - 1;

        //procura a posição correta do elemento atual
        while (( j >= ini ) && (aux < vetor[j])) {
            //para cada elemento maior que o atual, desloca-o para a direita
            vetor[j + 1] = vetor[j];
            j--;
            comp++;
            mov++;
        }
        vetor[j + 1] = aux; //coloca o elemento atual na posição correta
    }
}