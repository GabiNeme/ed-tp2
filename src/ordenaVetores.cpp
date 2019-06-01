#include "ordenaVetores.h"


void ordenaVetores(std::string variacaoQS, std::string tipoVetor, int numItens, long &media_comp, 
long &media_mov, int &media_tempo, int num_iter, std::string &vets){

    long n_comp[num_iter], n_mov[num_iter];
    int tempo[num_iter];

    int vetor[numItens];

    for(int i = 0; i < num_iter; i++){
        long comp = 0;
        long mov = 0;
        int temp = 0;

        preencheVetorNumeros(vetor, numItens, tipoVetor); 
        concatenaVetores(vetor, numItens, vets);


        QuickSort(vetor, numItens, variacaoQS, comp, mov, temp);

        n_comp[i] = comp;
        n_mov[i] = mov;
        tempo[i] = temp;

    }

    media_comp = media(n_comp, num_iter);
    media_mov = media(n_mov, num_iter);
    media_tempo = mediana(tempo, num_iter);

}


void concatenaVetores(int vetor[], int n, std::string &vets){

    for(int i = 0; i < n; i++){
        vets.append(std::to_string(vetor[i]));
        vets.append(" ");
    }
    vets.append("\n");
    return;
}