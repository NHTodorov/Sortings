#include <iostream>

using namespace std;

void BubbleSort(int arr[], int num) {
	bool swapped;	// flag for changes
	for (int i = 0; i < num - 1; i++) {	// cycle the whole array num - 1 times
		swapped = false;

		for (int j = 0; j < num - i - 1; j++) {	// taking 2 digits	->	[j]	& [j+1] 
			if (arr[j] > arr[j + 1]) {	// checking them which one is bigger
				// Note:    // if want in descending order ----->  arr[j] < arr[j + 1];

				swap(arr[j], arr[j + 1]);	// swap the ellements if arr[j] < arr[j + 1]
										   // or swap the ellements (ONLY when the Note is used)  if  arr[j] > arr[j + 1]	
				swapped = true;	
			}
		}
		if (!swapped) break;
	}
}

void CoutArray(int arr[], int num) {
	for (int i = 0; i < num; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	cout << "Insert amount of ellements for sorting: " << endl;
	int num;
	cin >> num;
	cout << endl;
	int* arr = new int[num];	// dynamic array 
	cout << "Insert the digits for sorting: " << endl;
	for (int i = 0; i < num; i++) {	// cycle the numbers
		cin >> arr[i];	// cin numbers for bubble sorting
	}
	cout << endl;

	cout << "Entered digits for sorting: " << endl;	// cout entered digits for sorting
	CoutArray(arr, num);

	BubbleSort(arr, num);	// sorting entered digits

	cout << "Sorted array: " << endl;
	CoutArray(arr, num);	// cout sorted arr
	cout << endl;

	delete[] arr;

	return 0;
}