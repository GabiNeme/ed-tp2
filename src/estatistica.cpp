#include "estatistica.h"


long media(long vetor[], int n){
    int total = 0;
    for(int i = 0; i < n; i++){
        total += vetor[i];
    }
    return total/n;
}

int mediana(int vetor[], int n){
    long a, b;
    int c;
    QuickSort(vetor, n, "QC", a, b, c);

    if (n%2 == 1){
        return vetor[(n-1)/2];
    }else{
        int p = (n/2);
        return (vetor[p-1] + vetor[p])/2;
    }

}