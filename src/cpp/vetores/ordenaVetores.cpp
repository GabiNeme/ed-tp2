#include "vetores/ordenaVetores.h"

/*
    Procedimento que realiza num_iter (50) vezes os seguintes procedimentos: cria o vetor de tamanho
    numItens, ordena o vetor, salva o tempo da ordenação, o número de comparações e o número de
    movimentações.
    Após a execução das num_iter vezes, apura a média das comparaçõe e movimentações e a mediana do
    tempo.
    Retorna os valores das métricas através das variáveis passadas como referência
*/
void ordenaVetores(std::string variacaoQS, std::string tipoVetor, int numItens, long &media_comp,
long &media_mov, int &media_tempo, int num_iter, std::string &vets){

    //cria vetores que irão salvar as métricas de cada ordenação
    long n_comp[num_iter], n_mov[num_iter];
    int tempo[num_iter];

    //cria o vetor que será ordenado
    int vetor[numItens];

    for(int i = 0; i < num_iter; i++){ //são feitas num_iter (50) iterações de vetores
        //zera métricas
        long comp = 0;
        long mov = 0;
        int temp = 0;

        //preenche os vetores de acordo com o tipo escolhido pelo usuário (Ale, OrdC, OrdD)
        preencheVetorNumeros(vetor, numItens, tipoVetor);
        //Salva o vetor em uma string para ser impresso depois
        concatenaVetores(vetor, numItens, vets);

        //ordena o vetor
        QuickSort(vetor, numItens, variacaoQS, comp, mov, temp);

        //salva as métricas dessa iteração
        n_comp[i] = comp;
        n_mov[i] = mov;
        tempo[i] = temp;

    }

    //computa média e mediana das métricas
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