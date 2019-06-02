#include "saida/imprimeSaida.h"

void imprimeSaida(std::string variacaoQS, std::string tipoVetor, int numItens, long media_comp, 
long media_mov, int media_tempo, std::string vetoresUsados, std::string exibirVetores){

    std::string infoBasicas = imprimeInfoBasicas(variacaoQS, tipoVetor, numItens, media_comp, media_mov, media_tempo);
    std::cout << infoBasicas;
    
    if (exibirVetores.compare("-p") == 0) {
        std::cout << vetoresUsados;
    }

}

std::string imprimeInfoBasicas(std::string variacaoQS, std::string tipoVetor, int numItens, long media_comp,
long media_mov, int media_tempo){
    std::stringstream ss;
    ss << variacaoQS << " " << tipoVetor << " " << numItens << " ";
    ss << media_comp << " " << media_mov << " " << media_tempo << std::endl;

    return ss.str();
}
