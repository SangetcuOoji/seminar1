#include "OptimizedBubbleSort.h"

template <typename A>
void OptimizedBubbleSort(A arr[], int n) {
	for (int i = 0; i < n; i++) {
		bool cnhg = false;
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				A tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			    cnhg = true;
			}
		}
		if (cnhg==false)
			break;
	}
}

template void OptimizedBubbleSort<int>(int[], int);
template void OptimizedBubbleSort<double>(double[], int);