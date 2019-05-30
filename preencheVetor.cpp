#include "preencheVetor.h"


void preencheVetorNumeros(int vetorAOrdenar[], int tamVet, std::string tipo){
    if (tipo.compare("Ale") == 0){
        preencheVetorAleatorio(vetorAOrdenar, tamVet);
        return;
    }else if (tipo.compare("OrdC") == 0){
        preencheVetorCrescente(vetorAOrdenar, tamVet);
        return;
    }else if (tipo.compare("OrdD") == 0){
        preencheVetorDecrescente(vetorAOrdenar, tamVet);
        return;
    }
}

void preencheVetorCrescente(int vetorAOrdenar[], int tamVet){
    for(int i = 0; i < tamVet; i++){
        vetorAOrdenar[i] = i;
    }
    return;
}

void preencheVetorDecrescente(int vetorAOrdenar[], int tamVet){
    for(int i = 0; i < tamVet; i++){
        vetorAOrdenar[i] = tamVet - i -1 ;
    }
    return;
}

void preencheVetorAleatorio(int vetorAOrdenar[], int tamVet){
    srand(time(0));
    for(int i = 0; i < tamVet; i++){
        vetorAOrdenar[i] = rand() % tamVet;
    }
    return;
}

void imprimeVetor(int vetor[], int tamVet){
    for(int i = 0; i < tamVet; i++){
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;
    return;
}