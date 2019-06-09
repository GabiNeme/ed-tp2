#include "vetores/preencheVetor.h"

/*
    Identifica o tipo de vetor escolhido pelo usuário (Ale, OrdC e OrD) e chama
    o procedimento correspondente que irá preencher o vetor
*/
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

/*
    Preenche o vetor de forma crescente
*/
void preencheVetorCrescente(int vetorAOrdenar[], int tamVet){
    for(int i = 0; i < tamVet; i++){
        vetorAOrdenar[i] = i;
    }
    return;
}

/*
    Preenche o vetor de forma decrescente
*/
void preencheVetorDecrescente(int vetorAOrdenar[], int tamVet){
    for(int i = 0; i < tamVet; i++){
        vetorAOrdenar[i] = tamVet - i -1 ;
    }
    return;
}


/*
    Preenche o vetor usando números aleatórios entre 0 e tamVet
*/
void preencheVetorAleatorio(int vetorAOrdenar[], int tamVet){
    //srand(time(nullptr));
    for(int i = 0; i < tamVet; i++){
        vetorAOrdenar[i] = rand() % tamVet;
    }
    return;
}


/*
    Função que imprime o vetor na saída padrão
*/
void imprimeVetor(int vetor[], int ini, int fim){
    for(int i = ini; i <= fim; i++){
        std::cout << vetor[i] << " ";
    }
    std::cout << std::endl;
    return;
}