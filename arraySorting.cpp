//*******************************
//oj.tsinsen
//A1020.ÊýÁÐÅÅÐò
//
//quick sort
#include <cstdio>
using namespace std;
void quickSort(int [], int, int);
void swap(int [], int, int);

int main() {
	int num, array[200];
	scanf("%d", &num);

	for(int i = 0; i < num; i ++)
		scanf("%d", &array[i]);

	quickSort(array, 0, num);

	for (int i = 0; i < num; i ++)
		printf("%d ", array[i]);
	return 0;
}

void quickSort(int array[], int low, int high) { //sorting: [low, high)
	if (high <= low+1)
		return;

	int pivot = array[low], lo = low, hi = high-1;
	while (lo < hi) {
		while (array[lo] <= pivot && lo < high)
			lo ++;
		while (array[hi] >= pivot && hi > low)
			hi --;

		if (lo < hi) {
			swap(array, lo, hi);
		}
	}

	swap(array, low, hi);
	quickSort(array, low, hi);
	quickSort(array, hi+1, high);
}

void swap(int array[], int swap1, int swap2) {
	int tmp = array[swap1];
	array[swap1] = array[swap2];
	array[swap2] = tmp;
}
