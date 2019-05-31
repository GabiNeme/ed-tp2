#include <iostream>
#include "preencheVetor.h"
#include "leituraEntrada.h"
#include "quicksort.h"

int main(int argc, char *argv[]){

    std::string variacaoQS, tipoVetor, exibirVetores;
    int tamVet = 0;
    leEntrada(argc, argv, variacaoQS, tipoVetor, tamVet, exibirVetores);

    int NUM_ITER = 20;



    int vetor[10];
    preencheVetorNumeros(vetor, 10, tipoVetor);

    imprimeVetor(vetor, 10);
    QuickSort(vetor, 10);

    imprimeVetor(vetor, 10);


}