#include "pilha/pilha.h"


Pilha::Pilha(){
    node_t *no_cabeca = new node_t();
    this->topo = no_cabeca;
    no_cabeca->proximo = nullptr;
    this->fundo = no_cabeca;
}


Pilha::~Pilha(){
    node_t *atual = this->topo;
    node_t *prox = nullptr;
    while (atual != nullptr){
        prox = atual->proximo;
        delete atual;
        atual = prox;
    }
}


void Pilha::Empilha(int Esq, int Dir){
    node_t *no_a_inserir = new node_t();
    this->topo->Esq = Esq;
    this->topo->Dir = Dir;
    no_a_inserir->proximo = this->topo;
    this->topo = no_a_inserir;
}

bool Pilha::Vazia(){
    return (this->topo == this->fundo);
}

void Pilha::Desempilha(int &Esq, int &Dir){
    node_t *no_a_apagar = this->topo;
    if (this->Vazia()){
        std::cout << "ERRO: pilha vazia." << std::endl;
        return;
    }
    this->topo = no_a_apagar->proximo;
    delete no_a_apagar;

    Esq = topo->Esq;
    Dir = topo->Dir;
}
