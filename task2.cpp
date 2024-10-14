#include <iostream>
using namespace std;
template <typename T>
void selectionSort(T arr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		int SmallSub = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[SmallSub]) {
				SmallSub = j;
			}
		}
		T temp = arr[i];
		arr[i] = arr[SmallSub];
		arr[SmallSub] = temp;
	}
}

template <typename T>
void printArray(T arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	
	int intArray[5] = { 64, 25, 12, 22, 11 };
	cout << "Original integer array: ";
	printArray(intArray, 5);
	selectionSort(intArray, 5);
	cout << "Sorted integer array: ";
	printArray(intArray, 5);

	

	return 0;
}
