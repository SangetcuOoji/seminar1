#include "BubbleSort.h"

template<typename A>
void BubbleSort(A arr[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n- i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				A tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}





template void BubbleSort<int>(int[], int);
template void BubbleSort<double>(double[], int);




