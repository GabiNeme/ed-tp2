#include <iostream>
#include "preencheVetor.h"
#include "leituraEntrada.h"

int main(int argc, char *argv[]){

    std::string variacaoQS, tipoVetor, exibirVetores;
    int tamVet = 0;
    leEntrada(argc, argv, variacaoQS, tipoVetor, tamVet, exibirVetores);
    
    std::cout << variacaoQS << std::endl;

    int vetor[10];
    preencheVetorNumeros(vetor, 10, tipoVetor);

    imprimeVetor(vetor, 10);


}