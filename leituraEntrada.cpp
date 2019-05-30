#include "leituraEntrada.h"

void leEntrada(int argc, char ** argv, std::string &variacaoQS, std::string &tipoVetor, int &numItens, std::string &exibirVetor){

    if (argc < 4 || argc > 6){
        std::cout << "São necessários exatamente três, quatro ou cinco argumentos, no formato: " <<
                "<variacao> <tipo> <tamanho> [-p]." << std::endl;
        exit(1);
    }

    variacaoQS = argv[1];
    tipoVetor = argv[2];
    numItens = atoi(argv[3]);
    if(argc == 5) {
        exibirVetor = argv[4];
    }else if (argc == 6){
        exibirVetor = argv[5];
    }

    verificaDadosEntrada(numItens, exibirVetor);
}


void verificaDadosEntrada(int numItens, std::string exibirVetor){

    if (numItens < 0){
        std::cout << "O número de itens dos vetores deve ser maior que zero." << std::endl;
        exit(1);
    }


}

    