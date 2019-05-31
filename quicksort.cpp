#include "quicksort.h"

void QuickSort(int vetor[], int n, std::string tipoQuickSort){

    if (tipoQuickSort.compare("QC") == 0){
        QC_Ordena(vetor, 0, n-1);
    }else if  (tipoQuickSort.compare("QM3") == 0){

    }else if  (tipoQuickSort.compare("QPE") == 0){

    }else if  (tipoQuickSort.compare("QI1") == 0){

    }else if  (tipoQuickSort.compare("QI5") == 0){

    }else if  (tipoQuickSort.compare("QI10") == 0){

    }else if  (tipoQuickSort.compare("QNR") == 0){

    }else{
        std::cout << "Variação do Quicksort não encontrada. As opções disponíveis são QC, QM3, QPE, QI1, QI5, QI10, QNR." << std::endl;
        exit(1)
    }

}
