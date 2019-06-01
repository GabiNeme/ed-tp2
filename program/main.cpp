#include <iostream>
#include "leituraEntrada.h"
#include "ordenaVetores.h"
#include "imprimeSaida.h"

int main(int argc, char *argv[]){

    //DADOS DE ENTRADA
    std::string variacaoQS, tipoVetor, exibirVetores;
    int tamVet = 0;

    leEntrada(argc, argv, variacaoQS, tipoVetor, tamVet, exibirVetores);

    //Cria NUM_ITER vetores, popula de acorodo com tipoVetor, ordena segundo estipulado por variacaoQS e apura a média
    //de comparações, movimentações e tempo
    int NUM_ITER = 2;

    long media_comp, media_mov;
    int media_tempo;
    std::string vetoresUsados;

    srand(time(nullptr));
    ordenaVetores(variacaoQS, tipoVetor, tamVet, media_comp, media_mov, media_tempo, NUM_ITER, vetoresUsados);

    //imprime saida
    imprimeSaida(variacaoQS, tipoVetor, tamVet, media_comp, media_mov, media_tempo, vetoresUsados, exibirVetores);

}