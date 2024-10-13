#include "SelectionSort.h"


template <typename A>
void SelectionSort(A arr[],int n){
	for (int i = 0; i < n- 1; i++) {
		int min = arr[i];
		int number = i;
		for(int j = i+1 ;j < n;j++)
		if (arr[j] < min) {
			min = arr[j];
			number = j;
		}
		A tmp = arr[i];
		arr[i] = min;
		arr[number] = tmp;
	}
}

template void SelectionSort<int>(int[], int);
template void SelectionSort<double>(double[], int);
