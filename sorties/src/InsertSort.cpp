#include "InsertSort.h"


template <typename A>
void InsertSort(A arr[],int n){
    for (int i = 1; i < n; i++) {

        for(int j=i;j>0;j--){
            if (arr[j] < arr[j - 1]) {
                A tmp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = tmp;
            }
            else { break; }
        }
    }
}


template void InsertSort<int>(int[], int);
template void InsertSort<double>(double[], int);







