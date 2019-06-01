#include "quicksort.h"

void QuickSort(int vetor[], int n, std::string tipoQuickSort, long &comp, long &mov, int &temp){
    using namespace std::chrono;
    // Pega o horário do sistema antes da execução do código
    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    if (tipoQuickSort.compare("QC") == 0){
        QC_Ordena(vetor, 0, n-1, comp, mov);
    }else if  (tipoQuickSort.compare("QM3") == 0){

    }else if  (tipoQuickSort.compare("QPE") == 0){

    }else if  (tipoQuickSort.compare("QI1") == 0){

    }else if  (tipoQuickSort.compare("QI5") == 0){

    }else if  (tipoQuickSort.compare("QI10") == 0){

    }else if  (tipoQuickSort.compare("QNR") == 0){

    }else{
        std::cout << "Variação do Quicksort não encontrada. As opções disponíveis são QC, QM3, QPE, QI1, QI5, QI10, QNR." << std::endl;
        exit(1);
    }

    // Pega o horário do sistema depois da execução do código
    high_resolution_clock::time_point t2 = high_resolution_clock::now();

    duration<double, std::micro> elapsed_time = duration_cast<duration<double>>(t2 - t1);

    temp = elapsed_time.count();

}
