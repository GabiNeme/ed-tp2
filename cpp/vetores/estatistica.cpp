#include "vetores/estatistica.h"

/*
  Função que retorna a média de um vetor de tamanho n
*/
long media(long vetor[], int n){
    long total = 0;
    for(int i = 0; i < n; i++){
        total += vetor[i];
    }
    return total/n;
}

/*
  Função que retorna a mediana de um vetor de tamanho n
  Para isso, ordena o vetor e retorna a posição central ou a média das posições
  centrais, para vetores de tamanho par
*/
int mediana(int vetor[], int n){
    long a, b;
    int c;
    QuickSort(vetor, n, "QC", a, b, c); //organiza o vetor

    //se ímpar, retorna a posição central
    if (n%2 == 1){
        return vetor[(n-1)/2];
    //se par, retorna a média das posições centrais
    }else{
        int p = (n/2);
        return (vetor[p-1] + vetor[p])/2;
    }

}