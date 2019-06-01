#include "quicksort.h"
#include "estatistica.h"
#include <string>


void ordenaVetores(std::string variacaoQS, std::string tipoVetor, int numItens, long &media_comp, 
long &media_mov, int &media_tempo, int num_iter, std::string &vets);

//std::string concatenaVetores(int vetor[], int n);

void concatenaVetores(int vetor[], int n, std::string &vets);